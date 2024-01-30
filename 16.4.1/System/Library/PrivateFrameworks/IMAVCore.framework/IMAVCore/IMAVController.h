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

- (void)declineVCRequestWithBuddy:(id)a0 response:(unsigned int)a1 vcProps:(id)a2 forAccount:(id)a3 conferenceID:(id)a4;
- (void)blockOnPendingVCInvitationsWithCapabilities:(long long)a0;
- (id)vcResponseInfoWithSessionID:(unsigned int)a0;
- (void)pushCachedVCCapsToDaemon;
- (void)addDelegate:(id)a0 queue:(id)a1;
- (void)requestPendingACInvitations;
- (void)vcCapabilitiesChanged:(unsigned long long)a0;
- (BOOL)_shouldObserveConferences;
- (void)_dumpCaps;
- (void)setHasRunningConference:(BOOL)a0;
- (void)_setServiceVCCaps:(unsigned long long)a0 toCaps:(unsigned long long)a1;
- (void)requestPendingVCInvitations;
- (void)setHasActiveConference:(BOOL)a0;
- (void)declineVCRequestWithBuddy:(id)a0 response:(unsigned int)a1 vcProps:(id)a2 conferenceID:(id)a3;
- (void)setupIMAVController;
- (void)setIMAVCapabilities:(long long)a0 toCaps:(long long)a1;
- (void)updateActiveConference;
- (id)init;
- (BOOL)_shouldRunConferences;
- (void)removeDelegate:(id)a0;
- (void)_receivedPendingVCRequests;
- (BOOL)_shouldRunACConferences;
- (void)_receivedPendingACRequests;
- (void)cancelVCRequestWithBuddy:(id)a0 vcProps:(id)a1 forAccount:(id)a2 conferenceID:(id)a3 reason:(id)a4;
- (void).cxx_destruct;

@end
