@class NSXPCConnection;
@protocol AVAudioDeviceTestServiceProtocol;

@interface AVAudioDeviceTest : NSObject

@property (retain, nonatomic) NSXPCConnection *connection;
@property (retain, nonatomic) id<AVAudioDeviceTestServiceProtocol> serviceDelegateAsync;
@property (retain, nonatomic) id<AVAudioDeviceTestServiceProtocol> serviceDelegateSync;
@property BOOL processSequenceAsynchronously;

- (void)cancel;
- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)stopRecording:(id /* block */)a0;
- (id)initWithXPCEndPoint:(id)a0;
- (void)playback:(id)a0 filePath:(id)a1 completion:(id /* block */)a2;
- (void)startRecording:(id)a0 filePath:(id)a1 completion:(id /* block */)a2;
- (void)startWithSequence:(id)a0 completion:(id /* block */)a1;

@end
