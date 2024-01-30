@class UILabel, UIButton;
@protocol LUILogFilterCurrentPredicateTableViewCellDelegate;

@interface LUILogFilterCurrentPredicateTableViewCell : UITableViewCell

@property (weak, nonatomic) id<LUILogFilterCurrentPredicateTableViewCellDelegate> delegate;
@property (readonly, nonatomic) UILabel *titleLabel;
@property (readonly, nonatomic) UIButton *deleteButton;

- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void)layoutSubviews;
- (void).cxx_destruct;
- (id)_createTitleLabel;
- (void)_deleteButtonTapped:(id)a0;
- (void)_setupUI;
- (id)_createDeleteButton;

@end
