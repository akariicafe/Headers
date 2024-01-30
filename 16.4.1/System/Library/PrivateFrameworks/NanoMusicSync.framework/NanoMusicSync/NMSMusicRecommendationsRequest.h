@class NSDictionary, NSData;

@interface NMSMusicRecommendationsRequest : NSObject

@property (retain, nonatomic) NSDictionary *unarchivedCombinedResponsesDictionary;
@property (nonatomic) BOOL useCachedDataOnly;
@property (retain, nonatomic) NSData *cachedData;

+ (id)_recentMusicDirectory;

- (void)_continueToEditorialRequestWithContext:(id)a0 queue:(id)a1 responseHandler:(id /* block */)a2;
- (void)_performEditorialBrowseRequestWithCompletion:(id /* block */)a0;
- (void)_performForYouRequestWithCompletion:(id /* block */)a0;
- (void)_performStarterPackRoomRequestWithURL:(id)a0 completion:(id /* block */)a1;
- (void)_continueToStarterPackMultiplexRequestWithContext:(id)a0 queue:(id)a1 responseHandler:(id /* block */)a2;
- (id)_starterPackRoomCacheURL;
- (id)_heavyRotationCacheURL;
- (id)_starterPackMultiplexCacheURL;
- (void)_performLibraryImportChangeRequestWithModelObjects:(id)a0 completion:(id /* block */)a1;
- (id)_unarchivedCombinedResponsesDictionary;
- (void)_continueToHeavyRotationRequestWithContext:(id)a0 queue:(id)a1 responseHandler:(id /* block */)a2;
- (void)_finishWithContext:(id)a0 queue:(id)a1 responseHandler:(id /* block */)a2;
- (void)_performHeavyRotationRequestWithCompletion:(id /* block */)a0;
- (void)_continueToForYouRequestWithContext:(id)a0 queue:(id)a1 responseHandler:(id /* block */)a2;
- (void)_continueToProcessResultsWithContext:(id)a0 queue:(id)a1 responseHandler:(id /* block */)a2;
- (void)performWithResponseHandler:(id /* block */)a0;
- (void)_continueToLibraryRecentMusicRecommedationsWithContext:(id)a0 queue:(id)a1 responseHandler:(id /* block */)a2;
- (void)_continueToLookupWithContext:(id)a0 queue:(id)a1 responseHandler:(id /* block */)a2;
- (void)_writeData:(id)a0 toURL:(id)a1;
- (void)_performLookupRequestWithModelObjects:(id)a0 completion:(id /* block */)a1;
- (void)_continueToStarterPackRoomRequestWithURL:(id)a0 context:(id)a1 queue:(id)a2 responseHandler:(id /* block */)a3;
- (void)_continueToLibraryImportWithContext:(id)a0 queue:(id)a1 responseHandler:(id /* block */)a2;
- (void)_performLibraryRecentMusicRequestWithCompletion:(id /* block */)a0;
- (void).cxx_destruct;
- (void)_performStarterPackMultiplexRequestWithCompletion:(id /* block */)a0;

@end
