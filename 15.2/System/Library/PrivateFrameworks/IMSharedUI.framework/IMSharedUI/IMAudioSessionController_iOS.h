@interface IMAudioSessionController_iOS : IMAudioSessionController

- (id)init;
- (void)audioSessionRouteChange:(id)a0;
- (void)audioSessionMediaServicesWereLost:(id)a0;
- (void)dealloc;
- (void)audioSessionMediaServicesWereReset:(id)a0;
- (void)configureAudioSessionWithOptions:(unsigned long long)a0;
- (void)audioSessionInterruption:(id)a0;
- (void)setActive:(BOOL)a0;

@end
