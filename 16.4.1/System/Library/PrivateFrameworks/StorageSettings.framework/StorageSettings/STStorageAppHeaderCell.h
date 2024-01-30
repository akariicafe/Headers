@class NSString, UIImageView, UIImage, UILabel, NSMutableArray;

@interface STStorageAppHeaderCell : PSTableCell {
    NSMutableArray *_constraints;
    UILabel *_titleLabel;
    UILabel *_infoLabel;
    UILabel *_vendorLabel;
    UIImageView *_appIconView;
    UIImageView *_cloudIconView;
    BOOL _isDemoted;
    BOOL _infoHidden;
}

@property (retain) NSString *title;
@property (retain) UIImage *icon;
@property (retain) NSString *info;
@property (retain) NSString *vendor;
@property BOOL infoHidden;

+ (id)specifierForAppIdentifier:(id)a0;
+ (id)specifierForAppBundleURL:(id)a0;
+ (id)specifierForAppProxy:(id)a0;
+ (id)specifierForStorageApp:(id)a0;

- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1 specifier:(id)a2;
- (void)refreshCellContentsWithSpecifier:(id)a0;
- (void)updateConstraints;
- (void).cxx_destruct;

@end
