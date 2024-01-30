@class NSMutableSet;

@interface ATXDistributedNotificationHandler : NSObject {
    NSMutableSet *_recentNotifications;
}

+ (id)sharedInstance;

- (void).cxx_destruct;
- (id)init;
- (void)dealloc;
- (void)_notificationFired:(id)a0;
- (void)_repostNotificationFromSource:(id)a0 name:(id)a1 userInfo:(id)a2;
- (void)_pruneOldRecents;
- (void)registerXPCHandler;

@end
