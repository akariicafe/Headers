@class NSArray, GEOMapItemPlaceAttribution;

@interface _MKMapItemPlaceAttribution : _MKMapItemAttribution {
    GEOMapItemPlaceAttribution *_geoPlaceAttribution;
}

@property (readonly, nonatomic) NSArray *checkInURLs;

- (id)initWithGEOMapItemAttribution:(id)a0;
- (void).cxx_destruct;

@end
