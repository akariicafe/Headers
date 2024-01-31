@class NSString;
@protocol ACRemoteAccountStoreSessionDelegate;

@interface ACAccountStoreClientSideListener : NSObject <ACAccountStoreClientProtocol> {
    id<ACRemoteAccountStoreSessionDelegate> _delegate;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)connectionWasInvalidated;
- (void).cxx_destruct;
- (id)initWithDelegate:(id)a0;
- (void)accountCredentialsDidChangeForAccountWithIdentifier:(id)a0;
- (void)accountDidChange:(id)a0 withChangeType:(int)a1;

@end
