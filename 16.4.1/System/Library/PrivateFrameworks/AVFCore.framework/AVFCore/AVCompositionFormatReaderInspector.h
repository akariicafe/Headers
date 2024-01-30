@interface AVCompositionFormatReaderInspector : AVFormatReaderInspector

- (BOOL)isReadable;
- (BOOL)isPlayable;
- (BOOL)isCompatibleWithPhotosTranscodingServiceWithOptions:(id)a0;
- (BOOL)isExportable;
- (BOOL)isCompatibleWithAirPlayVideo;
- (BOOL)isComposable;
- (BOOL)isCompatibleWithSavedPhotosAlbum;

@end
