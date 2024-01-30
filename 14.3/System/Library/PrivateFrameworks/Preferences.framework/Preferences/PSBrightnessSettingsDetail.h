@class NSString;

@interface PSBrightnessSettingsDetail : NSObject <PSSettingsDetail>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)autoBrightnessEnabled;
+ (double)incrementedBrightnessValue:(double)a0;
+ (void)incrementBrightnessValue:(double)a0;
+ (BOOL)deviceSupportsAutoBrightness;
+ (void)beginBrightnessAdjustmentTransaction;
+ (void)endBrightnessAdjustmentTransaction;
+ (void)beginObservingExternalBrightnessChanges:(id /* block */)a0 changedAction:(id /* block */)a1;
+ (void)setAutoBrightnessEnabled:(BOOL)a0;
+ (void)endObservingExternalBrightnessChanges;
+ (id)iconImage;
+ (id)preferencesURL;
+ (void)setValue:(double)a0;
+ (double)currentValue;


@end
