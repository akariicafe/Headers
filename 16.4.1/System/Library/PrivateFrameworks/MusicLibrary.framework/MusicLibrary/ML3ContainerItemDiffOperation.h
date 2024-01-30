@class NSArray, ML3DatabaseConnection;

@interface ML3ContainerItemDiffOperation : NSOperation {
    long long _containerPersistentID;
    NSArray *_updatedItemsPersistentIDs;
    ML3DatabaseConnection *_connection;
}

@property (retain, nonatomic) NSArray *containerItemsToUpdate;
@property (retain, nonatomic) NSArray *containerItemsToDelete;

- (void)main;
- (void).cxx_destruct;
- (id)initWithContainerPersistentID:(long long)a0 updatedItemsPersistentIDs:(id)a1 connection:(id)a2;

@end
