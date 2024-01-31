@class CNUIIDSAvailabilityProvider, NSSet, CNFuture, CNContact, NSObject, _TtC10ContactsUI19FindMyLocateSession;
@protocol CNCancelable, CNShareLocationProtocol, CNSchedulerProvider, OS_dispatch_queue;

@interface CNShareLocationController : NSObject

@property (retain, nonatomic) _TtC10ContactsUI19FindMyLocateSession *findMyLocateSession;
@property (retain, nonatomic) NSSet *handles;
@property (readonly, nonatomic) CNUIIDSAvailabilityProvider *idsAvailabilityProvider;
@property (retain, nonatomic) id<CNCancelable> bestPropertyCancelable;
@property (retain, nonatomic) CNFuture *bestPropertyFuture;
@property (readonly, nonatomic) id<CNSchedulerProvider> schedulerProvider;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *serialQueue;
@property (retain, nonatomic) CNContact *contact;
@property (weak, nonatomic) NSObject<CNShareLocationProtocol> *shareLocationDelegate;

+ (BOOL)findMyFunctionalityAvailable;
+ (id)fmlHandleFromContactProperty:(id)a0;
+ (id)fmlHandlesFromContact:(id)a0;

- (void)perform:(id)a0;
- (void).cxx_destruct;
- (void)actionsMenuProviderWithCompletion:(id /* block */)a0;
- (void)canShareWithCompletion:(id /* block */)a0;
- (id)endOfDayDate;
- (void)friendshipStateWithCompletion:(id /* block */)a0;
- (id)initWithIDSAvailabilityProvider:(id)a0;
- (id)initWithIDSAvailabilityProvider:(id)a0 fmlSession:(id)a1 schedulerProvider:(id)a2;
- (void)initiateIDSRequest;
- (void)isSharingWithCompletion:(id /* block */)a0;
- (void)notifySharingStatusDidChange;
- (void)shareLocationWithExpiration:(long long)a0;
- (void)startUpdatingFriends;
- (void)stopSharingLocation;
- (void)stopUpdatingFriends;

@end
