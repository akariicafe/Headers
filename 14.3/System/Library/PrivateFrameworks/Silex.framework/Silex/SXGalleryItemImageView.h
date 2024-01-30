@class SXGalleryItem;

@interface SXGalleryItemImageView : SXImageView

@property (readonly, nonatomic) SXGalleryItem *galleryItem;

- (BOOL)isAccessibilityElement;
- (void).cxx_destruct;
- (id)accessibilityLabel;
- (id)initWithGalleryItem:(id)a0 imageResource:(id)a1 resourceDataSource:(id)a2 reachabilityProvider:(id)a3;

@end
