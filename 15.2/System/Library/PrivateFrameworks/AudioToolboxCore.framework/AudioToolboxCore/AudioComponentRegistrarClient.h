@interface AudioComponentRegistrarClient : NSObject <AudioComponentRegistrarCallbackProtocol>

- (void)registrationsChanged:(id)a0 fsHash:(id)a1;

@end
