@class NSArray, AVCPacketRelayDriver, NSObject;
@protocol OS_dispatch_queue, AVCPacketRelayDelegate, AVCPacketRelayConnectionProtocol;

@interface AVCPacketRelay : NSObject {
    AVCPacketRelayDriver *_packetDriver;
    NSObject<OS_dispatch_queue> *_queue;
}

@property (retain) NSArray *connections;
@property (retain) id<AVCPacketRelayConnectionProtocol> multiplexedConnection;
@property (nonatomic) id<AVCPacketRelayDelegate> delegate;

- (void)dealloc;
- (void)stop;
- (void)start;
- (id)initWithConnections:(id)a0 multiplexedConnection:(id)a1 error:(id *)a2;
- (BOOL)isAllConnectionTypeValid:(id)a0;
- (id)findConnectionToForwardData:(const void *)a0 size:(int)a1;
- (int)startAllConnections;
- (BOOL)stopAllConnections;
- (id)initWithConnection:(id)a0 connection:(id)a1 error:(id *)a2;

@end
