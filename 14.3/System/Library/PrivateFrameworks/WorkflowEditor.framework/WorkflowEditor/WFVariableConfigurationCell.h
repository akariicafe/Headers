@class NSString, UIImageView, CAShapeLayer, UIView;
@protocol WFVariableConfigurationCellSizingDelegate;

@interface WFVariableConfigurationCell : UITableViewCell

@property (readonly, nonatomic) UIImageView *disclosureImageView;
@property (readonly, nonatomic) CAShapeLayer *maskLayer;
@property (readonly, nonatomic) UIView *separatorView;
@property (copy, nonatomic) NSString *titleText;
@property (copy, nonatomic) NSString *valueText;
@property (nonatomic) BOOL showsSeparator;
@property (nonatomic) BOOL roundsCorners;
@property (nonatomic) unsigned long long roundedCorners;
@property (nonatomic) unsigned long long accessory;
@property (weak, nonatomic) id<WFVariableConfigurationCellSizingDelegate> sizingDelegate;

+ (long long)cellStyle;

- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void).cxx_destruct;
- (void)updateMask;
- (void)layoutSubviews;
- (void)setFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
