@class NSNumber;

@interface WFSetBrightnessIntent : INIntent <WFDecimalSettingIntent>

@property (retain, nonatomic) NSNumber *value;
@property (readonly, nonatomic) Class settingsClientClass;
@property (copy, nonatomic) NSNumber *value;

- (void)applyWithSettingsClient:(id)a0 completionHandler:(id /* block */)a1;

@end
