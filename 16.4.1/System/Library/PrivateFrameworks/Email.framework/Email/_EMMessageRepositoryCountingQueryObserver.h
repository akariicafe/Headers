@class EFPair, NSString, EFQuery, EMMessageRepository, EMMailboxScope, EFCancelationToken;
@protocol EMMessageRepositoryCountQueryObserver;

@interface _EMMessageRepositoryCountingQueryObserver : NSObject <EMMessageRepositoryCountQueryObserver_xpc, EMRecoverableObserver> {
    EMMessageRepository *_repository;
    EFQuery *_query;
    EMMailboxScope *_serverCountMailboxScope;
    id<EMMessageRepositoryCountQueryObserver> _observer;
    EFCancelationToken *_token;
}

@property (readonly) EFPair *queryIdentifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)cancel;
- (void)dealloc;
- (void).cxx_destruct;
- (void)_performQueryWithRemoteConnection:(id)a0 forRecovery:(BOOL)a1;
- (void)countDidChange:(long long)a0 acknowledgementToken:(id)a1;
- (id)initWithRepository:(id)a0 queryIdentifier:(id)a1 includingServerCountsForMailboxScope:(id)a2 observer:(id)a3;
- (void)performQueryWithRemoteConnection:(id)a0;
- (void)recoverQueryWithRemoteConnection:(id)a0;

@end
