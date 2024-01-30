@class NSArray, GEOPDRelatedPlace;

@interface GEORelatedPlaceList : NSObject {
    GEOPDRelatedPlace *_relatedPlace;
}

@property (readonly, nonatomic) NSArray *mapIdentifiers;
@property (readonly, nonatomic) int type;

- (void).cxx_destruct;
- (id)initWithRelatedPlace:(id)a0;

@end
