@interface PPLocationReadWriteServerRequestHandler : NSObject <PPLocationReadWriteServerProtocol>

- (void)clearWithCompletion:(id /* block */)a0;
- (void)cloudSyncWithCompletion:(id /* block */)a0;
- (void)donateLocations:(id)a0 source:(id)a1 contextualNamedEntities:(id)a2 algorithm:(unsigned short)a3 cloudSync:(BOOL)a4 decayRate:(double)a5 completion:(id /* block */)a6;

@end
