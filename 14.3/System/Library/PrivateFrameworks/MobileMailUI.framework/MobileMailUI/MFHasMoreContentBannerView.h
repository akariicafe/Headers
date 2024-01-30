@class NSString;
@protocol MFHasMoreContentBannerViewDelegate;

@interface MFHasMoreContentBannerView : MFSuggestionBannerView

@property (readonly) NSString *titleString;
@property (weak, nonatomic) id<MFHasMoreContentBannerViewDelegate> delegate;

+ (id)bannerWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 isPlainText:(BOOL)a1 remainingBytes:(unsigned long long)a2;

- (void)reloadData;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)_titleControlTapped:(id)a0;
- (id)actionStringIsDownloading:(BOOL)a0;
- (void)requestLoad;

@end
