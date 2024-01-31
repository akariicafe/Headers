@class NSString, AVPlayerViewController;

@interface AVSeymourBehaviorContext : NSObject <AVPlayerViewControllerBehaviorContext, AVBehaviorContextInternal, AVBehaviorContext>

@property (nonatomic) struct NSEdgeInsets { double top; double left; double bottom; double right; } legibleContentInsets;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id behavior;
@property (readonly, weak, nonatomic) AVPlayerViewController *playerViewController;

- (void)viewDidLoad;
- (void).cxx_destruct;
- (void)didAddBehavior:(id)a0;
- (void)hidePlaybackControlsImmediately;
- (void)_updateLegibleContentInsets;
- (void)didRemoveBehavior:(id)a0;
- (id)initWithAVKitOwner:(id)a0;
- (void)seymourBehaviorContextDidReceiveButtonTap:(id)a0;
- (void)willAddBehavior:(id)a0;
- (void)willRemoveBehavior:(id)a0;

@end
