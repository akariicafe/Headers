@class NSString;

@interface AVTAvatarConfigurationMetric : NSObject <AVTAvatarConfigurationMetric>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)defaultMetric;
+ (unsigned long long)differenceCountFromDistance:(unsigned long long)a0;
+ (unsigned long long)distanceFromConfiguration:(id)a0 toConfiguration:(id)a1;
+ (void)enumerateDifferencesFromConfiguration:(id)a0 toConfiguration:(id)a1 withHandler:(id /* block */)a2;
+ (long long)gapFromDistance:(unsigned long long)a0;
+ (long long)impactForSettingKind:(struct { long long x0; long long x1; })a0;

- (unsigned long long)differenceCountFromDistance:(unsigned long long)a0;
- (unsigned long long)distanceFromConfiguration:(id)a0 toConfiguration:(id)a1;
- (long long)gapFromDistance:(unsigned long long)a0;

@end
