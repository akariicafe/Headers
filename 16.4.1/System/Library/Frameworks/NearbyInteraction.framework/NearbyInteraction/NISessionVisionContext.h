@class ARSession, ARFrame;

@interface NISessionVisionContext : NSObject

@property (retain, nonatomic) ARSession *arSession;
@property (nonatomic) unsigned long long arSessionState;
@property (nonatomic, getter=isCameraAssistanceEnabled) BOOL cameraAssistanceEnabled;
@property (nonatomic, getter=isARSessionInternal) BOOL arSessionInternal;
@property (copy, nonatomic) ARFrame *latestARFrame;

- (id)init;
- (void).cxx_destruct;

@end
