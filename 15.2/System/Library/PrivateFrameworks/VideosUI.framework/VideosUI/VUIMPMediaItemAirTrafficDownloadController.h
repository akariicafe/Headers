@interface VUIMPMediaItemAirTrafficDownloadController : VUIMPMediaItemDownloadController

- (void)_handleMediaLibraryDidChangeNotification:(id)a0;
- (void)dealloc;
- (id)initWithMediaItem:(id)a0 state:(id)a1 serialProcessingDispatchQueue:(id)a2;
- (id)initWithMediaItem:(id)a0 serialProcessingDispatchQueue:(id)a1;
- (BOOL)supportsPausing;
- (BOOL)supportsCancellation;

@end
