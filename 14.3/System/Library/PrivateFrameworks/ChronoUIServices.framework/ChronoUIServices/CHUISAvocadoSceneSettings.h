@class NSString, CHSWidgetMetrics, CHSWidget;

@interface CHUISAvocadoSceneSettings : UIApplicationSceneSettings

@property (readonly, copy, nonatomic) CHSWidget *widget;
@property (readonly, copy, nonatomic) CHSWidgetMetrics *metrics;
@property (readonly, nonatomic) unsigned long long style;
@property (readonly, copy, nonatomic) NSString *widgetConfigurationIdentifier;
@property (readonly, nonatomic, getter=isVisiblySettled) BOOL visiblySettled;
@property (readonly, nonatomic, getter=isPrivateModeEnabled) BOOL privateModeEnabled;
@property (readonly, nonatomic, getter=areAnimationsDisabled) BOOL animationsDisabled;
@property (nonatomic, getter=shouldVisibleEntrySnapshot) BOOL visibleEntryShouldSnapshot;

- (id)valueDescriptionForFlag:(long long)a0 object:(id)a1 ofSetting:(unsigned long long)a2;
- (id)keyDescriptionForSetting:(unsigned long long)a0;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;

@end
