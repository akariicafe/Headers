@class AFUISiriCarPlayFullScreenBackgroundView, UIView;
@protocol AFUISiriCarPlayBackgroundViewDelegate;

@interface AFUISiriCarPlayBackgroundView : UIView {
    AFUISiriCarPlayFullScreenBackgroundView *_fullScreenBackgroundView;
    UIView *_systemBackgroundView;
    id<AFUISiriCarPlayBackgroundViewDelegate> _delegate;
}

@property (nonatomic) long long backgroundViewMode;
@property (nonatomic, getter=isVisible) BOOL visible;

- (id)initWithDelegate:(id)a0;
- (void).cxx_destruct;
- (void)_animateBackgroundsWithVisibility:(BOOL)a0 backgroundViewMode:(long long)a1;
- (void)_updateCarPlayStatusBarForVisibility:(BOOL)a0 backgroundViewMode:(long long)a1;
- (void)_updateViewsForVisibility:(BOOL)a0 backgroundViewMode:(long long)a1;

@end
