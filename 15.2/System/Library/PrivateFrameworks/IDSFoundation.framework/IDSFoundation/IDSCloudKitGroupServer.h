@class IDSCKDatabase, NSObject;
@protocol OS_dispatch_queue;

@interface IDSCloudKitGroupServer : NSObject

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (retain, nonatomic) IDSCKDatabase *database;

- (id)initWithDatabase:(id)a0 queue:(id)a1;
- (void)q_groupFromRecord:(id)a0 inContext:(id)a1 completion:(id /* block */)a2;
- (void)saveGroup:(id)a0 inContext:(id)a1 completion:(id /* block */)a2;
- (void)fetchGroupWithID:(id)a0 inContext:(id)a1 completion:(id /* block */)a2;
- (void)fetchGroupsWithStableGroupID:(id)a0 inContext:(id)a1 completion:(id /* block */)a2;
- (void).cxx_destruct;

@end
