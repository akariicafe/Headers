@class NSNumber;

@interface WFSetFlashlightIntent : INIntent <WFBooleanSettingIntent, WFDecimalSettingIntent>

@property (nonatomic) long long operation;
@property (retain, nonatomic) NSNumber *state;
@property (readonly, nonatomic) Class settingsClientClass;
@property (retain, nonatomic) NSNumber *value;
@property (nonatomic) long long operation;
@property (copy, nonatomic) NSNumber *state;
@property (copy, nonatomic) NSNumber *value;

- (void)applyWithSettingsClient:(id)a0 completionHandler:(id /* block */)a1;

@end
