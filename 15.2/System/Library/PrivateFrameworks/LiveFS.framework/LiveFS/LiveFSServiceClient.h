@class NSMutableDictionary, NSMapTable;

@interface LiveFSServiceClient : NSObject <NSFileProviderLiveItemClientCore>

@property (retain) NSMutableDictionary *searchResultsBlocks;
@property (retain) NSMutableDictionary *searchCompletionBlocks;
@property (retain) NSMapTable *updateHandlers;

+ (id)exportedClientInterface;

- (void).cxx_destruct;
- (id)init;
- (void)connectionWasInvalidated;
- (void)LISearchResult:(id)a0 paths:(id)a1 attributes:(id)a2 attributeSize:(unsigned int)a3 xAttrs:(id)a4 resumePath:(id)a5;
- (void)LISearchTokenDone:(id)a0 result:(int)a1;
- (void)LIUpdateUpdatedItem:(id)a0 name:(id)a1 interestedItem:(id)a2;
- (void)LIUpdateUpdatedName:(id)a0 interestedItem:(id)a1;
- (void)LIUpdateDeletedItem:(id)a0 name:(id)a1 how:(int)a2 interestedItem:(id)a3;
- (void)LIUpdateDeletedName:(id)a0 item:(id)a1 how:(int)a2 interestedItem:(id)a3;
- (void)LIUpdateRenameFrom:(id)a0 fromName:(id)a1 fromID:(id)a2 intoItem:(id)a3 toName:(id)a4 overID:(id)a5;
- (void)LIUpdateVolumeWideUpdatedName:(id)a0 interestedItem:(id)a1;
- (void)LIUpdateVolumeWideDeletedName:(id)a0 interestedItem:(id)a1;
- (void)LIUpdateHistoryResetItem:(id)a0 interestedItem:(id)a1;
- (void)LIUpdateHistoryResetName:(id)a0 interestedItem:(id)a1;
- (void)LIUpdateDone:(id)a0;
- (void)connectionWasInterupted;
- (int)LISCAddSearchHandlers:(id)a0 resultHandler:(id /* block */)a1 completionHandler:(id /* block */)a2;
- (void)LISCDropSearchHandlers:(id)a0;
- (int)LISCAddUpdateHandler:(id)a0 forInterestedItem:(id)a1;
- (void)LISCDropUpdateHandlerForInterestedItem:(id)a0;

@end
