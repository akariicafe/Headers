@class GEOElevationProfile;

@interface GEOCyclingRouteBuilderOutput : GEORouteBuilderOutput {
    GEOElevationProfile *_elevationProfile;
}

- (id)initWithGEORouteBuilderOutput:(id)a0;
- (void)setElevationProfile:(id)a0;
- (id)elevationProfile;
- (void).cxx_destruct;

@end
