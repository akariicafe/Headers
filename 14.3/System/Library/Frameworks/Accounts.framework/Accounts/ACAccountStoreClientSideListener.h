@class NSString;
@protocol ACRemoteAccountStoreSessionDelegate;

@interface ACAccountStoreClientSideListener : NSObject <ACAccountStoreClientProtocol> {
    id<ACRemoteAccountStoreSessionDelegate> _delegate;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)accountCredentialsDidChangeForAccountWithIdentifier:(id)a0;
- (void)connectionWasInvalidated;
- (void)accountDidChange:(id)a0 withChangeType:(int)a1;
- (id)initWithDelegate:(id)a0;

@end
