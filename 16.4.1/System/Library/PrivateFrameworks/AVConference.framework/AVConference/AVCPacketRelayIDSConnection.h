@class AVCPacketFilter, IDSDatagramChannel, IDSService;

@interface AVCPacketRelayIDSConnection : NSObject <AVCPacketRelayConnectionProtocol> {
    IDSDatagramChannel *_datagramChannel;
    IDSService *_packetRelayService;
}

@property BOOL isResumed;
@property (readonly) unsigned char type;
@property BOOL isDemuxNeeded;
@property (copy) id /* block */ readHandler;
@property (retain) AVCPacketFilter *packetFilter;

- (void)dealloc;
- (int)stop;
- (int)start;
- (void)readyToRead;
- (id)initWithIDSDestination:(id)a0;
- (id)initWithIDSSocketDescriptor:(unsigned short)a0;
- (BOOL)sendData:(const void *)a0 size:(unsigned int)a1 error:(id *)a2;

@end
