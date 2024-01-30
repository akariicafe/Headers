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

+ (void)updateUserDefaultsWithStatus:(id)a0;
+ (id)_changeNotificationSuspensionAccessQueue;
+ (void)_sendChangeNotification;
+ (void)removeUserDefaultsForAccountIdentifier:(id)a0;
+ (void)beginSuspendingSubscriptionStatusChangeNotifications;
+ (id)copyStatusFromUserDefaults;
+ (void)updateWithResponseDictionary:(id)a0 accountIdentifier:(id)a1;
+ (void)endSuspendingSubscriptionStatusChangeNotifications;
+ (id)sharedCoordinator;
+ (void)sendChangeNotification;
+ (id)_existingSharedCoordinator;

- (id)_copyStatusFromUserDefaults;
- (void)_invalidateLastKnownStatus;
- (void)modifyLastKnownStatusUsingBlock:(id /* block */)a0;
- (void)_fireStatusBlocksWithStatus:(id)a0 isFinal:(BOOL)a1 error:(id)a2;
- (void)_handleRequestResponseWithStatus:(id)a0 isFinal:(BOOL)a1 error:(id)a2;
- (id)_copyStatusDateFromUserDefaults;
- (void)_deviceStoreFrontChangedNotification;
- (void)getStatusWithOptions:(id)a0 statusBlock:(id /* block */)a1;
- (void).cxx_destruct;
- (id)init;
- (void)_updateSubscriptionStatusAccessPolicyAllowingNotification:(BOOL)a0;
- (void)_validateLastKnownStatus;
- (id)_copyValidStatusForStatus:(id)a0;
- (void)dealloc;
- (void)_externalChangeNotification;
- (void)reset;
- (void)_accountStoreChangedNotification;

@end
