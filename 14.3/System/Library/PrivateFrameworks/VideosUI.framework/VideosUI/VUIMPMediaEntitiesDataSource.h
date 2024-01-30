@class NSString, VUIMediaEntitiesFetchController, VUIMediaLibrary;

@interface VUIMPMediaEntitiesDataSource : VUIMediaEntitiesDataSource <VUIMediaEntitiesFetchControllerDelegate>

@property (retain, nonatomic) VUIMediaLibrary *mediaLibrary;
@property (retain, nonatomic) VUIMediaEntitiesFetchController *fetchController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithMediaLibrary:(id)a0 fetchRequest:(id)a1;
- (void)controller:(id)a0 fetchRequests:(id)a1 didCompleteWithResult:(id)a2;
- (void)controller:(id)a0 fetchRequests:(id)a1 didFailWithError:(id)a2;
- (void)startFetch;
- (id)_getPurchaseHistoryIdsFromMediaEntities:(id)a0;
- (void)_loadImageUrlsByPurchaseHistoryIds:(id)a0;

@end
