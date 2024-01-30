@class NSString;

@interface VKMuninRoad : NSObject

@property (readonly, nonatomic) NSString *roadName;

- (BOOL)isEqual:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)initWithMuninRoadEdge:(const void *)a0 localize:(BOOL)a1;
- (id)initWithLocalizedName:(const char *)a0;

@end
