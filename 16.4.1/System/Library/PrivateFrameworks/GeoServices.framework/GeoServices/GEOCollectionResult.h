@class NSArray, GEOPlaceCollection, GEOPDCollectionResult, GEOPDComponent;

@interface GEOCollectionResult : NSObject {
    GEOPDCollectionResult *_collectionResult;
    GEOPDComponent *_collectionComponent;
    GEOPlaceCollection *_collection;
}

@property (readonly, nonatomic) GEOPlaceCollection *collection;
@property (readonly, nonatomic) NSArray *placeCollectionItems;

+ (id)collectionResultsFromResponse:(id)a0;

- (id)initWithCollectionResult:(id)a0;
- (void).cxx_destruct;

@end
