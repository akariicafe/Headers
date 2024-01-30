@class APSConnection, NSMutableArray, NSString;

@interface FMAPSHandler : NSObject <APSConnectionDelegate>

@property (retain, nonatomic) APSConnection *apsConnection;
@property (retain, nonatomic) NSMutableArray *registeredDelegates;
@property (retain, nonatomic) NSMutableArray *pendingPushes;
@property (retain, nonatomic) NSString *environmentName;
@property (nonatomic) BOOL registrationsSuspended;
@property (nonatomic) BOOL registerForDarkWake;
@property (readonly, nonatomic) NSString *apsToken;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)constantForEnvironmentString:(id)a0;

- (void)_handleMessage:(id)a0 onTopic:(id)a1;
- (id)init;
- (void)connection:(id)a0 didReceivePublicToken:(id)a1;
- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithEnvironmentName:(id)a0 launchOnDemandPort:(id)a1;
- (void)_setEnabledTopics:(id)a0;
- (void)registerDelegate:(id)a0 forTopic:(id)a1;
- (void)connection:(id)a0 didReceiveMessageForTopic:(id)a1 userInfo:(id)a2;
- (void)deregisterDelegate:(id)a0;
- (void)resumeRegistrations;
- (void)_registrationsWereResumed;
- (id)initWithEnvironmentName:(id)a0;
- (void)suspendRegistrations;
- (void)invalidate;

@end
