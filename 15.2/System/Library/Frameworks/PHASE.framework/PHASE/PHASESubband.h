@interface PHASESubband : NSObject

@property (readonly, nonatomic) float frequency;
@property (readonly, nonatomic) float value;

+ (id)new;

- (id)init;
- (id)initWithFrequency:(float)a0 value:(float)a1;

@end
