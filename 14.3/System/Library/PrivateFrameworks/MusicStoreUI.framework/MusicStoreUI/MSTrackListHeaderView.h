@class SUItemOfferButton, SUItem, UIImage, UILabel, SUTouchCaptureView, SUReflectionImageView;
@protocol MSTrackListHeaderDelegate;

@interface MSTrackListHeaderView : UIView {
    UILabel *_albumLabel;
    UILabel *_artistLabel;
    UILabel *_disclaimerLabel;
    UILabel *_itemCountLabel;
    UILabel *_releaseDateLabel;
    SUReflectionImageView *_artworkView;
    SUItemOfferButton *_offerButton;
    SUTouchCaptureView *_touchCaptureView;
}

@property (retain, nonatomic) UIImage *artworkImage;
@property (nonatomic) id<MSTrackListHeaderDelegate> delegate;
@property (retain, nonatomic) SUItem *item;

- (void)sizeToFit;
- (void)dealloc;
- (void)setBackgroundColor:(id)a0;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)reloadView;
- (void)_touchCaptureAction:(id)a0;
- (void)_purchasesChangedNotification:(id)a0;
- (void)_reloadAlbumLabel;
- (void)_reloadArtistLabel;
- (void)_reloadArtworkView;
- (void)_reloadDisclaimerLabel;
- (void)_reloadItemCountLabel;
- (void)_reloadOfferButton;
- (void)_reloadReleaseDateLabel;
- (struct CGSize { double x0; double x1; })_sizeThatFitsLabel:(id)a0 size:(struct CGSize { double x0; double x1; })a1 numberOfLines:(long long)a2;
- (void)_showPurchaseConfirmation;
- (void)_hidePurchaseConfirmation;
- (void)_performPurchaseAnimation;
- (void)_setShowingPurchaseConfirmation:(BOOL)a0;
- (id)_newGenericSmallFontLabel;
- (void)_offerButtonAction:(id)a0;

@end
