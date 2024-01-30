@class UIView, NSString, UIImage, CCUICAPackageView, CCUICAPackageDescription, UIImageView, UILongPressGestureRecognizer, MTVisualStylingProvider, UIColor;

@interface CCUIRoundButton : UIControl <UIGestureRecognizerDelegate, UIPointerInteractionDelegate> {
    MTVisualStylingProvider *_visualStylingProvider;
    UILongPressGestureRecognizer *_longPressGestureRecognizer;
}

@property (retain, nonatomic) UIColor *highlightColor;
@property (retain, nonatomic) UIView *normalStateBackgroundView;
@property (retain, nonatomic) UIView *selectedStateBackgroundView;
@property (retain, nonatomic) UIView *alternateSelectedStateBackgroundView;
@property (retain, nonatomic) UIImageView *glyphImageView;
@property (retain, nonatomic) UIImageView *selectedGlyphView;
@property (retain, nonatomic) CCUICAPackageView *glyphPackageView;
@property (retain, nonatomic) CCUICAPackageDescription *glyphPackageDescription;
@property (retain, nonatomic) UIImage *glyphImage;
@property (copy, nonatomic) NSString *glyphState;
@property (nonatomic) BOOL useAlternateBackground;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)_setCornerRadius:(double)a0;
- (double)_cornerRadius;
- (id)initWithGlyphPackageDescription:(id)a0 highlightColor:(id)a1;
- (void)_updateForStateChange;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (id)initWithGlyphPackageDescription:(id)a0 highlightColor:(id)a1 useLightStyle:(BOOL)a2;
- (id)initWithGlyphImage:(id)a0 highlightColor:(id)a1;
- (id)pointerInteraction:(id)a0 styleForRegion:(id)a1;
- (void).cxx_destruct;
- (id)initWithGlyphImage:(id)a0 highlightColor:(id)a1 useLightStyle:(BOOL)a2;
- (void)dealloc;
- (id)pointerInteraction:(id)a0 regionForRequest:(id)a1 defaultRegion:(id)a2;
- (void)_deactivateReachability:(id)a0;
- (void)_primaryActionPerformed:(id)a0;
- (void)didMoveToWindow;
- (void)layoutSubviews;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (BOOL)gestureRecognizerShouldBegin:(id)a0;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void)_updateVisualStylingOfGlyphView:(id)a0;
- (id)initWithHighlightColor:(id)a0 useLightStyle:(BOOL)a1;

@end
