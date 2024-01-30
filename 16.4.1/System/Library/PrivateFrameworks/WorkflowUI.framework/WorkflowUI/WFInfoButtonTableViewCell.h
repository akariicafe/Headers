@class UIButton, UIImageView, NSArray;
@protocol WFInfoButtonTableViewCellDelegate;

@interface WFInfoButtonTableViewCell : UITableViewCell

@property (nonatomic) unsigned long long accessoryMode;
@property (nonatomic, getter=isChecked) BOOL checked;
@property (weak, nonatomic) id<WFInfoButtonTableViewCellDelegate> delegate;
@property (readonly, nonatomic) UIButton *infoButton;
@property (readonly, nonatomic) UIImageView *checkmarkView;
@property (readonly, nonatomic) NSArray *accessoryViews;

- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void)layoutSubviews;
- (unsigned long long)accessibilityTraits;
- (void).cxx_destruct;
- (void)infoButtonPressed:(id)a0;

@end
