@interface NTKComplicationBundleHelper : NSObject

+ (id)_complicationFamilyToTemplateFileNameMapping:(id)a0;
+ (id)_templateForFamily:(long long)a0 bundle:(id)a1;
+ (id)localizedComplicationDescriptionForFamily:(long long)a0 bundle:(id)a1 localization:(id)a2;
+ (id)localizedComplicationTemplateForFamily:(long long)a0 bundle:(id)a1 localization:(id)a2;
+ (id)localizedComplicationTemplateForTemplate:(id)a0 bundle:(id)a1 localization:(id)a2;
+ (id)supportedComplicationFamiliesForBundle:(id)a0;

@end
