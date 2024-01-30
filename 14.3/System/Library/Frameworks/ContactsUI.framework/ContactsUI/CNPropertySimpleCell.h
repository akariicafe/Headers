@class UILabel;

@interface CNPropertySimpleCell : CNPropertyCell

@property (readonly, nonatomic) UILabel *labelLabel;
@property (readonly, nonatomic) UILabel *valueLabel;

- (void).cxx_destruct;
- (id)labelView;
- (id)valueView;

@end
