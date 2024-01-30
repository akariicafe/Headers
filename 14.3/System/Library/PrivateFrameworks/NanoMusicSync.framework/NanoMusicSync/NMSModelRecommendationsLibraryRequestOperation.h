@class NMSModelRecommendationsLibraryRequest;

@interface NMSModelRecommendationsLibraryRequestOperation : MPAsyncOperation

@property (copy, nonatomic) NMSModelRecommendationsLibraryRequest *request;
@property (copy, nonatomic) id /* block */ responseHandler;

- (void).cxx_destruct;
- (void)execute;
- (void)_requestPlaylistsEntries;
- (void)_requestSongs;
- (void)_requestAlbums;
- (void)_requestPlaylists;
- (id)_mpIdentifierSetsFromStringIdentifiers:(id)a0;
- (void)_requestContainerWithClass:(Class)a0;
- (id)_modelObjectWithCachedArtworkFromModelObject:(id)a0;

@end
