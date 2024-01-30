@class UILabel, UIButton;
@protocol LUILogFilterCurrentPredicateTableViewCellDelegate;

@interface LUILogFilterCurrentPredicateTableViewCell : UITableViewCell

@property (weak, nonatomic) id<LUILogFilterCurrentPredicateTableViewCellDelegate> delegate;
@property (readonly, nonatomic) UILabel *titleLabel;
@property (readonly, nonatomic) UIButton *deleteButton;

- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void).cxx_destruct;
- (void)_setupUI;
- (void)layoutSubviews;
- (void)_deleteButtonTapped:(id)a0;
- (id)_createTitleLabel;
- (id)_createDeleteButton;

@end
