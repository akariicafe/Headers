@interface VUINetworkReachabilityMonitor : NSObject

@property (getter=isNetworkReachable) BOOL networkReachable;
@property (retain, nonatomic) id networkTypeChangedNotificationToken;
@property (retain, nonatomic) id networkReachabilityChangedNotificationToken;

+ (id)sharedInstance;
+ (BOOL)_isNetworkReachable;

- (id)init;
- (void).cxx_destruct;
- (id)_init;
- (void)_updateNetworkReachability;

@end
