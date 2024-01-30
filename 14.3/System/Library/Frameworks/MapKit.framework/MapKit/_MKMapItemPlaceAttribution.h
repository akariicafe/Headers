@class NSArray, GEOMapItemPlaceAttribution;

@interface _MKMapItemPlaceAttribution : _MKMapItemAttribution {
    GEOMapItemPlaceAttribution *_geoPlaceAttribution;
}

@property (readonly, nonatomic) NSArray *checkInURLs;

- (void).cxx_destruct;
- (id)initWithGEOMapItemAttribution:(id)a0;

@end
