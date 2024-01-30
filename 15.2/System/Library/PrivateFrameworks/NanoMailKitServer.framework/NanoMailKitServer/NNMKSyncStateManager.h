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

- (BOOL)pairedDeviceSupportsMailContentProtectedChannel;
- (id)pairingStorePath;
- (void)reportInitialSyncProgress:(double)a0;
- (void)reportInitialSyncDidCompleteSending;
- (void)syncCoordinator:(id)a0 didInvalidateSyncSession:(id)a1;
- (BOOL)pairedDeviceSupportsMultipleMailboxes;
- (id)_bbSubsectionIdsForMessage:(id)a0;
- (void).cxx_destruct;
- (id)_pairedNanoRegistryDevice;
- (id)pairedDeviceScreenScale;
- (id)init;
- (BOOL)pairedDeviceSupportsStandaloneMode;
- (void)reportInitialSyncDidFailWithError:(id)a0;
- (id)pairedDeviceScreenSize;
- (void)_handlePairedDeviceChangedNotification:(id)a0;
- (void)dealloc;
- (void)reportInitialSyncDidComplete;
- (void)_handleDidUnpairNotification:(id)a0;
- (BOOL)willPresentNotificationForMessage:(id)a0;
- (BOOL)isInitialSyncRestricted;
- (void)syncCoordinator:(id)a0 beginSyncSession:(id)a1;

@end
