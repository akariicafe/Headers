@class NSObject;
@protocol OS_dispatch_queue, OS_dispatch_source;

@interface DTXMachTransport : DTXTransport {
    unsigned int _receivePort;
    unsigned int _sendPort;
    NSObject<OS_dispatch_queue> *_inputQueue;
    NSObject<OS_dispatch_queue> *_outputQueue;
    NSObject<OS_dispatch_source> *_listenSource;
    NSObject<OS_dispatch_source> *_deadPortSource;
    id /* block */ _disconnectBlock;
    struct DTXMachMessage { struct { struct { unsigned int x0; unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; int x5; } x0; unsigned int x1; } x0; char x1[32672]; char x2[68]; } *_sendBuffer;
    unsigned int _bufferedLength;
}

+ (id)schemes;
+ (id)_legacyFileDescriptorHandshakeWithReceivePort:(unsigned int)a0;
+ (id)_legacyFileDescriptorHandshakeWithSendPort:(unsigned int)a0;
+ (id)fileDescriptorHandshakeWithReceivePort:(unsigned int)a0;
+ (id)fileDescriptorHandshakeWithSendPort:(unsigned int)a0;

- (void)disconnect;
- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (id)localAddresses;
- (BOOL)_setupWithSendPort:(unsigned int)a0 receivePort:(unsigned int)a1 disconnectBlock:(id /* block */)a2;
- (id)initWithReceiveRight:(unsigned int)a0 sendRight:(unsigned int)a1 disconnectBlock:(id /* block */)a2;
- (id)initWithRemoteAddress:(id)a0;
- (id)initWithXPCRepresentation:(id)a0;
- (id)serializedXPCRepresentation;
- (unsigned long long)transmit:(const void *)a0 ofLength:(unsigned long long)a1;

@end
