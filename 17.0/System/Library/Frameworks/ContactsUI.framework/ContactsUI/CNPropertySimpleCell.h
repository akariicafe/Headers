@class UILabel;

@interface CNPropertySimpleCell : CNPropertyCell

@property (readonly, nonatomic) UILabel *labelLabel;
@property (readonly, nonatomic) UILabel *valueLabel;

- (id)labelView;
- (void).cxx_destruct;
- (id)valueView;

@end
