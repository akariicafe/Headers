@protocol MFBlockedSenderBannerViewDelegate;

@interface MFBlockedSenderBannerView : MFSuggestionBannerView

@property (weak, nonatomic) id<MFBlockedSenderBannerViewDelegate> delegate;

- (void)primaryAction;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)dismissAction;
- (void).cxx_destruct;
- (void)_bannerDismissed:(id)a0;
- (void)_titleControlTapped:(id)a0;

@end
