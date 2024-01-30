@class UIView, NSString, UIImage, UIImageView, NSMutableArray, NSLayoutConstraint, UIActivityIndicatorView, UILabel;

@interface STStorageTableCell : PSTableCell {
    NSMutableArray *_normalFontConstraints;
    NSMutableArray *_largeFontConstraints;
    NSMutableArray *_infoConstraints;
    NSLayoutConstraint *_iconSizeConstraint;
    NSLayoutConstraint *_sizeRightConstraint;
    NSLayoutConstraint *_minHeightConstraint;
    NSLayoutConstraint *_noCloudIconConstraint;
    NSLayoutConstraint *_cloudIconConstraint;
    UIImageView *_iconView;
    UIView *_titleInfoView;
    UILabel *_titleLabel;
    UILabel *_infoLabel;
    UILabel *_sizeLabel;
    UIImageView *_cloudIconView;
    long long _size;
}

@property (retain) NSString *title;
@property (retain) UIImage *icon;
@property (retain) NSString *info;
@property (retain) NSString *sizeString;
@property (retain) UIActivityIndicatorView *spinner;
@property BOOL infoHidden;
@property BOOL cloudIconHidden;
@property long long size;

+ (double)defaultCellHeight;

- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1 specifier:(id)a2;
- (void)updateConstraints;
- (void)setEnabled:(BOOL)a0;
- (void)traitCollectionDidChange:(id)a0;
- (void).cxx_destruct;
- (id)_cloudIconColor;
- (void)createLargeFontConstraints;
- (void)createNormalFontConstraints;
- (void)setupTitleAndInfoConstraints;

@end
