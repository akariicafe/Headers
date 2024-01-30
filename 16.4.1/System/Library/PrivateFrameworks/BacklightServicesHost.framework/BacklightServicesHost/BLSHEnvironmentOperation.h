@interface BLSHEnvironmentOperation : NSObject

@property (readonly, nonatomic) long long backlightState;

- (id)description;
- (id)initWithBacklightState:(long long)a0;

@end
