@class NSArray;

@interface VISearchResult : NSObject <NSCopying>

@property (readonly, nonatomic) NSArray *regionOfInterestResults;

+ (id)empty;

- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithRegionOfInterestResults:(id)a0;

@end
