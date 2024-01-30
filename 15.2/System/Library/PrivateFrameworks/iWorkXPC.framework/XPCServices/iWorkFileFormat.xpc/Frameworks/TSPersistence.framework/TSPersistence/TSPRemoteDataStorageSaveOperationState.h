@protocol TSPDataStorage;

@interface TSPRemoteDataStorageSaveOperationState : NSObject

@property (readonly, nonatomic) id<TSPDataStorage> packageDataStorage;
@property (readonly, nonatomic) unsigned long long changeCount;

- (void).cxx_destruct;
- (id)initWithChangeCount:(unsigned long long)a0 packageDataStorage:(id)a1;

@end
