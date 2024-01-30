@interface VUIDebugDefaults : NSObject

@property (nonatomic) BOOL debugUIEnabled;
@property (nonatomic) BOOL metricsLoggingEnabled;
@property (nonatomic) BOOL metricsExpandedLoggingEnabled;
@property (nonatomic) BOOL metricsLogLocationAndImpressions;
@property (nonatomic) BOOL metricsPageRenderLoggingEnabled;
@property (nonatomic) BOOL enableDemoMode;
@property (nonatomic) BOOL gdprFirstTimeFlowEnabled;
@property (nonatomic) BOOL gdprWhatsNewFlowEnabled;
@property (nonatomic) BOOL debugRefreshEventLogEnabled;

+ (id)sharedInstance;

- (id)init;

@end
