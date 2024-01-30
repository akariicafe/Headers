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

@property (retain, nonatomic) UIImage *icon;
@property (retain, nonatomic) NSString *title;
@property (retain, nonatomic) NSString *info;
@property (retain, nonatomic) NSString *sizeString;
@property (retain, nonatomic) UIActivityIndicatorView *spinner;
@property (nonatomic) BOOL infoHidden;
@property (nonatomic) BOOL cloudIconHidden;
@property (nonatomic) long long size;

+ (double)defaultCellHeight;

- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1 specifier:(id)a2;
- (void).cxx_destruct;
- (void)updateConstraints;
- (void)setEnabled:(BOOL)a0;
- (void)traitCollectionDidChange:(id)a0;
- (void)createLargeFontConstraints;
- (void)createNormalFontConstraints;
- (void)setupTitleAndInfoConstraints;

@end
