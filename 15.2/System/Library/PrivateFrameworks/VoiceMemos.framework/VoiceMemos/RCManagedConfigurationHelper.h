@class NSString;
@protocol RCManagedConfigurationHelperDelegate;

@interface RCManagedConfigurationHelper : NSObject <MCProfileConnectionObserver> {
    BOOL _observing;
}

@property (weak, nonatomic) id<RCManagedConfigurationHelperDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)cloudSyncIsAllowed;

- (void)profileConnectionDidReceiveRestrictionChangedNotification:(id)a0 userInfo:(id)a1;
- (void).cxx_destruct;
- (void)_stopObserving;
- (void)_notifyDelegateOfChange;
- (void)dealloc;
- (void)_startObserving;

@end
