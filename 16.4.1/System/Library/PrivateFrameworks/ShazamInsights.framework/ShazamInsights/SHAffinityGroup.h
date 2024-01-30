@class NSArray, NSMutableArray;

@interface SHAffinityGroup : NSObject

@property (retain, nonatomic) NSMutableArray *mutableMediaItems;
@property (readonly, nonatomic) long long groupType;
@property (readonly, nonatomic) long long cohesionLevel;
@property (readonly, nonatomic) NSArray *mediaItems;

- (id)init;
- (void).cxx_destruct;
- (void)appendMediaItem:(id)a0;
- (id)initWithType:(long long)a0 cohesionLevel:(long long)a1;

@end
