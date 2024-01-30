@interface IMAudioSessionController_iOS : IMAudioSessionController

- (void)setActive:(BOOL)a0;
- (void)dealloc;
- (id)init;
- (void)audioSessionInterruption:(id)a0;
- (void)audioSessionMediaServicesWereLost:(id)a0;
- (void)audioSessionMediaServicesWereReset:(id)a0;
- (void)audioSessionRouteChange:(id)a0;
- (void)configureAudioSessionWithOptions:(unsigned long long)a0;

@end
