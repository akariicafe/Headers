@class NSError, VUIMediaItemEntityTypesFetchResponse, MPMediaLibrary;

@interface VUIMPMediaItemEntityTypesOperation : VUIAsynchronousOperation

@property (retain, nonatomic) MPMediaLibrary *mediaLibrary;
@property (retain, nonatomic) VUIMediaItemEntityTypesFetchResponse *response;
@property (copy, nonatomic) NSError *error;

- (id)init;
- (void).cxx_destruct;
- (void)executionDidBegin;
- (BOOL)_mediaLibraryHasEpisodes;
- (BOOL)_mediaLibraryHasHasHomeVideos;
- (BOOL)_mediaLibraryHasMovies;
- (BOOL)_mediaLibraryHasMovieRentals;
- (BOOL)_mediaLibraryHasLocalMediaItems;
- (BOOL)_canUseCheapEntityCheckWithMediaEntityType:(id)a0;
- (BOOL)_mediaLibraryHasMediaItemsWithQuery:(id)a0;
- (id)initWithMPMediaLibrary:(id)a0;

@end
