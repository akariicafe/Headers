@class NSMutableDictionary;

@interface FMAlertManager : NSObject

@property (retain, nonatomic) NSMutableDictionary *activeAlerts;
@property (retain, nonatomic) NSMutableDictionary *activeCFNotificationsByCategory;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (id)initSingleton;
- (id)init;
- (id)_xpcTransactionNameFor:(id)a0;
- (void)activateAlert:(id)a0;

@end
