@class SXGalleryItem;

@interface SXGalleryItemImageView : SXImageView

@property (readonly, nonatomic) SXGalleryItem *galleryItem;

- (void).cxx_destruct;
- (BOOL)isAccessibilityElement;
- (id)accessibilityLabel;
- (id)initWithGalleryItem:(id)a0 imageResource:(id)a1 resourceDataSource:(id)a2 reachabilityProvider:(id)a3;

@end
