@class MPModelLibraryAlbumAppDataChangeRequest;

@interface MPModelLibraryAlbumAppDataChangeRequestOperation : MPAsyncOperation

@property (copy, nonatomic) id /* block */ responseHandler;
@property (copy, nonatomic) MPModelLibraryAlbumAppDataChangeRequest *request;

- (void).cxx_destruct;
- (void)execute;

@end
