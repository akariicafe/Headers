@class NSOrderedSet, VUIMediaLibrary, NSArray, VUIMediaEntitiesFetchController, NSString;

@interface VUIMPMediaEntitiesDataSource : VUIMediaEntitiesDataSource <VUIMediaEntitiesFetchControllerDelegate> {
    BOOL _shouldPauseAutoFetchingArtworkInfoDictionaries;
}

@property (retain, nonatomic) VUIMediaLibrary *mediaLibrary;
@property (retain, nonatomic) VUIMediaEntitiesFetchController *fetchController;
@property (retain, nonatomic) NSOrderedSet *mediaEntitiesSet;
@property (retain, nonatomic) NSArray *mediaEntitiesToFetch;
@property (nonatomic) struct _NSRange { unsigned long long location; unsigned long long length; } requestedRange;
@property (nonatomic) unsigned long long inFlightArtworkRequests;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (void).cxx_destruct;
- (void)_fetchArtworkInfoIfNecessary;
- (id)_getPurchaseHistoryIdsFromMediaEntities:(id)a0 inRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;
- (void)_loadImageUrlsByPurchaseHistoryIds:(id)a0;
- (void)controller:(id)a0 fetchRequests:(id)a1 didCompleteWithResult:(id)a2;
- (void)controller:(id)a0 fetchRequests:(id)a1 didFailWithError:(id)a2;
- (id)initWithMediaLibrary:(id)a0 fetchRequest:(id)a1;
- (void)setShouldPauseAutoFetchingArtworkInfoDictionaries:(BOOL)a0;
- (BOOL)shouldPauseAutoFetchingArtworkInfoDictionaries;
- (void)startFetch;

@end
