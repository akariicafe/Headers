@interface WFAXSDSettings : NSObject

+ (id)localizedNameForSoundDetectionType:(id)a0;
+ (BOOL)soundDetectionEnabled;
+ (id)bmTypeForAXSDSoundDetectionType:(id)a0;
+ (BOOL)isApplianceSoundDetectionType:(id)a0;
+ (id)mapLocalizedSupportedSoundDetectionTypesUsingBlock:(id /* block */)a0;

@end
