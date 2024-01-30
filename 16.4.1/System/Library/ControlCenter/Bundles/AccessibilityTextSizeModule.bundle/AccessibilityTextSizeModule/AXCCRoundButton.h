@class AXCCVisualStylingProvider, NSString, UIImageView, UIImage, CCUICAPackageView, UILabel, AXCCShadowView;

@interface AXCCRoundButton : UIControl <AXCCVisualStylingProviderObserver>

@property (retain, nonatomic) CCUICAPackageView *packageView;
@property (retain, nonatomic) UIImageView *glyphImageView;
@property (retain, nonatomic) UIImage *glyphImage;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) AXCCShadowView *shadowView;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *packageName;
@property (copy, nonatomic) NSString *glyphState;
@property (retain, nonatomic) AXCCVisualStylingProvider *stylingProvider;
@property (nonatomic) long long axis;
@property (retain, nonatomic) UIImage *image;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } imageFrame;
@property (nonatomic) struct CGSize { double width; double height; } imageSize;
@property (nonatomic, getter=isLabelHidden) BOOL labelHidden;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)accessibilityLabel;
- (void)controlCenterApplyPrimaryContentShadow;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })accessibilityFrame;
- (void)setSelected:(BOOL)a0;
- (void)updateLabelVisualStyling;
- (void)updateContentSizeCategory;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (BOOL)pointInside:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (void)visualStylingProviderDidChange:(id)a0;
- (BOOL)gestureRecognizerShouldBegin:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setHighlighted:(BOOL)a0;
- (void)layoutSubviews;
- (void)setEnabled:(BOOL)a0;
- (void)traitCollectionDidChange:(id)a0;
- (unsigned long long)accessibilityTraits;
- (BOOL)isAccessibilityElement;
- (void).cxx_destruct;
- (void)updateGlyphImageViewVisualStyling;
- (void)updatePackageVisualStyling;

@end
