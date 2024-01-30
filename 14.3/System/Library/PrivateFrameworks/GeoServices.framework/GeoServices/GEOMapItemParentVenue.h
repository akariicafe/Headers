@interface GEOMapItemParentVenue : NSObject

@property (readonly, nonatomic) unsigned long long businessID;
@property (readonly, nonatomic) int featureType;

- (id)init;
- (id)initWithLocatedInsideInfo:(id)a0;
- (id)initWithBusinessID:(unsigned long long)a0 featureType:(int)a1;

@end
