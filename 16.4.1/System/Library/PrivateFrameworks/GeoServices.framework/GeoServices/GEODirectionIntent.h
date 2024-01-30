@class GEOResolvedItem;

@interface GEODirectionIntent : NSObject

@property (readonly, nonatomic) GEOResolvedItem *origin;
@property (readonly, nonatomic) GEOResolvedItem *destination;
@property (readonly, nonatomic) int transportType;

- (void).cxx_destruct;
- (id)initWithDirectionIntent:(id)a0;

@end
