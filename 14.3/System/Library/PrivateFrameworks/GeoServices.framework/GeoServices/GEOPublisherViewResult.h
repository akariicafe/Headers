@class NSArray, GEOPDPublisherViewResult;

@interface GEOPublisherViewResult : NSObject {
    GEOPDPublisherViewResult *_publisherViewResult;
    NSArray *_places;
}

@property (readonly, nonatomic) NSArray *collectionIdentifiers;
@property (readonly, nonatomic) NSArray *resultFilters;

- (void).cxx_destruct;
- (id)initWithPublisherViewResult:(id)a0;
- (id)initWithPublisherViewResult:(id)a0 withPlaces:(id)a1;

@end
