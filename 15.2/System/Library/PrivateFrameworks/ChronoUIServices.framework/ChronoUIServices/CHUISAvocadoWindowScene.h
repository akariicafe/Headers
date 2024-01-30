@class CHSWidgetMetrics, NSString, CHSWidget, CHUISWidgetVisibilitySettings;

@interface CHUISAvocadoWindowScene : UIWindowScene

@property (readonly, copy, nonatomic) CHSWidget *widget;
@property (readonly, copy, nonatomic) CHSWidgetMetrics *metrics;
@property (readonly, nonatomic) unsigned long long style;
@property (readonly, copy, nonatomic) NSString *widgetHostIdentifier;
@property (readonly, copy, nonatomic) NSString *widgetConfigurationIdentifier;
@property (readonly, copy, nonatomic) CHUISWidgetVisibilitySettings *visibility;
@property (readonly, nonatomic, getter=areAnimationsDisabled) BOOL animationsDisabled;
@property (readonly, nonatomic, getter=shouldVisibleEntrySnapshot) BOOL visibleEntryShouldSnapshot;
@property (readonly, nonatomic) BOOL canAppearInSecureEnvironment;

- (id)_sceneSettings;

@end
