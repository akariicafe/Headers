@interface FlexSongProxy : FlexSongBackend

- (BOOL)canPlay;
- (id)initWithUID:(id)a0 songName:(id)a1 artistName:(id)a2 tagIDs:(id)a3 keywords:(id)a4 hidden:(BOOL)a5 recalled:(BOOL)a6 assets:(id)a7 audioEncoderPresetName:(id)a8 metadataVersion:(long long)a9 songFormat:(id)a10;

@end
