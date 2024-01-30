@class NSXPCConnection;

@interface FHPaymentRingSuggestionController : NSObject

@property (retain, nonatomic) NSXPCConnection *connection;

- (id)clientConnection;
- (void).cxx_destruct;
- (void)generatePaymentRingSuggestion:(id)a0 completion:(id /* block */)a1;

@end
