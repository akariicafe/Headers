@class NSURL, PUILocationUsageMixin;

@interface PUILocationServicesAuthLevelCell : PSTableCell {
    NSURL *_bundleURL;
    BOOL _isWebApp;
}

@property (readonly, nonatomic) PUILocationUsageMixin *location;
@property (readonly, nonatomic) unsigned long long authLevel;

- (void)refreshCellContentsWithSpecifier:(id)a0;
- (BOOL)canReload;
- (void)layoutSubviews;
- (id)getLazyIconID;
- (void).cxx_destruct;
- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1 specifier:(id)a2;
- (id)getLazyIcon;

@end
