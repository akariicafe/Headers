@interface AVAudioSessionCallbackDispatcher : NSObject <SessionManagerXPCServerCallbackProtocol>

- (void)pingClient:(unsigned int)a0;
- (void)IOControllerEvent:(unsigned long long)a0 sessions:(id)a1 isDecoupledInput:(BOOL)a2;

@end
