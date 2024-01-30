@interface WFRecordAudioAction : WFAction

@property (readonly, nonatomic) long long outputFormat;
@property (readonly, nonatomic) BOOL startImmediately;
@property (readonly, nonatomic) double recordingDuration;

+ (BOOL)outputIsExemptFromTaintTrackingInheritance;
+ (id)userInterfaceProtocol;
+ (id)userInterfaceXPCInterface;
+ (id)datedFilenameForFormat:(long long)a0;
+ (id)fileTypeForFormat:(long long)a0;

- (id)contentDestinationWithError:(id *)a0;
- (void)runWithRemoteUserInterface:(id)a0 input:(id)a1;
- (id)smartPromptWithContentDescription:(id)a0 contentDestination:(id)a1 workflowName:(id)a2;

@end
