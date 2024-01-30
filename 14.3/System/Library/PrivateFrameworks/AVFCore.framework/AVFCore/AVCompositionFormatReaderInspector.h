@interface AVCompositionFormatReaderInspector : AVFormatReaderInspector

- (BOOL)isCompatibleWithPhotosTranscodingServiceWithOptions:(id)a0;
- (BOOL)isReadable;
- (BOOL)isComposable;
- (BOOL)isExportable;
- (BOOL)isCompatibleWithAirPlayVideo;
- (BOOL)isCompatibleWithSavedPhotosAlbum;
- (BOOL)isPlayable;

@end
