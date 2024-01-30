@interface STStorageAppCell : STStorageTableCell

+ (id)specifierForStorageApp:(id)a0;
+ (id)specifierForAppIdentifier:(id)a0;
+ (id)specifierForAppBundleURL:(id)a0;
+ (id)specifierForAppProxy:(id)a0;

- (void)refreshCellContentsWithSpecifier:(id)a0;

@end
