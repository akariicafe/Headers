@class CHSWidgetMetrics, NSString, CHSWidget, CHUISWidgetVisibilitySettings;

@interface CHUISAvocadoSceneSettings : UIApplicationSceneSettings

@property (readonly, copy, nonatomic) CHSWidget *widget;
@property (readonly, copy, nonatomic) CHSWidgetMetrics *metrics;
@property (readonly, nonatomic) unsigned long long style;
@property (readonly, copy, nonatomic) NSString *widgetHostIdentifier;
@property (readonly, copy, nonatomic) NSString *widgetConfigurationIdentifier;
@property (readonly, nonatomic) BOOL canAppearInSecureEnvironment;
@property (readonly, copy, nonatomic) CHUISWidgetVisibilitySettings *visibility;
@property (readonly, nonatomic, getter=areAnimationsDisabled) BOOL animationsDisabled;
@property (readonly, nonatomic, getter=shouldVisibleEntrySnapshot) BOOL visibleEntryShouldSnapshot;

- (id)valueDescriptionForFlag:(long long)a0 object:(id)a1 ofSetting:(unsigned long long)a2;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (id)keyDescriptionForSetting:(unsigned long long)a0;

@end
