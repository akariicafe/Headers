@class AVAppStoreBehavior, AVPlayerViewController, NSString;

@interface AVAppStoreBehaviorContext : NSObject <AVBehaviorContextInternal, AVPlayerViewControllerBehaviorContext, AVBehaviorContext>

@property (weak, nonatomic) AVAppStoreBehavior *behavior;
@property (readonly, weak, nonatomic) AVPlayerViewController *playerViewController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)willEnterFullScreen;
- (void)didAddBehavior:(id)a0;
- (void)_toggleControlsGenerationIfPossible;
- (void)didRemoveBehavior:(id)a0;
- (id)initWithAVKitOwner:(id)a0;
- (void)willAddBehavior:(id)a0;
- (void)willExitFullScreen;
- (void)willRemoveBehavior:(id)a0;

@end
