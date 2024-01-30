@class EMMailDropMetadata, MFProgressView, UILabel, NSLayoutConstraint, UIButton;
@protocol MFMailDropBannerDelegate;

@interface MFMailDropBannerView : MFMessageHeaderViewBlock {
    BOOL _hasLoaded;
    UILabel *_expirationLabel;
    UILabel *_downloadLabel;
    UIButton *_downloadIcon;
    MFProgressView *_progressView;
    NSLayoutConstraint *_iconWrapperWidth;
    NSLayoutConstraint *_labelFirstBaseline;
    NSLayoutConstraint *_expirationFirstBaseline;
    NSLayoutConstraint *_expirationBottom;
}

@property (retain, nonatomic) EMMailDropMetadata *metaData;
@property (nonatomic) unsigned long long bannerState;
@property (nonatomic) double downloadProgress;
@property (weak, nonatomic) id<MFMailDropBannerDelegate> delegate;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)startDownload:(id)a0;
- (void).cxx_destruct;
- (void)updateConstraints;
- (void)contentSizeCategoryDidChangeNotification:(id)a0;
- (BOOL)shouldPresent;
- (void)_setupDownloadLabel;
- (void)_setupExpirationLabel;
- (void)_setupDownloadIcon;
- (BOOL)_hasDataLocally;
- (BOOL)_shouldDisplayProgress;
- (void)setSeparatorIsHidden:(BOOL)a0;

@end
