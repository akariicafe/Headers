@interface VUIMPMediaItemAirTrafficDownloadController : VUIMPMediaItemDownloadController

- (void)dealloc;
- (void)_handleMediaLibraryDidChangeNotification:(id)a0;
- (id)initWithMediaItem:(id)a0 serialProcessingDispatchQueue:(id)a1;
- (BOOL)supportsCancellation;
- (BOOL)supportsPausing;
- (id)initWithMediaItem:(id)a0 state:(id)a1 serialProcessingDispatchQueue:(id)a2;

@end
