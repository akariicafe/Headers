@class NSString, BLTPingSubscriber, PSYSyncCoordinator;
@protocol NNMKSyncStateManagerDelegate;

@interface NNMKSyncStateManager : NSObject <PSYSyncCoordinatorDelegate, NNMKSyncStateManager>

@property (retain, nonatomic) BLTPingSubscriber *notificationsPingSubscriber;
@property (retain, nonatomic) PSYSyncCoordinator *initialSyncCoordinator;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<NNMKSyncStateManagerDelegate> delegate;

- (void)syncCoordinator:(id)a0 didInvalidateSyncSession:(id)a1;
- (void)reportInitialSyncProgress:(double)a0;
- (BOOL)isInitialSyncRestricted;
- (BOOL)willPresentNotificationForMessage:(id)a0;
- (id)_pairedNanoRegistryDevice;
- (void)reportInitialSyncDidCompleteSending;
- (BOOL)pairedDeviceSupportsMailContentProtectedChannel;
- (void)syncCoordinator:(id)a0 beginSyncSession:(id)a1;
- (id)pairedDeviceScreenSize;
- (void)dealloc;
- (void)_handleDidUnpairNotification:(id)a0;
- (void)reportInitialSyncDidComplete;
- (id)pairingStorePath;
- (id)pairedDeviceScreenScale;
- (id)init;
- (void)reportInitialSyncDidFailWithError:(id)a0;
- (BOOL)pairedDeviceSupportsStandaloneMode;
- (void)_handlePairedDeviceChangedNotification:(id)a0;
- (void).cxx_destruct;
- (id)_bbSubsectionIdsForMessage:(id)a0;
- (BOOL)pairedDeviceSupportsMultipleMailboxes;

@end
