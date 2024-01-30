@class MPModelLibraryPlaylistEditChangeRequest;

@interface MusicKitInternal_SoftLinking_MPModelLibraryPlaylistEditChangeRequest : NSObject {
    MPModelLibraryPlaylistEditChangeRequest *_underlyingRequest;
}

- (void).cxx_destruct;
- (void)performWithCompletionHandler:(id /* block */)a0;
- (void)_performWithRequest:(id)a0 completionHandler:(id /* block */)a1;
- (id)initWithParentPlaylist:(id)a0 playlistEntries:(id)a1 playlistName:(id)a2 playlistDescription:(id)a3 playlistUserImage:(struct CGImage { } *)a4 publicPlaylist:(id)a5 visiblePlaylist:(id)a6 authorStoreIdentifier:(id)a7;
- (id)initWithPlaylist:(id)a0 playlistEntries:(id)a1 playlistName:(id)a2 playlistDescription:(id)a3 playlistUserImage:(struct CGImage { } *)a4 publicPlaylist:(id)a5 visiblePlaylist:(id)a6 authorStoreIdentifier:(id)a7;

@end
