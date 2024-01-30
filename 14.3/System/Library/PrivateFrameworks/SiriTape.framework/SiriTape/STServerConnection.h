@interface STServerConnection : STProxyConnection

- (id)initWithSocket:(id)a0 handler:(id)a1 replayFileURL:(id)a2;
- (void)handleAceObject:(id)a0;

@end
