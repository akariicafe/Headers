@class NSOperationQueue, MPModelLibraryAddToPlaylistChangeRequest;

@interface MPModelLibraryAddToPlaylistChangeRequestOperation : MPAsyncOperation {
    NSOperationQueue *_operationQueue;
}

@property (copy, nonatomic) MPModelLibraryAddToPlaylistChangeRequest *request;
@property (copy, nonatomic) id /* block */ responseHandler;

- (void)execute;
- (void)_updateCloudLibraryForPlaylist:(id)a0;
- (void).cxx_destruct;
- (BOOL)_isCloudLibraryEnabled;

@end
