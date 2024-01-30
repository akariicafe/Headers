@class NSObject, IDSCKDatabase;
@protocol OS_dispatch_queue;

@interface IDSCloudKitKeyElectionStore : NSObject

@property (retain, nonatomic) IDSCKDatabase *database;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;

+ (BOOL)isItemNotFoundError:(id)a0;

- (void).cxx_destruct;
- (id)_recordID;
- (id)_itemFromRecord:(id)a0 error:(id *)a1;
- (id)_recordFromItem:(id)a0;
- (void)fetchAccountIdentityItemWithCompletion:(id /* block */)a0;
- (id)initWithDatabase:(id)a0 queue:(id)a1;
- (void)removeAccountIdentityItemWithCompletion:(id /* block */)a0;
- (void)storeAccountIdentityItem:(id)a0 withCompletion:(id /* block */)a1;

@end
