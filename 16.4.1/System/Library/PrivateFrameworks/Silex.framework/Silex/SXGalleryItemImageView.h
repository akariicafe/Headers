@class SXGalleryItem;

@interface SXGalleryItemImageView : SXImageView

@property (readonly, nonatomic) SXGalleryItem *galleryItem;

- (id)accessibilityLabel;
- (BOOL)isAccessibilityElement;
- (void).cxx_destruct;
- (id)initWithGalleryItem:(id)a0 imageResource:(id)a1 resourceDataSource:(id)a2 reachabilityProvider:(id)a3;

@end
