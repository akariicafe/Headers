@interface WFRecordAudioAction : WFAction

@property (readonly, nonatomic) long long outputFormat;
@property (readonly, nonatomic) BOOL startImmediately;
@property (readonly, nonatomic) double recordingDuration;

+ (id)userInterfaceProtocol;
+ (id)userInterfaceXPCInterface;
+ (id)fileTypeForFormat:(long long)a0;
+ (id)datedFilenameForFormat:(long long)a0;

- (void)runWithRemoteUserInterface:(id)a0 input:(id)a1;

@end
