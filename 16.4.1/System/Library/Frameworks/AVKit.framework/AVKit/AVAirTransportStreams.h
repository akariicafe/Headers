@class NSOutputStream, NSString, NSInputStream;

@interface AVAirTransportStreams : AVAirTransport <NSStreamDelegate>

@property (readonly, nonatomic) NSInputStream *inputStream;
@property (readonly, nonatomic) NSOutputStream *outputStream;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)stream:(id)a0 handleEvent:(unsigned long long)a1;
- (BOOL)canWrite;
- (void)open;
- (void)invalidate;
- (long long)_writeData:(id)a0;
- (void).cxx_destruct;
- (void)_inputStreamDidClose;
- (void)_inputStreamHasBytesAvailable;
- (void)_outputStreamCanWrite;
- (void)_outputStreamDidOpen;
- (id)_readAvailableData;
- (id)_readDataNonBlockingUpToMaxLength:(unsigned long long)a0;
- (id)initWithInput:(id)a0 output:(id)a1;
- (BOOL)isReadyToSend;

@end
