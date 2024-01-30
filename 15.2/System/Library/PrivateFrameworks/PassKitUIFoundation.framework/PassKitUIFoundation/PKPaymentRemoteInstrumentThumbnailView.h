@class UIImageView;

@interface PKPaymentRemoteInstrumentThumbnailView : UIView

@property (retain, nonatomic) UIImageView *placeholderImageView;
@property (retain, nonatomic) UIImageView *cardImageView;

- (id)initWithRemotePaymentInstrument:(id)a0;
- (void)_prepareConstraints;
- (void).cxx_destruct;
- (void)_updateCardImage:(struct CGImage { } *)a0;

@end
