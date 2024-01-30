@class NSNumber;

@interface WFSetAppearanceIntent : INIntent <WFBooleanSettingIntent>

@property (nonatomic) long long operation;
@property (retain, nonatomic) NSNumber *state;
@property (readonly, nonatomic) Class settingsClientClass;
@property (nonatomic) long long operation;
@property (nonatomic) long long style;

- (void)applyWithSettingsClient:(id)a0 completionHandler:(id /* block */)a1;

@end
