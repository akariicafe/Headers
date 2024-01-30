@class NSString, NSDate, DATaskManager, NSObject;
@protocol OS_ldap_connection;

@interface LDAPTask : DADisableableObject <DATask>

@property (weak, nonatomic) DATaskManager *taskManager;
@property (weak, nonatomic) id delegate;
@property (retain, nonatomic) NSObject<OS_ldap_connection> *ldConnection;
@property (retain, nonatomic) NSDate *dateConnectionWentOut;
@property (nonatomic) BOOL isFinished;
@property (readonly, nonatomic) int numDownloadedElements;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)disable;
- (void)finishWithError:(id)a0;
- (void).cxx_destruct;
- (void)initializeConnection;
- (void)performTask;
- (void)dealloc;
- (void)_performQuery;
- (void)cancelTaskWithReason:(int)a0 underlyingError:(id)a1;
- (BOOL)shouldHoldPowerAssertion;
- (void)reportStatusWithError:(id)a0;
- (long long)taskStatusForError:(id)a0;
- (id)daLevelErrorForLDAPError:(int)a0;

@end
