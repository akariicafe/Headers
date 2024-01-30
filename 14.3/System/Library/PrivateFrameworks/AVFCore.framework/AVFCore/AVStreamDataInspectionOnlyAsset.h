@interface AVStreamDataInspectionOnlyAsset : AVURLAsset

- (BOOL)isCompatibleWithPhotosTranscodingServiceWithOptions:(id)a0;
- (id)initWithFigAsset:(struct OpaqueFigAsset { } *)a0;
- (BOOL)isReadable;
- (BOOL)isComposable;
- (BOOL)isExportable;
- (BOOL)isCompatibleWithAirPlayVideo;
- (BOOL)isCompatibleWithSavedPhotosAlbum;
- (BOOL)isPlayable;

@end
