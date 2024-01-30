@class NSOutputStream, NSString, NSInputStream;

@interface AVAirTransportStreams : AVAirTransport <NSStreamDelegate>

@property (readonly, nonatomic) NSInputStream *inputStream;
@property (readonly, nonatomic) NSOutputStream *outputStream;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)open;
- (long long)_writeData:(id)a0;
- (void).cxx_destruct;
- (BOOL)canWrite;
- (void)invalidate;
- (void)stream:(id)a0 handleEvent:(unsigned long long)a1;
- (id)initWithInput:(id)a0 output:(id)a1;
- (id)_readDataNonBlockingUpToMaxLength:(unsigned long long)a0;
- (BOOL)isReadyToSend;
- (id)_readAvailableData;
- (void)_inputStreamHasBytesAvailable;
- (void)_outputStreamDidOpen;
- (void)_outputStreamCanWrite;
- (void)_inputStreamDidClose;

@end
