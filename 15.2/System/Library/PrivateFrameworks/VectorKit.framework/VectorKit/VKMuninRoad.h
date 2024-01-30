@class NSString;

@interface VKMuninRoad : NSObject

@property (readonly, nonatomic) NSString *roadName;

- (id)description;
- (id)initWithMuninRoadEdge:(const void *)a0 localize:(BOOL)a1;
- (BOOL)isEqual:(id)a0;
- (id)initWithLocalizedName:(const char *)a0;
- (void)dealloc;

@end
