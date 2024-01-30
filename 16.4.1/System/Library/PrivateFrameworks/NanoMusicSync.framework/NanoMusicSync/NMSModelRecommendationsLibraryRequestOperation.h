@class NMSModelRecommendationsLibraryRequest;

@interface NMSModelRecommendationsLibraryRequestOperation : MPAsyncOperation

@property (copy, nonatomic) NMSModelRecommendationsLibraryRequest *request;
@property (copy, nonatomic) id /* block */ responseHandler;

- (void)execute;
- (void).cxx_destruct;
- (id)_modelObjectWithCachedArtworkFromModelObject:(id)a0;
- (id)_mpIdentifierSetsFromStringIdentifiers:(id)a0;
- (void)_requestAlbums;
- (void)_requestContainerWithClass:(Class)a0;
- (void)_requestPlaylists;
- (void)_requestPlaylistsEntries;
- (void)_requestSongs;

@end
