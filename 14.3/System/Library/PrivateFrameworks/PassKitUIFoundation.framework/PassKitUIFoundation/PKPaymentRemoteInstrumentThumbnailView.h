@class UIImageView;

@interface PKPaymentRemoteInstrumentThumbnailView : UIView

@property (retain, nonatomic) UIImageView *placeholderImageView;
@property (retain, nonatomic) UIImageView *cardImageView;

- (void)_prepareConstraints;
- (void).cxx_destruct;
- (id)initWithRemotePaymentInstrument:(id)a0;
- (void)_updateCardImage:(struct CGImage { } *)a0;

@end
