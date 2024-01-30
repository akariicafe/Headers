@class SKUIItemOfferButton, NSString, UIImage, UIView, UIImageView, NSMutableArray, NSLayoutConstraint, UIActivityIndicatorView, UILabel;
@protocol CACLanguageDownloadTableViewCellDownloadDelegate;

@interface CACLanguageSelectionTableViewCell : UITableViewCell <SKUIItemOfferButtonDelegate> {
    NSMutableArray *_normalFontConstraints;
    NSMutableArray *_largeFontConstraints;
    NSMutableArray *_infoConstraints;
    NSLayoutConstraint *_downloadButtonSizeConstraint;
    NSLayoutConstraint *_sizeRightConstraint;
    NSLayoutConstraint *_minHeightConstraint;
    UIImageView *_iconView;
    UIView *_titleInfoView;
    UILabel *_titleLabel;
    UILabel *_infoLabel;
    UILabel *_sizeLabel;
    long long _size;
}

@property (retain, nonatomic) NSString *languageIdentifier;
@property (weak, nonatomic) id<CACLanguageDownloadTableViewCellDownloadDelegate> cacLanguageDownloadDelegate;
@property (retain, nonatomic) UIImage *icon;
@property (retain, nonatomic) NSString *title;
@property (retain, nonatomic) NSString *info;
@property (retain, nonatomic) NSString *sizeString;
@property (retain, nonatomic) UIActivityIndicatorView *spinner;
@property (retain, nonatomic) SKUIItemOfferButton *downloadButton;
@property (nonatomic) BOOL needsDownload;
@property (nonatomic) BOOL infoHidden;
@property (nonatomic) BOOL disableInteraction;
@property (nonatomic) long long size;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (double)defaultCellHeight;

- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (BOOL)isAccessibilityElement;
- (void).cxx_destruct;
- (void)updateConstraints;
- (id)accessibilityLabel;
- (void)setEnabled:(BOOL)a0;
- (void)traitCollectionDidChange:(id)a0;
- (void)didPressDownloadButton;
- (void)_setupTitleAndInfoConstraints;
- (void)createLargeFontConstraints;
- (void)createNormalFontConstraints;

@end
