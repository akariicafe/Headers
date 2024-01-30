@class UIImageView;

@interface HUCheckmarkTitleValueCell : HUTitleValueCell

@property (retain, nonatomic) UIImageView *checkmarkImageView;
@property (nonatomic, getter=isChecked) BOOL checked;

- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void).cxx_destruct;
- (void)_updateCheckmark;

@end
