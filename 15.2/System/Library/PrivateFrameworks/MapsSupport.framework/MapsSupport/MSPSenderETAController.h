@class NSString, NSArray, MSPSenderMinimalStrategy, MSPNavigationListener, MSPSharedTripRelay, MSPSenderLiveStrategy, MSPSenderMessageStrategy, NSMutableSet, NSObject, MSPSharedTripGroupSession, MSPGroupSessionStorage, MSPSharedTripStorageController;
@protocol OS_os_transaction, MSPSenderETAControllerDelegate;

@interface MSPSenderETAController : NSObject <MSPNavigationListenerDelegate, MSPSharedTripGroupSessionDelegate, MSPSenderMessageStrategyDelegate> {
    NSObject<OS_os_transaction> *_transaction;
    MSPNavigationListener *_navigationListener;
    NSMutableSet *_destinations;
    MSPSharedTripRelay *_idsRelay;
    MSPSharedTripGroupSession *_groupSession;
    MSPSenderMinimalStrategy *_minimalSender;
    MSPSenderLiveStrategy *_liveSender;
    MSPSenderMessageStrategy *_messageSender;
    MSPGroupSessionStorage *_sessionStorage;
    MSPSharedTripStorageController *_storageController;
}

@property (readonly, nonatomic) NSArray *activeHandles;
@property (weak, nonatomic) NSObject<MSPSenderETAControllerDelegate> *delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithRelay:(id)a0;
- (void)stopSharing;
- (void)navigationListenerIsReady:(id)a0;
- (void)navigationListenerTrafficUpdated:(id)a0;
- (BOOL)_validateNavigationState:(id *)a0;
- (void)stopSharingWithGroup:(id)a0;
- (void)_startNavigationListener;
- (void)_createGroupSessionIfNeededWithIdentifier:(id)a0;
- (void)navigationListenerDestinationUpdated:(id)a0;
- (void)groupSession:(id)a0 participantDidJoin:(id)a1;
- (void)groupSession:(id)a0 participantDidLeave:(id)a1;
- (void)navigationListenerRouteUpdated:(id)a0;
- (void)_invalidateActiveHandles;
- (BOOL)startSharingWith:(id)a0 error:(id *)a1;
- (void)_updateStorage;
- (void)navigationListenerArrived:(id)a0;
- (void)_startingGroupSession;
- (void).cxx_destruct;
- (void)_cleanObjects;
- (void)_stopNavigationListener;
- (BOOL)startSharingWithGroup:(id)a0 error:(id *)a1;
- (id)rulesForParticipant:(id)a0;
- (void)_sendFinishedToIdentifiers:(id)a0;
- (BOOL)startSharingWithMessages:(id)a0 error:(id *)a1;
- (void)touchedRules;
- (void)dealloc;
- (void)groupSessionEnded:(id)a0 withError:(id)a1;
- (void)navigationListenerETAUpdated:(id)a0;
- (void)navigationListenerStopped:(id)a0;
- (void)stopSharingWith:(id)a0;
- (void)_invalidateSharedTripWithError:(id)a0;
- (void)_restoreLastSession;

@end
