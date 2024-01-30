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

- (id)_pairedNanoRegistryDevice;
- (BOOL)isInitialSyncRestricted;
- (BOOL)pairedDeviceSupportsMailContentProtectedChannel;
- (id)init;
- (void).cxx_destruct;
- (void)dealloc;
- (BOOL)pairedDeviceSupportsStandaloneMode;
- (void)syncCoordinator:(id)a0 beginSyncSession:(id)a1;
- (void)_handleDidUnpairNotification:(id)a0;
- (void)reportInitialSyncDidComplete;
- (id)pairingStorePath;
- (void)reportInitialSyncProgress:(double)a0;
- (id)_bbSubsectionIdsForMessage:(id)a0;
- (void)syncCoordinator:(id)a0 didInvalidateSyncSession:(id)a1;
- (BOOL)willPresentNotificationForMessage:(id)a0;
- (id)pairedDeviceScreenSize;
- (void)reportInitialSyncDidCompleteSending;
- (id)pairedDeviceScreenScale;
- (void)_handlePairedDeviceChangedNotification:(id)a0;
- (void)reportInitialSyncDidFailWithError:(id)a0;
- (BOOL)pairedDeviceSupportsMultipleMailboxes;

@end
