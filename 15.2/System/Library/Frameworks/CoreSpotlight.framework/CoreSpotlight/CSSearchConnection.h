@class NSMutableDictionary;

@interface CSSearchConnection : CSXPCConnection

@property (retain, nonatomic) NSMutableDictionary *queries;
@property (readonly, nonatomic) BOOL previouslyInitialized;

+ (id)sharedCSUserFSConnection;
+ (id)sharedSearchConnection;

- (void)cancelQuery:(unsigned long long)a0;
- (id)initWithMachServiceName:(id)a0;
- (void)handleError:(id)a0;
- (id)removeQueryForID:(id)a0;
- (void)preheat:(id)a0;
- (void)handleReply:(id)a0;
- (id)queryForID:(id)a0;
- (void)sendMessageAsync:(id)a0 completion:(id /* block */)a1;
- (void).cxx_destruct;
- (id)createXPCDictionaryForQuery:(id)a0 queryID:(long long)a1 queryContext:(id)a2 needsInitialization:(BOOL)a3;
- (id)init;
- (void)startQuery:(id)a0 context:(id)a1;
- (void)setQuery:(id)a0 forID:(id)a1;

@end
