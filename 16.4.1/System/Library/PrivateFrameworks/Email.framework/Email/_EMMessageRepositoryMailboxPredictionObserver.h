@class NSArray, EFCancelationToken, NSString;

@interface _EMMessageRepositoryMailboxPredictionObserver : NSObject <EMMessageRepositoryMailboxPredictionObserver_xpc, EMRecoverableObserver>

@property (readonly, copy, nonatomic) NSArray *messageObjectIDs;
@property (readonly, copy, nonatomic) id /* block */ completionHandler;
@property (readonly, nonatomic) EFCancelationToken *cancelationToken;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)cancel;
- (void)dealloc;
- (void).cxx_destruct;
- (void)_performQueryWithRemoteConnection:(id)a0 forRecovery:(BOOL)a1;
- (id)initWithMessageObjectIDs:(id)a0 completionHandler:(id /* block */)a1;
- (void)mailboxWasPredicted:(id)a0;
- (void)performQueryWithRemoteConnection:(id)a0;
- (void)recoverQueryWithRemoteConnection:(id)a0;

@end
