@interface DBInstrumentClusterURLHandler : NSObject

+ (BOOL)isURLSupported:(id)a0;
+ (unsigned long long)_clusterSettingForURLValue:(id)a0;
+ (id)_correctedComponentsForURL:(id)a0;
+ (BOOL)_isMapsClusterURL:(id)a0;
+ (unsigned long long)_layoutSettingForURLValue:(id)a0;
+ (void)applySettingsForClusterURL:(id)a0 toSceneSettings:(id)a1;

@end
