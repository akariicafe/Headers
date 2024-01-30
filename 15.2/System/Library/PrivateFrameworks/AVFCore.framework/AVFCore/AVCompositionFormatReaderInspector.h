@interface AVCompositionFormatReaderInspector : AVFormatReaderInspector

- (BOOL)isPlayable;
- (BOOL)isExportable;
- (BOOL)isReadable;
- (BOOL)isCompatibleWithSavedPhotosAlbum;
- (BOOL)isComposable;
- (BOOL)isCompatibleWithPhotosTranscodingServiceWithOptions:(id)a0;
- (BOOL)isCompatibleWithAirPlayVideo;

@end
