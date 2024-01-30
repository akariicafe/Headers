@interface PPQuickTypeServerHandler : NSObject <PPQuickTypeServerProtocol>

- (void)registerFeedback:(id)a0 completion:(id /* block */)a1;
- (void)hibernateWithCompletion:(id /* block */)a0;
- (void)quickTypeItemsWithLanguageModelingTokens:(id)a0 localeIdentifier:(id)a1 recipients:(id)a2 bundleIdentifier:(id)a3 limit:(unsigned long long)a4 completion:(id /* block */)a5;
- (void)recentQuickTypeItemsForRecipients:(id)a0 completion:(id /* block */)a1;
- (void)warmUpWithCompletion:(id /* block */)a0;
- (id)init;
- (void)quickTypeItemsWithQuery:(id)a0 limit:(unsigned long long)a1 completion:(id /* block */)a2;

@end
