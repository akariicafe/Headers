@interface WFAXSDSettings : NSObject

+ (id)allBMApplianceTypes;
+ (id)bmTypeForAXSDSoundDetectionType:(id)a0;
+ (BOOL)isApplianceSoundDetectionType:(id)a0;
+ (id)localizedNameForSoundDetectionType:(id)a0;
+ (id)mapLocalizedSupportedSoundDetectionTypesUsingBlock:(id /* block */)a0;
+ (BOOL)soundDetectionEnabled;

@end
