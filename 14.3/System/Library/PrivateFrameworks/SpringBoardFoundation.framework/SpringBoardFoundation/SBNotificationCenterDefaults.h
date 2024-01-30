@interface SBNotificationCenterDefaults : SBAbstractSpringBoardDefaultDomain

@property (readonly, nonatomic) BOOL useDuetRecommendations;
@property (readonly, nonatomic, getter=isBatteryWidgetAlwaysAvailable) BOOL batteryWidgetAlwaysAvailable;
@property (readonly, nonatomic) BOOL showInternalWidgets;
@property (readonly, nonatomic, getter=isWidgetSnapshottingEnabled) BOOL widgetSnapshottingEnabled;
@property (nonatomic) BOOL didPurgeNonCAMLSnapshots;
@property (nonatomic) BOOL didPurgeNonASTCSnapshots;
@property (readonly, nonatomic, getter=isWidgetLoggingEnabled) BOOL widgetLoggingEnabled;
@property (readonly, nonatomic) BOOL showWidgetSnapshotDebugLabels;

- (void)_bindAndRegisterDefaults;

@end
