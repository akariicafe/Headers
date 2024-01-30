@class NSUserDefaults, NSMutableDictionary;

@interface MLFeatureFlags : NSObject

@property (readonly, nonatomic) NSUserDefaults *userDefaults;
@property (readonly, nonatomic) NSMutableDictionary *flags;
@property (readonly, nonatomic) NSMutableDictionary *overrideOriginalValues;

+ (id)sharedFeatureFlags;

- (id)init;
- (void).cxx_destruct;
- (BOOL)isNNv2Enabled;
- (void)defineFeatures;
- (void)addFeature:(id)a0 withControlName:(id)a1 defaultValue:(BOOL)a2;
- (BOOL)isFeatureEnabled:(id)a0;
- (id)controlKeyForFeature:(id)a0;
- (BOOL)setOverride:(BOOL)a0 forFeature:(id)a1;
- (BOOL)removeOverrideForFeature:(id)a0;

@end
