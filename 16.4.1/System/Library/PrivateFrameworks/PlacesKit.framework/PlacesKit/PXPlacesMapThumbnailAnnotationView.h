@class PKExtendedTraitCollection, NSString, UIImageView, PXPlacesImageCache, UILabel;

@interface PXPlacesMapThumbnailAnnotationView : MKAnnotationView <PXPlacesMapAnnotationViewFadable> {
    long long _geotaggablesCount;
}

@property (retain, nonatomic) PKExtendedTraitCollection *extendedTraitCollection;
@property (retain, nonatomic) id extendedTraitObserver;
@property (retain, nonatomic) UILabel *countLabel;
@property (retain, nonatomic) UIImageView *countLabelBackgroundImageView;
@property (retain, nonatomic) PXPlacesImageCache *imageCache;
@property (nonatomic) BOOL imageIsPlaceholder;
@property (copy, nonatomic) id /* block */ displayCompletion;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)_thumbnailCreationOperationQueue;
+ (id)_thumbnailFetchOperationQueue;

- (void)setSelected:(BOOL)a0 animated:(BOOL)a1;
- (void)prepareForReuse;
- (void)setImage:(id)a0;
- (void)setAnnotation:(id)a0;
- (void)dealloc;
- (void)traitCollectionDidChange:(id)a0;
- (void).cxx_destruct;
- (void)_reloadData:(BOOL)a0;
- (id)renderToImage;
- (void)_updatePlaceholderImageIfNeeded;
- (void)_hideCountLabel;
- (void)_showCountLabel;
- (id)_countLabelBackgroundColor;
- (void)_fetchImageWithNetworkAccessAllowed:(BOOL)a0;
- (void)_processGeotaggable:(id)a0 withImage:(struct CGImage { } *)a1 popoverImageType:(unsigned long long)a2 imageOptions:(unsigned long long)a3 shouldCache:(BOOL)a4;
- (void)_processPlaceHolderForGeotaggable:(id)a0;
- (void)_processPostImage;
- (void)_reloadCount:(long long)a0;
- (id)initWithAnnotation:(id)a0 reuseIdentifier:(id)a1 extendedTraitCollection:(id)a2 imageCache:(id)a3;
- (id)primaryGeotaggable;
- (id)userCacheKey;

@end
