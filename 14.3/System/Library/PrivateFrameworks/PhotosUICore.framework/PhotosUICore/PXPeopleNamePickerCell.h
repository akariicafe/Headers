@class NSArray, UILabel;

@interface PXPeopleNamePickerCell : UITableViewCell

@property (retain, nonatomic) NSArray *baseConstraints;
@property (readonly, weak, nonatomic) UILabel *titleLabel;

- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void).cxx_destruct;
- (void)prepareForReuse;

@end
