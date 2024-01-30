@class NSArray, AVCPacketRelayDriver, NSObject;
@protocol OS_dispatch_queue, AVCPacketRelayDelegate, AVCPacketRelayConnectionProtocol;

@interface AVCPacketRelay : NSObject {
    AVCPacketRelayDriver *_packetDriver;
    NSObject<OS_dispatch_queue> *_queue;
    struct _AVCPacketRelayHealthStats { struct _AVCPacketRelayDemuxPacketHealthStats { unsigned int rtpAndRTCPPacketCount; unsigned int rtpPacketCount; unsigned int rtcpPacketCount; unsigned int droppedPacketCount; } demuxPacketStats; unsigned int sendPacketCount; unsigned int sendByteCount; unsigned int receivePacketCount; unsigned int receiveByteCount; double lastSendTimePrint; double lastReceiveTimePrint; } _healthStats;
}

@property (retain) NSArray *connections;
@property (retain) id<AVCPacketRelayConnectionProtocol> multiplexedConnection;
@property (nonatomic) id<AVCPacketRelayDelegate> delegate;

- (void)dealloc;
- (void)stop;
- (void)start;
- (id)initWithConnection:(id)a0 connection:(id)a1 error:(id *)a2;
- (id)initWithConnections:(id)a0 multiplexedConnection:(id)a1 error:(id *)a2;
- (id)findConnectionToForwardData:(const void *)a0 size:(int)a1;
- (void)healthPrint:(unsigned long long)a0 isSend:(BOOL)a1;
- (BOOL)isAllConnectionTypeValid:(id)a0;
- (int)startAllConnections;
- (BOOL)stopAllConnections;
- (void)updateDemuxPacketStatsWithPacketFilterPacketType:(unsigned char)a0;

@end
