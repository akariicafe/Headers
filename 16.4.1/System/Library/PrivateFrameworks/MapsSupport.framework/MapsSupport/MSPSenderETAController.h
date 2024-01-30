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

- (void)_restoreLastSession;
- (BOOL)_validateNavigationState:(id *)a0;
- (BOOL)startSharingWithGroup:(id)a0 error:(id *)a1;
- (void)_invalidateSharedTripWithError:(id)a0;
- (void)_stopNavigationListener;
- (void)touchedRules;
- (void)navigationListenerStopped:(id)a0;
- (void)_startNavigationListener;
- (void)_updateStorage;
- (void)_sendFinishedToIdentifiers:(id)a0;
- (void)navigationListenerTrafficUpdated:(id)a0;
- (void)groupSessionEnded:(id)a0 withError:(id)a1;
- (void)stopSharing;
- (void)stopSharingWith:(id)a0;
- (void)_createGroupSessionIfNeededWithIdentifier:(id)a0;
- (void)dealloc;
- (void)navigationListenerWaypointsUpdated:(id)a0;
- (void)_cleanObjects;
- (void)navigationListenerRouteUpdated:(id)a0;
- (void)groupSession:(id)a0 participantDidLeave:(id)a1;
- (void)navigationListenerResumed:(id)a0;
- (void)navigationListenerIsReady:(id)a0;
- (BOOL)startSharingWith:(id)a0 error:(id *)a1;
- (void)navigationListenerETAUpdated:(id)a0;
- (BOOL)startSharingWithMessages:(id)a0 error:(id *)a1;
- (id)initWithRelay:(id)a0;
- (void)_startingGroupSession;
- (void)stopSharingWithGroup:(id)a0;
- (void)_invalidateActiveHandles;
- (id)rulesForParticipant:(id)a0;
- (void)navigationListenerArrived:(id)a0;
- (void).cxx_destruct;
- (void)groupSession:(id)a0 participantDidJoin:(id)a1;

@end
