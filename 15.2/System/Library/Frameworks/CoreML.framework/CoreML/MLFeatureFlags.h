@class NSUserDefaults, NSMutableDictionary;

@interface MLFeatureFlags : NSObject

@property (readonly, nonatomic) NSUserDefaults *userDefaults;
@property (readonly, nonatomic) NSMutableDictionary *flags;
@property (readonly, nonatomic) NSMutableDictionary *overrideOriginalValues;

+ (id)sharedFeatureFlags;

- (void).cxx_destruct;
- (id)init;
- (void)defineFeatures;
- (BOOL)isMPSGraphEnabled;
- (BOOL)isMPSGraphFP16Enabled;
- (void)addFeature:(id)a0 withControlName:(id)a1 defaultValue:(BOOL)a2;
- (BOOL)isFeatureEnabled:(id)a0;
- (id)controlKeyForFeature:(id)a0;
- (BOOL)setOverride:(BOOL)a0 forFeature:(id)a1;
- (BOOL)removeOverrideForFeature:(id)a0;

@end
