@class UILabel;

@interface CNPropertySimpleCell : CNPropertyCell

@property (readonly, nonatomic) UILabel *labelLabel;
@property (readonly, nonatomic) UILabel *valueLabel;

- (id)labelView;
- (id)valueView;
- (void).cxx_destruct;

@end
