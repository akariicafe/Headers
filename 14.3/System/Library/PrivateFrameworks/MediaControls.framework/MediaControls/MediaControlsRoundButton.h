@class NSString, CCUICAPackageView, UILabel, MTVisualStylingProvider;

@interface MediaControlsRoundButton : UIControl <MTVisualStylingProviderObservingPrivate>

@property (retain, nonatomic) CCUICAPackageView *packageView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *packageName;
@property (copy, nonatomic) NSString *glyphState;
@property (retain, nonatomic) MTVisualStylingProvider *visualStylingProvider;
@property (nonatomic) long long axis;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } imageFrame;
@property (nonatomic, getter=isLabelHidden) BOOL labelHidden;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)_contentSizeCategoryDidChange;
- (void).cxx_destruct;
- (BOOL)pointInside:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (void)setSelected:(BOOL)a0;
- (void)layoutSubviews;
- (void)providedStylesDidChangeForProvider:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (BOOL)gestureRecognizerShouldBegin:(id)a0;
- (void)traitCollectionDidChange:(id)a0;
- (void)setHighlighted:(BOOL)a0;
- (void)_updateLabelVisualStyling;
- (void)_updatePackageColors;

@end
