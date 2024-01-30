@class UIImageView, UITextView;

@interface AAUIInheritanceAccessKeyCell : PSTableCell

@property (retain, nonatomic) UIImageView *qrCodeImageView;
@property (retain, nonatomic) UITextView *accessKeyTextView;

+ (id)specifierForAcessKey:(id)a0 qrCodeImage:(id)a1;

- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void)refreshCellContentsWithSpecifier:(id)a0;
- (void)_setupViews;
- (void).cxx_destruct;

@end
