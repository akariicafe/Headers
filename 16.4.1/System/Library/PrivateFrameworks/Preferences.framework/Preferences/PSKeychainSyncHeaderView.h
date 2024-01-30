@class UILabel;

@interface PSKeychainSyncHeaderView : UIView <PSHeaderFooterView> {
    UILabel *_titleLabel;
    UILabel *_detailLabel;
}

@property (nonatomic) BOOL usesCompactLayout;

- (id)initWithSpecifier:(id)a0;
- (double)preferredHeightForWidth:(double)a0 inTableView:(id)a1;
- (void)setTitleText:(id)a0;
- (void)setDetailText:(id)a0;
- (void)layoutSubviews;
- (void).cxx_destruct;

@end
