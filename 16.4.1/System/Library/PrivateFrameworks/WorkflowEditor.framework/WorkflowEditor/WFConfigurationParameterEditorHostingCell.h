@class UIColor, MTVisualStylingProvider, UIView;

@interface WFConfigurationParameterEditorHostingCell : WFParameterEditorHostingCell

@property (retain, nonatomic) UIView *highlighedBackgroundView;
@property (retain, nonatomic) UIColor *labelColor;
@property (retain, nonatomic) UIColor *overridingBackgroundColor;
@property (retain, nonatomic) UIColor *cardBackgroundColor;
@property (retain, nonatomic) MTVisualStylingProvider *strokeProvider;
@property (retain, nonatomic) MTVisualStylingProvider *fillProvider;

- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void)traitCollectionDidChange:(id)a0;
- (void).cxx_destruct;
- (void)applyStylingWithStrokeProvider:(id)a0 fillProvider:(id)a1 cardBackgroundColor:(id)a2;
- (void)reconfigureModernView;

@end
