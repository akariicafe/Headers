@class NSMutableSet;

@interface ATXDistributedNotificationHandler : NSObject {
    NSMutableSet *_recentNotifications;
}

+ (id)sharedInstance;

- (void)_repostNotificationFromSource:(id)a0 name:(id)a1 userInfo:(id)a2;
- (void)_pruneOldRecents;
- (void)_notificationFired:(id)a0;
- (void)dealloc;
- (id)init;
- (void)registerXPCHandler;
- (void).cxx_destruct;

@end
