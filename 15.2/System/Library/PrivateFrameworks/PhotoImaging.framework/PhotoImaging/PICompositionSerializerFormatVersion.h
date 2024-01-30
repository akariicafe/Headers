@interface PICompositionSerializerFormatVersion : NSObject

+ (id)currentFormatVersion;
+ (id)locallySupportedFormatVersions;
+ (BOOL)adjustmentHasPerspective:(id)a0 settings:(id)a1;
+ (BOOL)adjustmentHasCTM:(id)a0 settings:(id)a1;
+ (id)_versionRules;
+ (id)versionRules;
+ (id)formatVersionForAdjustment:(id)a0 identifier:(id)a1;
+ (id)adjustmentDataFormatVersionForComposition:(id)a0;

@end
