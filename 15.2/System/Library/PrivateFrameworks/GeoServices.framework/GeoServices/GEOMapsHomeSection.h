@class NSString, GEOCollectionSuggestionResult;

@interface GEOMapsHomeSection : NSObject

@property (readonly, nonatomic) long long sectionType;
@property (readonly, nonatomic) NSString *name;
@property (readonly, nonatomic) GEOCollectionSuggestionResult *collectionSuggestionResult;

- (id)initWithMapsHomeSection:(id)a0 mapsResults:(id)a1;
- (void).cxx_destruct;

@end
