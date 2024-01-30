@class NSMutableArray, SSVSubscriptionStatusRequest, NSDate, NSObject, SSVSubscriptionStatus;
@protocol OS_dispatch_queue;

@interface SSVSubscriptionStatusCoordinator : NSObject {
    SSVSubscriptionStatusRequest *_activeRequest;
    NSObject<OS_dispatch_queue> *_callbackQueue;
    BOOL _didReset;
    NSObject<OS_dispatch_queue> *_dispatchQueue;
    SSVSubscriptionStatus *_lastKnownStatus;
    NSDate *_lastStatusDate;
    int _notificationToken;
    long long _subscriptionStatusAccessPolicy;
    NSMutableArray *_statusBlocks;
}

@property (readonly, copy) SSVSubscriptionStatus *lastKnownStatus;

+ (void)beginSuspendingSubscriptionStatusChangeNotifications;
+ (void)sendChangeNotification;
+ (id)copyStatusFromUserDefaults;
+ (void)updateUserDefaultsWithStatus:(id)a0;
+ (void)_sendChangeNotification;
+ (void)endSuspendingSubscriptionStatusChangeNotifications;
+ (id)sharedCoordinator;
+ (id)_changeNotificationSuspensionAccessQueue;
+ (void)removeUserDefaultsForAccountIdentifier:(id)a0;
+ (id)_existingSharedCoordinator;
+ (void)updateWithResponseDictionary:(id)a0 accountIdentifier:(id)a1;

- (id)init;
- (void).cxx_destruct;
- (void)reset;
- (void)_deviceStoreFrontChangedNotification;
- (void)dealloc;
- (void)modifyLastKnownStatusUsingBlock:(id /* block */)a0;
- (void)_validateLastKnownStatus;
- (void)_fireStatusBlocksWithStatus:(id)a0 isFinal:(BOOL)a1 error:(id)a2;
- (void)_invalidateLastKnownStatus;
- (void)_updateSubscriptionStatusAccessPolicyAllowingNotification:(BOOL)a0;
- (void)getStatusWithOptions:(id)a0 statusBlock:(id /* block */)a1;
- (id)_copyStatusDateFromUserDefaults;
- (void)_accountStoreChangedNotification;
- (id)_copyStatusFromUserDefaults;
- (void)_handleRequestResponseWithStatus:(id)a0 isFinal:(BOOL)a1 error:(id)a2;
- (id)_copyValidStatusForStatus:(id)a0;
- (void)_externalChangeNotification;

@end
