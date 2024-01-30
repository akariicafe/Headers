@class NSMutableSet, CLKDevice;

@interface NTKTimelapseListingFactory : NSObject {
    CLKDevice *_device;
    NSMutableSet *_assetListings;
}

+ (id)sharedInstanceForDevice:(id)a0;

- (void).cxx_destruct;
- (void)discardAssets;
- (id)posterImageWithTheme:(unsigned long long)a0;
- (id)_initLibraryForDevice:(id)a0;
- (id)listingWithTheme:(unsigned long long)a0 date:(id)a1 location:(struct CLLocationCoordinate2D { double x0; double x1; })a2;
- (id)heroImageWithTheme:(unsigned long long)a0 date:(id)a1 location:(struct CLLocationCoordinate2D { double x0; double x1; })a2;
- (void)setTimelapseListingHasAssets:(id)a0;

@end
