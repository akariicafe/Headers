@class NSString, NSUserDefaults, NSDate;

@interface APWSettings : NSObject

@property (readonly, nonatomic) NSUserDefaults *internalSettings;
@property (nonatomic, getter=isDebugUIEnabled) BOOL debugUIEnabled;
@property (nonatomic, getter=isSnapshotLabelEnabled) BOOL snapshotLabelEnabled;
@property (nonatomic, getter=isDemoModeEnabled) BOOL demoModeEnabled;
@property (nonatomic, getter=isForceEmptyEnabled) BOOL forceEmptyEnabled;
@property (nonatomic, getter=isWidgetFeedbackEnabled) BOOL widgetFeedbackEnabled;
@property (copy, nonatomic) NSDate *lastViewDidDisappearDate;
@property (copy, nonatomic) NSString *savedContentSizeCategory;

+ (id)sharedSettings;

- (void).cxx_destruct;
- (long long)numberOfActionPredictions;
- (void)setNumberOfActionPredictions:(long long)a0;
- (BOOL)isActionsEnabled;
- (void)setActionsEnabled:(BOOL)a0;
- (id)_appsForDemoMode;

@end
