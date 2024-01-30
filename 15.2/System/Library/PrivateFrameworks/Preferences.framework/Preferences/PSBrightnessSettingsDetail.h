@class NSString;

@interface PSBrightnessSettingsDetail : NSObject <PSSettingsDetail>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)iconImage;
+ (void)setValue:(double)a0;
+ (double)currentValue;
+ (id)preferencesURL;
+ (double)incrementedBrightnessValue:(double)a0;
+ (void)incrementBrightnessValue:(double)a0;
+ (void)beginBrightnessAdjustmentTransaction;
+ (BOOL)autoBrightnessEnabled;
+ (void)endBrightnessAdjustmentTransaction;
+ (void)endObservingExternalBrightnessChanges;
+ (void)beginObservingExternalBrightnessChanges:(id /* block */)a0 changedAction:(id /* block */)a1;
+ (BOOL)deviceSupportsAutoBrightness;
+ (void)setAutoBrightnessEnabled:(BOOL)a0;


@end
