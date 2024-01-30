@class AVHomeIPCameraBehaviorContext, NSString;

@interface AVHomeIPCameraBehavior : NSObject <AVBehaviorInternal, AVHomeIPCameraActionButtonHandling, AVBehavior>

@property (weak, nonatomic) AVHomeIPCameraBehaviorContext *behaviorContext;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)behaviorContextClass;

- (void).cxx_destruct;
- (void)willMoveToContext:(id)a0;
- (void)didMoveToContext:(id)a0;
- (void)willRemoveFromContext:(id)a0;
- (void)didRemoveFromContext:(id)a0;
- (void)pictureInPictureActionButtonTapped;
- (void)playbackControlsDidChangePlayerVolume:(float)a0;
- (void)playbackControlsDidToggleMuted:(BOOL)a0;
- (void)playbackControlsDidUpdateVisibilityOfLoadingIndicator:(BOOL)a0;

@end
