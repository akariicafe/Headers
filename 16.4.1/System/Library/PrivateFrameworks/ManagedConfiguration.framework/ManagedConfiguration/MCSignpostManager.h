@interface MCSignpostManager : NSObject

+ (void)willSetFeature:(id)a0;
+ (id)signpostsForTypeFilter:(unsigned long long)a0 featureFilter:(id)a1 duration:(double)a2 error:(id *)a3;
+ (void)willGetFeature:(id)a0;
+ (void)willPostEffectiveSettingsChangedNotification;

@end
