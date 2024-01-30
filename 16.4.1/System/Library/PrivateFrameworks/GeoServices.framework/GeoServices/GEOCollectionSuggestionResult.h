@class NSArray, GEOExploreGuides, GEOPDCollectionSuggestionResult;

@interface GEOCollectionSuggestionResult : NSObject {
    GEOPDCollectionSuggestionResult *_collectionSuggestionResult;
}

@property (readonly, nonatomic) NSArray *collections;
@property (readonly, nonatomic) GEOExploreGuides *exploreGuides;

- (id)initWithCollectionSuggestionResult:(id)a0 mapsResults:(id)a1;
- (void).cxx_destruct;

@end
