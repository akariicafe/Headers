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

- (void)removeDelegate:(id)a0;
- (void)addDelegate:(id)a0 queue:(id)a1;
- (void)setIMAVCapabilities:(long long)a0 toCaps:(long long)a1;
- (void)setHasRunningConference:(BOOL)a0;
- (void)blockOnPendingVCInvitationsWithCapabilities:(long long)a0;
- (void)_dumpCaps;
- (void)pushCachedVCCapsToDaemon;
- (void)_setServiceVCCaps:(unsigned long long)a0 toCaps:(unsigned long long)a1;
- (void)requestPendingACInvitations;
- (void)setHasActiveConference:(BOOL)a0;
- (void)_receivedPendingACRequests;
- (void)cancelVCRequestWithBuddy:(id)a0 vcProps:(id)a1 forAccount:(id)a2 conferenceID:(id)a3 reason:(id)a4;
- (void)vcCapabilitiesChanged:(unsigned long long)a0;
- (id)vcResponseInfoWithSessionID:(unsigned int)a0;
- (BOOL)_shouldObserveConferences;
- (void).cxx_destruct;
- (id)init;
- (BOOL)_shouldRunACConferences;
- (void)updateActiveConference;
- (void)declineVCRequestWithBuddy:(id)a0 response:(unsigned int)a1 vcProps:(id)a2 conferenceID:(id)a3;
- (void)setupIMAVController;
- (BOOL)_shouldRunConferences;
- (void)_receivedPendingVCRequests;
- (void)requestPendingVCInvitations;
- (void)declineVCRequestWithBuddy:(id)a0 response:(unsigned int)a1 vcProps:(id)a2 forAccount:(id)a3 conferenceID:(id)a4;

@end
