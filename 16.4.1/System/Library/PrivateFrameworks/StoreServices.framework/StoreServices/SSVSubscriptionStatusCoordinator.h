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
+ (id)copyStatusFromUserDefaults;
+ (void)endSuspendingSubscriptionStatusChangeNotifications;
+ (id)_existingSharedCoordinator;
+ (id)_changeNotificationSuspensionAccessQueue;
+ (void)updateUserDefaultsWithStatus:(id)a0;
+ (void)_sendChangeNotification;
+ (void)updateWithResponseDictionary:(id)a0 accountIdentifier:(id)a1;
+ (id)sharedCoordinator;
+ (void)sendChangeNotification;
+ (void)removeUserDefaultsForAccountIdentifier:(id)a0;

- (id)_copyValidStatusForStatus:(id)a0;
- (void)_accountStoreChangedNotification;
- (void)_fireStatusBlocksWithStatus:(id)a0 isFinal:(BOOL)a1 error:(id)a2;
- (void)modifyLastKnownStatusUsingBlock:(id /* block */)a0;
- (void)_externalChangeNotification;
- (void)dealloc;
- (void)getStatusWithOptions:(id)a0 statusBlock:(id /* block */)a1;
- (void)_invalidateLastKnownStatus;
- (void)_deviceStoreFrontChangedNotification;
- (void)_handleRequestResponseWithStatus:(id)a0 isFinal:(BOOL)a1 error:(id)a2;
- (void)_updateSubscriptionStatusAccessPolicyAllowingNotification:(BOOL)a0;
- (id)_copyStatusFromUserDefaults;
- (id)init;
- (void)_validateLastKnownStatus;
- (id)_copyStatusDateFromUserDefaults;
- (void).cxx_destruct;
- (void)reset;

@end
