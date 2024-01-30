@class NSString, AVMusicAppBehaviorContext;

@interface AVMusicAppBehavior : NSObject <AVBehaviorInternal, AVBehavior>

@property (weak, nonatomic) AVMusicAppBehaviorContext *behaviorContext;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)behaviorContextClass;

- (void).cxx_destruct;
- (void)skipToNextItem;
- (void)skipToPreviousItem;
- (void)willMoveToContext:(id)a0;
- (void)didMoveToContext:(id)a0;
- (void)willRemoveFromContext:(id)a0;
- (void)didRemoveFromContext:(id)a0;
- (void)pictureInPictureActionButtonTapped;
- (void)playbackControlsDidChangePlayerVolume:(float)a0;
- (void)contextWillHandleUserAction:(long long)a0;

@end
