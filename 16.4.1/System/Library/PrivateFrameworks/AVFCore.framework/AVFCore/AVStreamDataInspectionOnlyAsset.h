@interface AVStreamDataInspectionOnlyAsset : AVURLAsset

- (BOOL)isReadable;
- (BOOL)isPlayable;
- (BOOL)isCompatibleWithPhotosTranscodingServiceWithOptions:(id)a0;
- (id)initWithFigAsset:(struct OpaqueFigAsset { } *)a0;
- (BOOL)isExportable;
- (BOOL)isCompatibleWithAirPlayVideo;
- (BOOL)isComposable;
- (BOOL)isCompatibleWithSavedPhotosAlbum;

@end
