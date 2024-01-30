@class UIButton, UIProgressView;

@interface _SFReaderFontDownloadAccessory : UIView

@property (readonly, nonatomic) UIButton *downloadButton;
@property (readonly, nonatomic) UIProgressView *progressView;
@property (nonatomic, getter=isDownloading) BOOL downloading;
@property (copy, nonatomic) id /* block */ tappedDownloadBlock;

- (id)viewForLastBaselineLayout;
- (void).cxx_destruct;
- (void)_tappedDownloadButton:(id)a0;
- (id)initWithTappedDownloadBlock:(id /* block */)a0;

@end
