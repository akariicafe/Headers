@interface AudioComponentRegistrarClient : NSObject <AudioComponentRegistrarCallbackProtocol>

- (void)registrationsChanged:(id)a0 includesExtensions:(BOOL)a1 fsHash:(id)a2;

@end
