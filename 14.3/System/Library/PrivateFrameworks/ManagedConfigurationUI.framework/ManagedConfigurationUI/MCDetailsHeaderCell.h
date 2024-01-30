@class MCDetailsHeaderContentView;

@interface MCDetailsHeaderCell : UITableViewCell {
    MCDetailsHeaderContentView *_headerView;
}

- (void).cxx_destruct;
- (void)setDisplayName:(id)a0;
- (void)setOrganizationName:(id)a0;
- (void)layoutSubviews;
- (void)setDelegate:(id)a0;
- (void)setGradientColor:(int)a0;
- (void)setIsSigned:(BOOL)a0;
- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1 mode:(int)a2;
- (void)setIsTrusted:(BOOL)a0;
- (void)setHidesUntrustedLabel:(BOOL)a0;
- (void)setUseTrustedNomenclature:(BOOL)a0;
- (void)hideActionButton;
- (double)heightForTableView;
- (void)setIsExpired:(BOOL)a0;
- (void)showActionButton;
- (void)setActionToInstall;
- (void)setActionToRemove;

@end
