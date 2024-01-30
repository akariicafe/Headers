@class NSString, CHSWidgetMetrics, CHSWidget;

@interface CHUISMutableAvocadoSceneSettings : UIMutableApplicationSceneSettings

@property (copy, nonatomic) CHSWidget *widget;
@property (copy, nonatomic) CHSWidgetMetrics *metrics;
@property (nonatomic) unsigned long long style;
@property (copy, nonatomic) NSString *widgetConfigurationIdentifier;
@property (nonatomic, getter=isVisiblySettled) BOOL visiblySettled;
@property (nonatomic, getter=isPrivateModeEnabled) BOOL privateModeEnabled;
@property (nonatomic, getter=areAnimationsDisabled) BOOL animationsDisabled;
@property (nonatomic, getter=shouldVisibleEntrySnapshot) BOOL visibleEntryShouldSnapshot;

- (id)valueDescriptionForFlag:(long long)a0 object:(id)a1 ofSetting:(unsigned long long)a2;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)keyDescriptionForSetting:(unsigned long long)a0;
- (BOOL)privateMode;

@end
