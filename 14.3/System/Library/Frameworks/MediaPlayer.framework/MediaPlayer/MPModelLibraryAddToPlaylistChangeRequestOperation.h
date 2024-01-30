@class NSOperationQueue, MPModelLibraryAddToPlaylistChangeRequest;

@interface MPModelLibraryAddToPlaylistChangeRequestOperation : MPAsyncOperation {
    NSOperationQueue *_operationQueue;
}

@property (copy, nonatomic) MPModelLibraryAddToPlaylistChangeRequest *request;
@property (copy, nonatomic) id /* block */ responseHandler;

- (void).cxx_destruct;
- (void)execute;
- (BOOL)_isCloudLibraryEnabled;
- (void)_updateCloudLibraryForPlaylist:(id)a0;

@end
