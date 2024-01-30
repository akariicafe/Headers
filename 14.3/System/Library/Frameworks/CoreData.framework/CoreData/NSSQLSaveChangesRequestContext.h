@class NSString, NSArray, NSSaveChangesRequest, NSSet, NSMutableDictionary, NSDictionary, NSSQLRowCache, NSFaultHandler, NSSQLSavePlan, NSSQLModel;

@interface NSSQLSaveChangesRequestContext : NSSQLStoreRequestContext {
    NSArray *_objectIDsInsertUpdatedToPruneDATrigger;
    NSArray *_objectIDsUpdatedToPruneDATrigger;
    NSSet *_objectIDsToPruneTrigger;
    NSMutableDictionary *_updateMasksForHistoryTracking;
    NSSQLRowCache *_primaryRowCache;
    NSSQLRowCache *_contextGenerationRowCache;
}

@property (readonly, nonatomic) NSDictionary *metadataToWrite;
@property (readonly, nonatomic) NSSQLSavePlan *savePlan;
@property (readonly, nonatomic) NSSQLModel *model;
@property (readonly, nonatomic) NSSaveChangesRequest *request;
@property (readonly, nonatomic) NSFaultHandler *faultHandler;
@property (readonly, nonatomic) NSMutableDictionary *originalCachedRows;
@property (readonly, nonatomic) NSString *externalDataReferencesDirectory;
@property (readonly, nonatomic) NSString *externalDataLinksDirectory;
@property (readonly, nonatomic) NSString *fileBackedFuturesDirectory;

- (id)dataMaskForKey:(id)a0;
- (void)setOriginalRow:(id)a0 forObjectID:(id)a1;
- (void)executePrologue;
- (void)executeEpilogue;
- (void)dealloc;
- (id)contextRowCache;
- (void)addDataMask:(id)a0 forEntityKey:(id)a1;
- (id)rowCache;
- (BOOL)executeRequestCore:(id *)a0;
- (id)initWithRequest:(id)a0 context:(id)a1 sqlCore:(id)a2;
- (BOOL)isWritingRequest;
- (id)originalRowForObjectID:(id)a0;
- (BOOL)hasChangesForWriting;

@end
