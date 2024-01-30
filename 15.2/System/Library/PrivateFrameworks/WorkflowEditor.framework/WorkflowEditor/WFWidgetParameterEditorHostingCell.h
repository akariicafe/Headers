@class UIColor, WFComponentNavigationContextImpl, UIView, MTVisualStylingProvider;

@interface WFWidgetParameterEditorHostingCell : WFParameterEditorHostingCell

@property (retain, nonatomic) UIView *highlighedBackgroundView;
@property (retain, nonatomic) UIColor *labelColor;
@property (retain, nonatomic) WFComponentNavigationContextImpl *navigationContext;
@property (retain, nonatomic) UIColor *overridingBackgroundColor;
@property (retain, nonatomic) UIColor *cardBackgroundColor;
@property (retain, nonatomic) MTVisualStylingProvider *strokeProvider;
@property (retain, nonatomic) MTVisualStylingProvider *fillProvider;

- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void).cxx_destruct;
- (void)traitCollectionDidChange:(id)a0;
- (void)setContainingViewController:(id)a0;
- (void)reconfigureModernView;
- (void)applyStylingWithStrokeProvider:(id)a0 fillProvider:(id)a1 cardBackgroundColor:(id)a2;

@end
