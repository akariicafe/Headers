@class UIButton;

@interface ICQBackupDeleteButton : UIView <PSHeaderFooterView> {
    UIButton *_deleteButton;
}

+ (double)usageDeleteButtonHeight;

- (id)initWithSpecifier:(id)a0;
- (void)layoutSubviews;
- (void).cxx_destruct;
- (double)preferredHeightForWidth:(double)a0;

@end
