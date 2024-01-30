@class NSArray, NSPersistentHistoryToken;

@interface PLLibraryScopeTransactionResult : NSObject

@property (readonly, copy) NSPersistentHistoryToken *lastProcessedCoreDataToken;
@property (readonly, copy) NSArray *assetObjectIDs;
@property (readonly, copy) NSArray *detectedFaceObjectIDs;

- (id)initWithToken:(id)a0 assetObjectIDs:(id)a1 detectedFaceObjectIDs:(id)a2;
- (void).cxx_destruct;

@end
