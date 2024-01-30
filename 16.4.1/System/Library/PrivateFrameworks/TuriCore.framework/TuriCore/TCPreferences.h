@class NSMutableDictionary;

@interface TCPreferences : NSObject

@property (retain, nonatomic) NSMutableDictionary *properties;
@property (readonly) long long devicePolicy;

+ (id)userPreferences;
+ (void)setOverridePreferences:(id)a0;
+ (id)defaultPreferences;

- (id)initWithProperties:(id)a0;
- (id)initWithDefaults;
- (void).cxx_destruct;
- (void)setDevicePolicy:(long long)a0;

@end
