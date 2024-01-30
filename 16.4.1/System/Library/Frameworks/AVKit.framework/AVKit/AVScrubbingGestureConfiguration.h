@class AVScrubbingGesturePlatformConfiguration;

@interface AVScrubbingGestureConfiguration : NSObject

@property (readonly, nonatomic) float syntheticFriction;
@property (readonly, nonatomic) BOOL usesNaturalDirection;
@property (readonly, nonatomic) AVScrubbingGesturePlatformConfiguration *platformConfiguration;

+ (id)defaultConfiguration;
+ (id)configurationWithSyntheticFriction:(float)a0 usesNaturalDirection:(BOOL)a1 platformConfiguration:(id)a2;

- (void).cxx_destruct;

@end
