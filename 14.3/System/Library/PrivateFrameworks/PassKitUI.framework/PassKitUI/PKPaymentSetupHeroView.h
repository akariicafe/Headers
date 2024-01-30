@class PKPaymentHeroImageController, NSString, UIImageView, NSMutableDictionary, UIView, NSMutableArray, PKImageSequenceView;

@interface PKPaymentSetupHeroView : UIView <PKPaymentHeroImageControllerDelegate> {
    long long _context;
    struct CGSize { double width; double height; } _aspectSize;
    BOOL _imageDownloadFailed;
    UIView *_backgroundView;
    UIView *_bottomDividerView;
    UIView *_heroDeviceView;
    PKImageSequenceView *_cardCarouselView;
    PKPaymentHeroImageController *_heroImageController;
    UIImageView *_faceIDGlyphView;
    NSMutableArray *_heroImageIdentifiers;
    NSMutableDictionary *_heroImagesDictionary;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)assetBackgroundColor;

- (void)_configureHeroCardsFromHeroImages:(id)a0;
- (id)_heroImages;
- (BOOL)_isSmallPhone;
- (double)_phoneTopPadding;
- (double)_phoneCardHeightInset;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_watchCardViewFrameForBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)_imageFailedToDownload:(id)a0;
- (struct CGSize { double x0; double x1; })_watchCardCarouselSizeForSize:(struct CGSize { double x0; double x1; })a0;
- (void)_promptTapToRadarWithTitle:(id)a0 description:(id)a1;
- (id)initWithContext:(long long)a0 heroImageController:(id)a1 heroImages:(id)a2;
- (double)_instructionFontSizeForContext:(long long)a0;
- (void).cxx_destruct;
- (void)_createSubviews;
- (id)pk_childrenForAppearance;
- (void)stopAnimation;
- (void)layoutSubviews;
- (void)heroImageController:(id)a0 didFinishDownloadingImageData:(id)a1 forImage:(id)a2 error:(id)a3;
- (void)startAnimation;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;

@end
