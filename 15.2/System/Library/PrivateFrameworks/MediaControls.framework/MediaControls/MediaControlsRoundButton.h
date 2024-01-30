@class NSString, MRUVisualStylingProvider, CCUICAPackageView, UILabel, MRUShadowView;

@interface MediaControlsRoundButton : UIControl <MRUVisualStylingProviderObserver>

@property (retain, nonatomic) CCUICAPackageView *packageView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) MRUShadowView *shadowView;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *packageName;
@property (copy, nonatomic) NSString *glyphState;
@property (retain, nonatomic) MRUVisualStylingProvider *stylingProvider;
@property (nonatomic) long long axis;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } imageFrame;
@property (nonatomic) struct CGSize { double width; double height; } imageSize;
@property (nonatomic, getter=isLabelHidden) BOOL labelHidden;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)layoutSubviews;
- (void)setEnabled:(BOOL)a0;
- (void)setHighlighted:(BOOL)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (BOOL)pointInside:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (unsigned long long)accessibilityTraits;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })accessibilityFrame;
- (void)controlCenterApplyPrimaryContentShadow;
- (void)setSelected:(BOOL)a0;
- (void).cxx_destruct;
- (BOOL)isAccessibilityElement;
- (void)traitCollectionDidChange:(id)a0;
- (void)updateContentSizeCategory;
- (BOOL)gestureRecognizerShouldBegin:(id)a0;
- (void)visualStylingProviderDidChange:(id)a0;
- (void)updateLabelVisualStyling;
- (void)updatePackageVisualStyling;

@end
