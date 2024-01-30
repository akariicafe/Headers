@class NSString, CHSWidgetMetrics, CHSWidget;

@interface CHUISAvocadoWindowScene : UIWindowScene

@property (readonly, copy, nonatomic) CHSWidget *widget;
@property (readonly, copy, nonatomic) CHSWidgetMetrics *metrics;
@property (readonly, nonatomic) unsigned long long style;
@property (readonly, copy, nonatomic) NSString *widgetConfigurationIdentifier;
@property (readonly, nonatomic, getter=isVisiblySettled) BOOL visiblySettled;
@property (readonly, nonatomic, getter=isPrivateModeEnabled) BOOL privateModeEnabled;
@property (readonly, nonatomic, getter=areAnimationsDisabled) BOOL animationsDisabled;
@property (nonatomic, getter=shouldVisibleEntrySnapshot) BOOL visibleEntryShouldSnapshot;

- (id)_sceneSettings;

@end
