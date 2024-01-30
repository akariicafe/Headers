@class UIImageView;

@interface WFWorkflowConflictCell : UITableViewCell

@property (weak, nonatomic) UIImageView *iconImageView;

+ (id)checkedImage;
+ (id)uncheckedImage;

- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void)setSelected:(BOOL)a0 animated:(BOOL)a1;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)traitCollectionDidChange:(id)a0;
- (void)updateImages;
- (void)setConflictedWorkflow:(id)a0 fromDevice:(id)a1 isRemote:(BOOL)a2;

@end
