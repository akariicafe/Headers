@class UIColor, MTVisualStylingProvider, UIView;

@interface WFMaterialStylableTableViewCell : UITableViewCell

@property (retain, nonatomic) UIView *highlightedBackgroundView;
@property (retain, nonatomic) UIColor *overridingBackgroundColor;
@property (retain, nonatomic) MTVisualStylingProvider *fillProvider;

- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void).cxx_destruct;

@end
