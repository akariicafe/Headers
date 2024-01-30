@class NSArray, NSMutableArray;

@interface SHAffinityGroup : NSObject

@property (retain, nonatomic) NSMutableArray *mutableMediaItems;
@property (readonly, nonatomic) long long clusterType;
@property (readonly, nonatomic) long long cohesionLevel;
@property (readonly, nonatomic) NSArray *mediaItems;

- (void).cxx_destruct;
- (id)init;
- (id)initWithType:(long long)a0 cohesionLevel:(long long)a1;
- (void)appendMediaItem:(id)a0;

@end
