@class NSArray, MKMapItem;

@interface MUPhotoSliderTileProvider : NSObject {
    MKMapItem *_mapItem;
}

@property (readonly, nonatomic) BOOL showFullScreen;
@property (readonly, nonatomic) long long displayType;
@property (readonly, nonatomic) NSArray *photos;
@property (readonly, nonatomic) BOOL showSmallFloatingAttribution;
@property (readonly, nonatomic) BOOL showSmallARPCallToActionFloatingAttribution;
@property (readonly, nonatomic) BOOL isShowingBothVendorAndCallToActionFloatingAttributions;
@property (readonly, nonatomic) BOOL showPhotoAttributionAtEndOfSlider;
@property (readonly, nonatomic) BOOL showMorePhotoPunchoutAtEndOfSlider;
@property (readonly, nonatomic) BOOL showARPCallToActionAttributionAtEndOfSlider;
@property (readonly, nonatomic) BOOL shouldRouteToPhotoThumbnailGallery;

- (void)_setup;
- (id)initWithMapItem:(id)a0;
- (void).cxx_destruct;
- (unsigned long long)numberOfPhotos;
- (BOOL)supportsShowingSliderWithPhotoFrameSize:(struct CGSize { double x0; double x1; })a0;
- (id)photoItemAtIndex:(unsigned long long)a0;
- (id)photoOverlayAtIndex:(unsigned long long)a0;
- (void)_setupForFlatPhotoList;
- (void)_setupForPhotoAlbums;
- (id)_flatListOverlayForIndex:(unsigned long long)a0;
- (id)_albumOverlayForIndex:(unsigned long long)a0;
- (BOOL)_canShowARPCallToAction;

@end
