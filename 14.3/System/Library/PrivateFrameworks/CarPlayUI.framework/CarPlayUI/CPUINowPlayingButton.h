@class NSString, CPUINowPlayingManager, UIImageView, CPUINowPlayingButtonView;

@interface CPUINowPlayingButton : UIButton <CPUINowPlayingObserving> {
    CPUINowPlayingButtonView *_nowPlayingView;
    UIImageView *_focusBackgroundView;
}

@property (retain, nonatomic) CPUINowPlayingManager *nowPlayingManager;
@property (readonly, copy, nonatomic) NSString *bundleIdentifier;
@property (readonly, copy, nonatomic) NSString *stateName;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)canBecomeFocused;
- (void)didUpdateFocusInContext:(id)a0 withAnimationCoordinator:(id)a1;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (void).cxx_destruct;
- (id)initWithBundleIdentifier:(id)a0;
- (void)setHighlighted:(BOOL)a0;
- (void)nowPlayingManager:(id)a0 didUpdateSnapshot:(id)a1;
- (id)_stateFromSnapshot:(id)a0;

@end
