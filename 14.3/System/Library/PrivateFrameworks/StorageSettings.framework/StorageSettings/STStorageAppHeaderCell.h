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

@property (retain, nonatomic) UIImage *icon;
@property (retain, nonatomic) NSString *title;
@property (retain, nonatomic) NSString *info;
@property (retain, nonatomic) NSString *vendor;
@property (nonatomic) BOOL infoHidden;

+ (id)specifierForStorageApp:(id)a0;
+ (id)specifierForAppIdentifier:(id)a0;
+ (id)specifierForAppBundleURL:(id)a0;
+ (id)specifierForAppProxy:(id)a0;

- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1 specifier:(id)a2;
- (void)refreshCellContentsWithSpecifier:(id)a0;
- (void).cxx_destruct;
- (void)updateConstraints;

@end
