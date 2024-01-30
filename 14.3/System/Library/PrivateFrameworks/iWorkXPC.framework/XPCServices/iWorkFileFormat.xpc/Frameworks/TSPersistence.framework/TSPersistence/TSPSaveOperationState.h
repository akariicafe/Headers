@class NSMapTable, NSHashTable;

@interface TSPSaveOperationState : NSObject {
    NSMapTable *_newDataStorages;
    NSHashTable *_remoteData;
}

@property (readonly, nonatomic) BOOL shouldUpdate;
@property (readonly, nonatomic) BOOL isSavingCurrentDocument;
@property (readonly, nonatomic) BOOL inheritAttributes;
@property (readonly, nonatomic) long long updateType;
@property (readonly, nonatomic) BOOL hasRemoteData;
@property (nonatomic) int sampleID;

- (id)init;
- (void).cxx_destruct;
- (id)initWithUpdateType:(long long)a0;
- (BOOL)hasNewStorageForData:(id)a0;
- (void)addNewStorage:(id)a0 forData:(id)a1;
- (void)enumerateDatasAndStoragesUsingBlock:(id /* block */)a0;
- (void)addRemoteData:(id)a0;

@end
