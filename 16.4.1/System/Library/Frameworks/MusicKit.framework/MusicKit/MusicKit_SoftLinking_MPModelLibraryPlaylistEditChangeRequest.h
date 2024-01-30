@class MusicKit_SoftLinking_MPMediaLibrary, MPModelLibraryPlaylistEditChangeRequest;

@interface MusicKit_SoftLinking_MPModelLibraryPlaylistEditChangeRequest : NSObject {
    MPModelLibraryPlaylistEditChangeRequest *_underlyingRequest;
    MusicKit_SoftLinking_MPMediaLibrary *_mediaLibrary;
}

- (void).cxx_destruct;
- (id)initWithPlaylist:(id)a0 playlistEntries:(id)a1 playlistName:(id)a2 playlistDescription:(id)a3 authorDisplayName:(id)a4;
- (id)initWithPlaylistEntries:(id)a0 playlistName:(id)a1 playlistDescription:(id)a2 authorDisplayName:(id)a3;
- (void)sdk_performWithCompletionHandler:(id /* block */)a0;

@end
