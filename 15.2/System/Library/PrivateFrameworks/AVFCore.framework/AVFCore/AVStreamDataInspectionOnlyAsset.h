@interface AVStreamDataInspectionOnlyAsset : AVURLAsset

- (BOOL)isPlayable;
- (BOOL)isExportable;
- (BOOL)isReadable;
- (BOOL)isCompatibleWithSavedPhotosAlbum;
- (BOOL)isComposable;
- (BOOL)isCompatibleWithPhotosTranscodingServiceWithOptions:(id)a0;
- (id)initWithFigAsset:(struct OpaqueFigAsset { } *)a0;
- (BOOL)isCompatibleWithAirPlayVideo;

@end
