@class NSArray, UIImageView, TVRButtonHaptic, UIView, NSString;
@protocol TVRUIStyleProvider, _TVRUIEventDelegate;

@interface TVRUIDirectionalControlView : UIView <UIPointerInteractionDelegate>

@property (retain, nonatomic) UIView *selectIndicator;
@property (retain, nonatomic) UIImageView *upImageView;
@property (retain, nonatomic) UIImageView *rightImageView;
@property (retain, nonatomic) UIImageView *downImageView;
@property (retain, nonatomic) UIImageView *leftImageView;
@property (retain, nonatomic) NSArray *interactionViews;
@property (retain, nonatomic) UIView *directionControlsWrapperView;
@property (retain, nonatomic) UIView *tapHandlingSquareWrapperView;
@property (weak, nonatomic) UIView *highlightedView;
@property (retain, nonatomic) id<TVRUIStyleProvider> styleProvider;
@property (retain, nonatomic) TVRButtonHaptic *haptic;
@property (weak, nonatomic) id<_TVRUIEventDelegate> eventDelegate;
@property (nonatomic) BOOL offsetDirectionalPad;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)pointerInteraction:(id)a0 styleForRegion:(id)a1;
- (void)touchesCancelled:(id)a0 withEvent:(id)a1;
- (void)handleLongPress:(id)a0;
- (void)touchesBegan:(id)a0 withEvent:(id)a1;
- (id)pointerInteraction:(id)a0 regionForRequest:(id)a1 defaultRegion:(id)a2;
- (void)layoutSubviews;
- (void)touchesEnded:(id)a0 withEvent:(id)a1;
- (void).cxx_destruct;
- (void)handleTap:(id)a0;
- (id)initWithStyleProvider:(id)a0;
- (long long)_buttonTypeForLocation:(struct CGPoint { double x0; double x1; })a0;
- (void)_configureGesture;
- (void)_configureLongPressGesture:(id)a0;
- (id)_createDirectionalImageViewWithImageName:(id)a0;
- (id)_directionalViewForTouchLocation:(struct CGPoint { double x0; double x1; })a0;
- (void)_highlightArrowView:(id)a0;
- (void)_highlightView:(id)a0 enabled:(BOOL)a1;
- (void)_layoutHighlightViewForView:(id)a0;
- (void)_sendSelectButtonPressBegan;
- (void)_sendSelectButtonPressEnded;

@end
