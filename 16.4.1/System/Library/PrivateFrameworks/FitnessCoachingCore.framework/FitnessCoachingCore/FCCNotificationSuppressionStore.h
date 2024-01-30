@class FCCDateProvider;

@interface FCCNotificationSuppressionStore : NSObject {
    FCCDateProvider *_dateProvider;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _unfairLock;
}

- (void)setLastNotifiedSuppressionState:(BOOL)a0;
- (BOOL)notificationsSuppressed;
- (void)_updateStoredRequests:(id)a0;
- (void)addNotificationSuppressionRequest:(id)a0;
- (id)allRequests;
- (void)removeNotificationSuppressionRequest:(id)a0;
- (BOOL)lastNotifiedSuppressionState;
- (id)_userDefaults;
- (id)_requestsMap;
- (id)init;
- (id)initWithDateProvider:(id)a0;
- (void).cxx_destruct;

@end
