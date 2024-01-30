@class ML3StoreItemPlaylistData, ML3StoreItemArtistData, ML3StoreItemTrackData;

@interface ML3StoreImportOperation : ML3ImportOperation {
    ML3StoreItemTrackData *_trackData;
    ML3StoreItemPlaylistData *_playlistData;
    ML3StoreItemArtistData *_artistData;
}

- (void)main;
- (void).cxx_destruct;
- (unsigned long long)importSource;
- (BOOL)_importArtistsUsingImportSession:(void *)a0;
- (BOOL)_importPlaylistsUsingImportSession:(void *)a0;
- (BOOL)_importTracksUsingImportSession:(void *)a0;
- (BOOL)_performImportWithTransaction:(id)a0;

@end
