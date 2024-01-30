@class NSXPCConnection;
@protocol AVAudioDeviceTestServiceProtocol;

@interface AVAudioDeviceTest : NSObject

@property (retain) NSXPCConnection *connection;
@property (retain) id<AVAudioDeviceTestServiceProtocol> serviceDelegateAsync;
@property (retain) id<AVAudioDeviceTestServiceProtocol> serviceDelegateSync;
@property BOOL processSequenceAsynchronously;

- (void)cancel;
- (id)init;
- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithXPCEndPoint:(id)a0;
- (void)startWithSequence:(id)a0 completion:(id /* block */)a1;

@end
