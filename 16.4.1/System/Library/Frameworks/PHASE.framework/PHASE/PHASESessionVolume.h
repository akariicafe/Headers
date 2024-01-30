@interface PHASESessionVolume : NSObject

@property (readonly, nonatomic) float value;
@property (readonly, nonatomic) long long unit;

- (id)description;
- (id)initWithValue:(float)a0 unit:(long long)a1;

@end
