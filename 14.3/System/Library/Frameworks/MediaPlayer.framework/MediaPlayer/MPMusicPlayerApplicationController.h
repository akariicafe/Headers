@class NSXPCConnection;

@interface MPMusicPlayerApplicationController : MPMusicPlayerController

@property (readonly, nonatomic) NSXPCConnection *serviceConnection;

- (void).cxx_destruct;
- (void)dealloc;
- (void)beginPlaybackAtHostTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0;
- (void)prerollWithCompletion:(id /* block */)a0;
- (void)beginGeneratingPlaybackNotifications;
- (void)endGeneratingPlaybackNotifications;
- (void)_establishConnectionIfNeeded;
- (void)onApplicationServerAsync:(id /* block */)a0;
- (void)performQueueTransaction:(id /* block */)a0 completionHandler:(id /* block */)a1;
- (void)_clearConnection;

@end
