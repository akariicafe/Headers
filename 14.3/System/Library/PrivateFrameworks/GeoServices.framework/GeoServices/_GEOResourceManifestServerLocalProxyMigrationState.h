@class NSString, NSArray;
@protocol NSObject;

@interface _GEOResourceManifestServerLocalProxyMigrationState : NSObject {
    id<NSObject> _transaction;
}

@property (readonly, nonatomic) NSString *loadingTileGroupUniqueIdentifier;
@property (copy, nonatomic) NSArray *pendingTileGroupMigrationTasks;

- (id)init;
- (void).cxx_destruct;
- (id)initWithTileGroupUniqueIdentifier:(id)a0 transactionName:(id)a1;

@end
