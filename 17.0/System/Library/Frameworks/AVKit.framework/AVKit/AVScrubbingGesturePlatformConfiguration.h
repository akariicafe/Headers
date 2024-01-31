@interface AVScrubbingGesturePlatformConfiguration : NSObject

@property (readonly, nonatomic) float magnitude;
@property (readonly, nonatomic) float nonLinearity;

+ (id)defaultConfiguration;
+ (id)configurationWithMagnitude:(float)a0 nonLinearity:(float)a1;

@end
