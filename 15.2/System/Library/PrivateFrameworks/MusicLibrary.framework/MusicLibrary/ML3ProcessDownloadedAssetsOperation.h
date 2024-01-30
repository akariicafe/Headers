@interface ML3ProcessDownloadedAssetsOperation : ML3DatabaseOperation

- (unsigned long long)type;
- (BOOL)_execute:(id *)a0;
- (id)initWithLibrary:(id)a0 writer:(id)a1;
- (BOOL)_processTrackAsset:(id)a0 forSource:(int)a1 withError:(id *)a2;
- (BOOL)_processContainerAsset:(id)a0 forSource:(int)a1 withError:(id *)a2;
- (BOOL)_processArtworkIdentifier:(id)a0 artworkToken:(id)a1 artworkType:(long long)a2 mediaType:(unsigned int)a3 sourceType:(long long)a4;
- (double)_videoSnapshotTimeForMediaType:(unsigned int)a0;
- (BOOL)_processGeniusPlist:(id)a0 geniusIDString:(id)a1 geniusChecksum:(long long)a2;
- (long long)_artworkSourceFromTrackSource:(int)a0;

@end
