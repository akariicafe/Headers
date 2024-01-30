@class NSString, NSMutableArray;
@protocol CPXPCConnection;

@interface CPIndex : NSObject <CPIndex>

@property (copy, nonatomic) NSString *name;
@property (copy, nonatomic) NSString *protectionClass;
@property (retain, nonatomic) NSMutableArray *batchedItemsToIndex;
@property (retain, nonatomic) NSMutableArray *batchedItemIdentifiersToDelete;
@property (nonatomic) BOOL batchOpen;
@property (nonatomic) BOOL noBatching;
@property (retain, nonatomic) id<CPXPCConnection> connection;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)signpostLog;
+ (id)log;

- (void)beginIndexBatch;
- (void)endIndexBatchWithClientState:(id)a0 completionHandler:(id /* block */)a1;
- (void)fetchLastClientStateWithCompletionHandler:(id /* block */)a0;
- (void).cxx_destruct;
- (void)indexItems:(id)a0 completionHandler:(id /* block */)a1;
- (void)deleteItemsWithIdentifiers:(id)a0 completionHandler:(id /* block */)a1;
- (void)deleteItemsWithDomainIdentifiers:(id)a0 completionHandler:(id /* block */)a1;
- (void)deleteAllItemsWithCompletionHandler:(id /* block */)a0;
- (id)initWithName:(id)a0 protectionClass:(id)a1 disableBatching:(BOOL)a2 connection:(id)a3;

@end
