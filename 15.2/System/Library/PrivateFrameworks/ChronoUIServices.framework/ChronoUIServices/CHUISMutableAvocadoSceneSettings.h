@class CHSWidgetMetrics, NSString, CHSWidget, CHUISWidgetVisibilitySettings;

@interface CHUISMutableAvocadoSceneSettings : UIMutableApplicationSceneSettings

@property (copy, nonatomic) CHSWidget *widget;
@property (copy, nonatomic) CHSWidgetMetrics *metrics;
@property (nonatomic) unsigned long long style;
@property (copy, nonatomic) NSString *widgetHostIdentifier;
@property (copy, nonatomic) NSString *widgetConfigurationIdentifier;
@property (nonatomic) BOOL canAppearInSecureEnvironment;
@property (nonatomic) BOOL inSecureEnvironment;
@property (copy, nonatomic) CHUISWidgetVisibilitySettings *visibility;
@property (nonatomic, getter=areAnimationsDisabled) BOOL animationsDisabled;
@property (nonatomic, getter=shouldVisibleEntrySnapshot) BOOL visibleEntryShouldSnapshot;

- (id)valueDescriptionForFlag:(long long)a0 object:(id)a1 ofSetting:(unsigned long long)a2;
- (id)keyDescriptionForSetting:(unsigned long long)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
