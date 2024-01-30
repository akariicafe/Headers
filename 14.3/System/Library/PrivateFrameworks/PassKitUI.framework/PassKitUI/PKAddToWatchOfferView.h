@class PKPaymentPass, PKContinuousButton, UIImageView, PKWatchHeroImageView, UILabel, UIView;

@interface PKAddToWatchOfferView : UIView {
    PKWatchHeroImageView *_heroImageView;
    UIView *_backgroundView;
    struct CGSize { double width; double height; } _aspectSize;
    BOOL _isCompactWatch;
}

@property (readonly, nonatomic) PKPaymentPass *pass;
@property (readonly, nonatomic) long long context;
@property (readonly, nonatomic) UIImageView *passImageView;
@property (readonly, nonatomic) UILabel *titleLabel;
@property (readonly, nonatomic) UILabel *subtitleLabel;
@property (readonly, nonatomic) PKContinuousButton *openAppButton;

- (BOOL)_isSmallPhone;
- (void).cxx_destruct;
- (id)initWithPaymentPass:(id)a0 context:(long long)a1;
- (void)layoutSubviews;
- (void)showSpinner:(BOOL)a0;
- (double)_sideMargin;

@end
