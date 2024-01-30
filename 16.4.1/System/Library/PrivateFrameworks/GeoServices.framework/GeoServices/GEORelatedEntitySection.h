@class NSString, NSArray, GEORelatedCollectionSection;

@interface GEORelatedEntitySection : NSObject

@property (readonly, nonatomic) NSString *name;
@property (readonly, nonatomic) unsigned int index;
@property (readonly, nonatomic) long long sectionType;
@property (readonly, nonatomic) GEORelatedCollectionSection *relatedCollectionSection;
@property (readonly, nonatomic) NSArray *relatedPlaceCollections;

- (id)init;
- (void).cxx_destruct;
- (id)initWithRelatedEntitySection:(id)a0 mapsResults:(id)a1;
- (id)placeCollectionsWithCollectionSection:(id)a0;

@end
