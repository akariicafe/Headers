@class UIFont, UITraitCollection;

@interface WFWorkflowSettingsLayoutMetrics : NSObject

@property (retain, nonatomic) UITraitCollection *traitCollection;
@property (readonly, nonatomic) UIFont *typeSelectionTitleFont;
@property (readonly, nonatomic) UIFont *typeSelectionTypeLabelFont;
@property (readonly, nonatomic) UIFont *textFieldFont;
@property (readonly, nonatomic) struct CGSize { double x0; double x1; } tileSize;

- (void).cxx_destruct;
- (double)scaledValueForValue:(double)a0;
- (id)baseFont;
- (id)initWithTraitCollection:(id)a0;
- (id)scaledFont;

@end
