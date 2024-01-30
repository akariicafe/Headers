@class NSDictionary, NSData;

@interface NMSMusicRecommendationsRequest : NSObject

@property (retain, nonatomic) NSDictionary *unarchivedCombinedResponsesDictionary;
@property (nonatomic) BOOL useCachedDataOnly;
@property (retain, nonatomic) NSData *cachedData;

+ (id)_recentMusicDirectory;

- (id)_unarchivedCombinedResponsesDictionary;
- (void)_continueToHeavyRotationRequestWithContext:(id)a0 queue:(id)a1 responseHandler:(id /* block */)a2;
- (void)_performStarterPackRoomRequestWithURL:(id)a0 completion:(id /* block */)a1;
- (void)_continueToEditorialRequestWithContext:(id)a0 queue:(id)a1 responseHandler:(id /* block */)a2;
- (void)_performLookupRequestWithModelObjects:(id)a0 completion:(id /* block */)a1;
- (void)_continueToLibraryImportWithContext:(id)a0 queue:(id)a1 responseHandler:(id /* block */)a2;
- (void)_finishWithContext:(id)a0 queue:(id)a1 responseHandler:(id /* block */)a2;
- (void)_continueToStarterPackRoomRequestWithURL:(id)a0 context:(id)a1 queue:(id)a2 responseHandler:(id /* block */)a3;
- (id)_starterPackMultiplexCacheURL;
- (void)_performForYouRequestWithCompletion:(id /* block */)a0;
- (void)_performLibraryRecentMusicRequestWithCompletion:(id /* block */)a0;
- (void)_performEditorialBrowseRequestWithCompletion:(id /* block */)a0;
- (id)_starterPackRoomCacheURL;
- (void)_continueToStarterPackMultiplexRequestWithContext:(id)a0 queue:(id)a1 responseHandler:(id /* block */)a2;
- (void)_writeData:(id)a0 toURL:(id)a1;
- (void)_continueToForYouRequestWithContext:(id)a0 queue:(id)a1 responseHandler:(id /* block */)a2;
- (void).cxx_destruct;
- (void)_continueToProcessResultsWithContext:(id)a0 queue:(id)a1 responseHandler:(id /* block */)a2;
- (id)_heavyRotationCacheURL;
- (void)performWithResponseHandler:(id /* block */)a0;
- (void)_performHeavyRotationRequestWithCompletion:(id /* block */)a0;
- (void)_performStarterPackMultiplexRequestWithCompletion:(id /* block */)a0;
- (void)_continueToLookupWithContext:(id)a0 queue:(id)a1 responseHandler:(id /* block */)a2;
- (void)_performLibraryImportChangeRequestWithModelObjects:(id)a0 completion:(id /* block */)a1;
- (void)_continueToLibraryRecentMusicRecommedationsWithContext:(id)a0 queue:(id)a1 responseHandler:(id /* block */)a2;

@end
