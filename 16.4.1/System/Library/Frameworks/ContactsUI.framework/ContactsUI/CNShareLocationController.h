@class CNUIIDSAvailabilityProvider, NSSet, FMFSession, CNFuture, CNContact, NSObject, NSString;
@protocol CNSchedulerProvider, CNShareLocationProtocol, CNCancelable;

@interface CNShareLocationController : NSObject <FMFSessionDelegate>

@property (retain, nonatomic) FMFSession *fmfSession;
@property (retain, nonatomic) NSSet *handles;
@property (readonly, nonatomic) CNUIIDSAvailabilityProvider *idsAvailabilityProvider;
@property (retain, nonatomic) id<CNCancelable> bestPropertyCancelable;
@property (retain, nonatomic) CNFuture *bestPropertyFuture;
@property (readonly, nonatomic) id<CNSchedulerProvider> schedulerProvider;
@property (retain, nonatomic) CNContact *contact;
@property (readonly, nonatomic) BOOL canShare;
@property (readonly, nonatomic) BOOL isSharing;
@property (weak, nonatomic) NSObject<CNShareLocationProtocol> *shareLocationDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)fmfHandlesFromContact:(id)a0;
+ (id)fmfHandleFromContactProperty:(id)a0;

- (void)perform:(id)a0;
- (void).cxx_destruct;
- (id /* block */)actionsMenuProvider;
- (id)callerID:(id *)a0;
- (id)callerIDFuture;
- (id)endOfDayDate;
- (id)initWithIDSAvailabilityProvider:(id)a0;
- (id)initWithIDSAvailabilityProvider:(id)a0 fmfSession:(id)a1 schedulerProvider:(id)a2;
- (void)initiateIDSRequest;
- (void)notifySharingStatusDidChange;
- (void)shareLocationUntilEndDate:(id)a0;
- (void)stopSharingLocation;

@end
