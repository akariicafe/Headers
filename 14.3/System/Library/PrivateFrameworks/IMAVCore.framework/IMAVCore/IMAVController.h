@class NSArray, NSMutableArray;
@protocol IMAVControllerDelegate;

@interface IMAVController : NSObject

@property (retain, nonatomic) NSMutableArray *_delegates;
@property (readonly, nonatomic) BOOL _ready;
@property (readonly, nonatomic) BOOL hasActiveConference;
@property (readonly, nonatomic) BOOL hasRunningConference;
@property (readonly, nonatomic) unsigned int overallChatState;
@property (readonly, nonatomic) BOOL cameraCapable;
@property (readonly, nonatomic) BOOL microphoneCapable;
@property (readonly, nonatomic) BOOL cameraConnected;
@property (readonly, nonatomic) BOOL microphoneConnected;
@property (nonatomic) BOOL blockMultipleIncomingInvitations;
@property (nonatomic) BOOL blockIncomingInvitationsDuringCall;
@property (nonatomic) BOOL blockOutgoingInvitationsDuringCall;
@property (readonly, nonatomic) NSArray *delegates;
@property (nonatomic) id<IMAVControllerDelegate> delegate;

+ (id)sharedInstance;

- (void)addDelegate:(id)a0 queue:(id)a1;
- (void)removeDelegate:(id)a0;
- (void)requestPendingVCInvitations;
- (void)blockOnPendingVCInvitationsWithCapabilities:(long long)a0;
- (void)setIMAVCapabilities:(long long)a0 toCaps:(long long)a1;
- (id)init;
- (void)setHasRunningConference:(BOOL)a0;
- (void).cxx_destruct;
- (void)_receivedPendingVCRequests;
- (void)requestPendingACInvitations;
- (void)setupIMAVController;
- (void)_receivedPendingACRequests;
- (void)_setServiceVCCaps:(unsigned long long)a0 toCaps:(unsigned long long)a1;
- (void)declineVCRequestWithBuddy:(id)a0 response:(unsigned int)a1 vcProps:(id)a2 forAccount:(id)a3 conferenceID:(id)a4;
- (void)setHasActiveConference:(BOOL)a0;
- (BOOL)_shouldRunACConferences;
- (BOOL)_shouldObserveConferences;
- (void)_dumpCaps;
- (void)pushCachedVCCapsToDaemon;
- (void)vcCapabilitiesChanged:(unsigned long long)a0;
- (BOOL)_shouldRunConferences;
- (void)declineVCRequestWithBuddy:(id)a0 response:(unsigned int)a1 vcProps:(id)a2 conferenceID:(id)a3;
- (void)updateActiveConference;
- (void)cancelVCRequestWithBuddy:(id)a0 vcProps:(id)a1 forAccount:(id)a2 conferenceID:(id)a3 reason:(id)a4;
- (id)vcResponseInfoWithSessionID:(unsigned int)a0;

@end
