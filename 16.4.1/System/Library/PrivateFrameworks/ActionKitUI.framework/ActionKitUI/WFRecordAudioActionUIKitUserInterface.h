@class NSString;

@interface WFRecordAudioActionUIKitUserInterface : WFEmbeddableActionUserInterface <WFRecordAudioActionUserInterface>

@property (copy, nonatomic) id /* block */ completionHandler;
@property (readonly, nonatomic) NSString *userInterfaceType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)cancelPresentationWithCompletionHandler:(id /* block */)a0;
- (void)finishWithFileRepresentation:(id)a0 error:(id)a1;
- (void)showWithOutputFormat:(long long)a0 startImmediately:(BOOL)a1 recordingDuration:(double)a2 completionHandler:(id /* block */)a3;

@end
