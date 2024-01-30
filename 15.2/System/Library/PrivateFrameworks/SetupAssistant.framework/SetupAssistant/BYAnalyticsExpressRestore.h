@interface BYAnalyticsExpressRestore : NSObject

@property (nonatomic) BOOL paneShown;
@property (nonatomic) unsigned long long restoreChoice;
@property (nonatomic) BOOL offeredBackup;

+ (id)sharedInstance;

- (id)eventPayload;
- (id)init;

@end
