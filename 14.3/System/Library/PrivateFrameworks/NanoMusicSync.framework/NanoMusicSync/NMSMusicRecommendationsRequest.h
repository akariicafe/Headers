@class NSDictionary, NSData;

@interface NMSMusicRecommendationsRequest : NSObject

@property (retain, nonatomic) NSDictionary *unarchivedCombinedResponsesDictionary;
@property (nonatomic) BOOL useCachedDataOnly;
@property (retain, nonatomic) NSData *cachedData;

- (void)_performForYouRequestWithCompletion:(id /* block */)a0;
- (void)_continueToLookupWithContext:(id)a0 queue:(id)a1 responseHandler:(id /* block */)a2;
- (void)performWithResponseHandler:(id /* block */)a0;
- (void)_performLibraryImportChangeRequestWithModelObjects:(id)a0 completion:(id /* block */)a1;
- (id)_unarchivedCombinedResponsesDictionary;
- (void).cxx_destruct;
- (void)_continueToProcessResultsWithContext:(id)a0 queue:(id)a1 responseHandler:(id /* block */)a2;
- (void)_performLookupRequestWithModelObjects:(id)a0 completion:(id /* block */)a1;
- (void)_continueToLibraryRecentMusicRecommedationsWithContext:(id)a0 queue:(id)a1 responseHandler:(id /* block */)a2;
- (void)_finishWithContext:(id)a0 queue:(id)a1 responseHandler:(id /* block */)a2;
- (void)_performLibraryRecentMusicRequestWithCompletion:(id /* block */)a0;
- (void)_continueToEditorialRequestWithContext:(id)a0 queue:(id)a1 responseHandler:(id /* block */)a2;
- (void)_continueToLibraryImportWithContext:(id)a0 queue:(id)a1 responseHandler:(id /* block */)a2;
- (void)_continueToForYouRequestWithContext:(id)a0 queue:(id)a1 responseHandler:(id /* block */)a2;
- (void)_performEditorialBrowseRequestWithCompletion:(id /* block */)a0;

@end
