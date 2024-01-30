@class NSMutableDictionary, NSObject;
@protocol OS_dispatch_queue;

@interface ATXBBNotificationManager : NSObject {
    NSObject<OS_dispatch_queue> *_queue;
    BOOL _debugOutput;
    NSMutableDictionary *_recentNotifications;
}

+ (id)sharedInstance;

- (id)init;
- (void).cxx_destruct;
- (id)recentNotifications;
- (BOOL)_purgeNotificationsWithMinDate:(id)a0;
- (void)addNotificationForBundleId:(id)a0 withPublicationDate:(id)a1;
- (id)initWithDebugOutput:(BOOL)a0;

@end
