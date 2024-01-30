@interface NTKComplicationBundleHelper : NSObject

+ (id)localizedComplicationTemplateForFamily:(long long)a0 bundle:(id)a1 localization:(id)a2;
+ (id)_complicationFamilyToTemplateFileNameMapping:(id)a0;
+ (id)_templateForFamily:(long long)a0 bundle:(id)a1;
+ (id)localizedComplicationTemplateForTemplate:(id)a0 bundle:(id)a1 localization:(id)a2;
+ (id)supportedComplicationFamiliesForBundle:(id)a0;
+ (id)localizedComplicationDescriptionForFamily:(long long)a0 bundle:(id)a1 localization:(id)a2;

@end
