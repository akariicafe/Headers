@interface MTShowSettingsFactory : NSObject

+ (id)settingsForShowTypeEpisodic;
+ (id)settingsForShowTypeSerial;
+ (id)settingsForShowTypeTimely;
+ (id)settingsForShowTypeDefault;
+ (id)defaultSettingsForShowType:(long long)a0;

@end
