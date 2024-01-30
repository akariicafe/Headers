@class NSUUID, UIImageView, AVTMSStickerView, UILabel;
@protocol AVTStickerCollectionViewCellDelegate, AVTStickerDisclosureValidationDelegate;

@interface AVTStickerCollectionViewCell : UICollectionViewCell <AVTMSStickerViewDelegate>

@property (readonly, nonatomic) UIImageView *imageView;
@property (readonly, nonatomic) AVTMSStickerView *stickerView;
@property (readonly, nonatomic) UILabel *prereleaseLabel;
@property (nonatomic) BOOL stickerViewIsAnimating;
@property (nonatomic) struct CGSize { double width; double height; } fullImageSize;
@property (retain, nonatomic) NSUUID *displaySessionUUID;
@property (nonatomic) BOOL allowsPeel;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } clippingRect;
@property (nonatomic) BOOL showPrereleaseSticker;
@property (weak, nonatomic) id<AVTStickerCollectionViewCellDelegate> delegate;
@property (weak, nonatomic) id<AVTStickerDisclosureValidationDelegate> disclosureValidationDelegate;

+ (id)cellIdentifier;
+ (double)imageInsetForWidth:(double)a0;

- (void).cxx_destruct;
- (void)prepareForReuse;
- (void)purgeImageContents;
- (void)updateWithImage:(id)a0 sticker:(id)a1 animated:(BOOL)a2;
- (void)setupPrereleaseLabelIfNeeded;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })stickerViewFrameForImageSize:(struct CGSize { double x0; double x1; })a0 clippingRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (struct CGSize { double x0; double x1; })imageSizeFromURL:(id)a0;
- (void)stickerViewDidBeginPeel:(id)a0;
- (void)stickerViewWasTapped:(id)a0;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
