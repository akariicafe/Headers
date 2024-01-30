@class NSString, NSHashTable;

@interface SBDashBoardApplicationInformer : NSObject <CSApplicationInforming> {
    NSHashTable *_observers;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)_isBundleIdentifierBlockedForCommunicationPolicy:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (void)_installedApplicationsDidChange:(id)a0;
- (void)dealloc;
- (BOOL)_isBundleIdentifierBlockedForScreenTimeExpiration:(id)a0;
- (BOOL)shouldScreenTimeSuppressNotificationsForBundleIdentifier:(id)a0;
- (void)_screenTimeNotificationPolicyDidChange:(id)a0;
- (BOOL)isBundleIdentifierClock:(id)a0;
- (BOOL)isBundleIdentifierWallet:(id)a0;
- (void)addApplicationInformationObserver:(id)a0;
- (void)removeApplicationInformationObserver:(id)a0;

@end
