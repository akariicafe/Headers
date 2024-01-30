@class NSString, NSXPCConnection, NSObject, NSMutableArray;
@protocol OS_dispatch_queue;

@interface UNUserNotificationSettingsServiceConnection : NSObject <UNUserNotificationSettingsClientProtocol> {
    NSMutableArray *_observers;
}

@property (retain, nonatomic) NSXPCConnection *connection;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *callOutQueue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (void)_queue_invalidatedConnection;
- (id)init;
- (void)replaceNotificationSettings:(id)a0 forNotificationSourceIdentifier:(id)a1;
- (void).cxx_destruct;
- (void)_queue_interruptedConnection;
- (void)replaceNotificationTopicSettings:(id)a0 forNotificationSourceIdentifier:(id)a1 topicIdentifier:(id)a2;
- (void)removeObserver:(id)a0;
- (void)addObserver:(id)a0;
- (id)notificationSystemSettings;
- (void)_queue_addObserver:(id)a0;
- (void)_queue_removeObserver:(id)a0;
- (void)_invalidate;
- (id)allNotificationSources;
- (void)setNotificationSystemSettings:(id)a0;
- (id)_queue_ensureConnection;
- (id)notificationSourceWithIdentifier:(id)a0;
- (void)updateNotificationSourcesWithBundleIdentifiers:(id)a0;
- (void)updateNotificationSystemSettings:(id)a0;
- (id)notificationSourcesWithIdentifiers:(id)a0;

@end
