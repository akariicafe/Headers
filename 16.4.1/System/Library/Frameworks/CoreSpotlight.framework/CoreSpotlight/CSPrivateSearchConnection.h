@class NSString;

@interface CSPrivateSearchConnection : CSSearchConnection

@property (retain, nonatomic) NSString *token;

+ (id)privateSearchConnectionWithToken:(id)a0;

- (id)initWithToken:(id)a0;
- (id)createXPCDictionaryForQuery:(id)a0 queryID:(long long)a1 queryContext:(id)a2 needsInitialization:(BOOL)a3;
- (void)sendMessageAsync:(id)a0 completion:(id /* block */)a1;
- (void).cxx_destruct;

@end
