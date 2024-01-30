@class NSString;

@interface PSBrightnessSettingsDetail : NSObject <PSSettingsDetail>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)iconImage;
+ (id)preferencesURL;
+ (double)currentValue;
+ (void)setValue:(double)a0;
+ (BOOL)autoBrightnessEnabled;
+ (void)beginBrightnessAdjustmentTransaction;
+ (void)beginObservingExternalBrightnessChanges:(id /* block */)a0 changedAction:(id /* block */)a1;
+ (BOOL)deviceSupportsAutoBrightness;
+ (void)endBrightnessAdjustmentTransaction;
+ (void)endObservingExternalBrightnessChanges;
+ (void)incrementBrightnessValue:(double)a0;
+ (double)incrementedBrightnessValue:(double)a0;
+ (void)setAutoBrightnessEnabled:(BOOL)a0;


@end
