@protocol SASettingSettingsAction;

@interface SASettingShowAndPerformSettingsAction : SABaseClientBoundCommand

@property (retain, nonatomic) id<SASettingSettingsAction> settingsAction;

+ (id)showAndPerformSettingsAction;
+ (id)showAndPerformSettingsActionWithDictionary:(id)a0 context:(id)a1;

- (id)groupIdentifier;
- (id)encodedClassName;
- (BOOL)requiresResponse;

@end
