@class NSError, VUIMediaItemEntityTypesFetchResponse, MPMediaLibrary;

@interface VUIMPMediaItemEntityTypesOperation : VUIAsynchronousOperation

@property (retain, nonatomic) MPMediaLibrary *mediaLibrary;
@property (retain, nonatomic) VUIMediaItemEntityTypesFetchResponse *response;
@property (copy, nonatomic) NSError *error;

- (void)executionDidBegin;
- (id)init;
- (void).cxx_destruct;
- (BOOL)_mediaLibraryHasLocalMediaItems;
- (BOOL)_canUseCheapEntityCheckWithMediaEntityType:(id)a0;
- (BOOL)_mediaLibraryHasEpisodes;
- (BOOL)_mediaLibraryHasHasHomeVideos;
- (BOOL)_mediaLibraryHasMediaItemsWithQuery:(id)a0;
- (BOOL)_mediaLibraryHasMovieRentals;
- (BOOL)_mediaLibraryHasMovies;
- (id)initWithMPMediaLibrary:(id)a0;

@end
