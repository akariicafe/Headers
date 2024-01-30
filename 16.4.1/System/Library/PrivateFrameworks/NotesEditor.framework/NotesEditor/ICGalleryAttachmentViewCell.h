@class UIImageView, CALayer, ICAttachment;
@protocol ICGalleryAttachmentViewCellDelegate;

@interface ICGalleryAttachmentViewCell : UICollectionViewCell

@property (retain, nonatomic) UIImageView *imageView;
@property (readonly, nonatomic) BOOL isPortrait;
@property (retain, nonatomic) CALayer *fadeMaskLayer;
@property (retain, nonatomic) CALayer *fadeImageLayer;
@property (retain, nonatomic) CALayer *fadeWhiteLayer;
@property (nonatomic) BOOL shouldFade;
@property (weak, nonatomic) id<ICGalleryAttachmentViewCellDelegate> delegate;
@property (retain, nonatomic) ICAttachment *attachment;

- (BOOL)accessibilityIgnoresInvertColors;
- (void)prepareForReuse;
- (void)dealloc;
- (void)updateImage;
- (void).cxx_destruct;
- (void)updateFadeMask:(BOOL)a0;

@end
