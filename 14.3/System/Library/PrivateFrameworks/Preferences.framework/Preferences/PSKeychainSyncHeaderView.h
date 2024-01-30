@class UILabel;

@interface PSKeychainSyncHeaderView : UIView <PSHeaderFooterView> {
    UILabel *_titleLabel;
    UILabel *_detailLabel;
}

@property (nonatomic) BOOL usesCompactLayout;

- (id)initWithSpecifier:(id)a0;
- (void).cxx_destruct;
- (double)preferredHeightForWidth:(double)a0 inTableView:(id)a1;
- (void)layoutSubviews;
- (void)setDetailText:(id)a0;
- (void)setTitleText:(id)a0;

@end
