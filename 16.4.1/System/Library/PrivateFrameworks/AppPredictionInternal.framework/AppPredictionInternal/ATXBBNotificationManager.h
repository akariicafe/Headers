@class NSMutableDictionary, NSObject;
@protocol OS_dispatch_queue;

@interface ATXBBNotificationManager : NSObject {
    NSObject<OS_dispatch_queue> *_queue;
    BOOL _debugOutput;
    NSMutableDictionary *_recentNotifications;
}

+ (id)sharedInstance;

- (BOOL)_purgeNotificationsWithMinDate:(id)a0;
- (id)initWithDebugOutput:(BOOL)a0;
- (id)init;
- (void)addNotificationForBundleId:(id)a0 withPublicationDate:(id)a1;
- (void).cxx_destruct;
- (id)recentNotifications;

@end
