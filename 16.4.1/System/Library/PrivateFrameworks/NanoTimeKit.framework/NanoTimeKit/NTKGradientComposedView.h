@class NTKRoundedCornerOverlayView, UIImageView, NTKGradientView, UIView;

@interface NTKGradientComposedView : UIView

@property (readonly, nonatomic) NTKGradientView *backgroundGradientView;
@property (readonly, nonatomic) NTKGradientView *backgroundGradientTransitionView;
@property (readonly, nonatomic) UIImageView *backgroundImageView;
@property (readonly, nonatomic) UIView *backgroundDimmingView;
@property (readonly, nonatomic) UIView *cornerMaskView;
@property (readonly, nonatomic) NTKRoundedCornerOverlayView *cornerOverlayView;
@property (readonly, nonatomic) UIView *composedView;
@property (readonly, nonatomic) NTKGradientView *filterGradientView;
@property (nonatomic) BOOL filterOn;
@property (nonatomic) UIView *rootContainerView;
@property (nonatomic) BOOL showForegroundGradient;

- (id)initWithDevice:(id)a0;
- (void).cxx_destruct;
- (void)applyBackgroundGradientColorsFromPalette:(id)a0;
- (void)applyEditingComplicationsFraction:(double)a0;
- (void)applyForegroundGradientWithTopColor:(id)a0 centerColor:(id)a1 bottomColor:(id)a2;
- (void)applyGossamerColorPalette:(id)a0;
- (void)applyGradientColorsFromColorPalette:(id)a0 toView:(id)a1;
- (void)applyImageViewTransitionFraction:(double)a0;

@end
