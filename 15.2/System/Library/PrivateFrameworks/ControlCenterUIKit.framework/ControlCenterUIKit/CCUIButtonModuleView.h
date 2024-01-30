@class UIView, NSString, UIImage, CCUICAPackageView, CCUICAPackageDescription, UIImageView, MTVisualStylingProvider, UIColor;

@interface CCUIButtonModuleView : UIControl <UIGestureRecognizerDelegate> {
    UIView *_highlightedBackgroundView;
    UIImageView *_glyphImageView;
    CCUICAPackageView *_glyphPackageView;
    MTVisualStylingProvider *_visualStylingProvider;
}

@property (retain, nonatomic) UIImage *glyphImage;
@property (retain, nonatomic) UIColor *glyphColor;
@property (retain, nonatomic) UIImage *selectedGlyphImage;
@property (retain, nonatomic) UIColor *selectedGlyphColor;
@property (nonatomic) double glyphAlpha;
@property (nonatomic) double glyphScale;
@property (retain, nonatomic) CCUICAPackageDescription *glyphPackageDescription;
@property (copy, nonatomic) NSString *glyphState;
@property (nonatomic) struct NSDirectionalEdgeInsets { double top; double leading; double bottom; double trailing; } contentEdgeInsets;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)_handlePressGesture:(id)a0;
- (void)layoutSubviews;
- (void)_updateForStateChange;
- (void)setEnabled:(BOOL)a0;
- (void)setHighlighted:(BOOL)a0;
- (BOOL)gestureRecognizer:(id)a0 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)a1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)_setGlyphState:(id)a0;
- (void)_updateGlyphImageViewVisualStyling;
- (void)_setGlyphAlpha:(double)a0;
- (void)_setGlyphScale:(double)a0;
- (void)setSelected:(BOOL)a0;
- (void)_setGlyphPackageDescription:(id)a0;
- (void).cxx_destruct;
- (void)_setGlyphImage:(id)a0;
- (void)didMoveToWindow;
- (id)_tintColorForSelectedState:(BOOL)a0;

@end
