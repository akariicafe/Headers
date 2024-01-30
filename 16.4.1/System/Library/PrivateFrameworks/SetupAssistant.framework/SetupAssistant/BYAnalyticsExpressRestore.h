@interface BYAnalyticsExpressRestore : NSObject

@property (nonatomic) BOOL paneShown;
@property (nonatomic) unsigned long long restoreChoice;
@property (nonatomic) BOOL offeredBackup;

- (id)eventPayload;
- (id)initWithAnalyticsManager:(id)a0;

@end
