@class NSUUID, NEFilterPacketProvider, NSObject, NEFilterPacketContext;
@protocol OS_nw_interface;

@interface NEFilterPacketInterpose : NSObject {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    struct channel { } *_channel;
    struct channel_attr { } *_attributes;
    int _channel_fd;
    unsigned short _slot_size;
    struct __slot_desc { } *_rx_last_slot;
    struct interpose_frame { unsigned char ring_id; char *buffer; unsigned int bufferLength; unsigned long long packet; struct __user_buflet *buflet; } _frame_buffer;
    struct interpose_frame { unsigned char x0; char *x1; unsigned int x2; unsigned long long x3; struct __user_buflet *x4; } *_current_frame;
    struct channel_ring_desc { } *_rx_ring_ingress;
    struct channel_ring_desc { } *_tx_ring_ingress;
    struct channel_ring_desc { } *_rx_ring_egress;
    struct channel_ring_desc { } *_tx_ring_egress;
    NEFilterPacketProvider *_provider;
    NSObject<OS_nw_interface> *_interface;
    NEFilterPacketContext *_context;
}

@property (retain) NSUUID *flowId;
@property (retain) NSUUID *nexusInstance;
@property unsigned int nexusPort;
@property void *key;
@property unsigned int keyLength;
@property void *input_source;
@property BOOL input_suspended;

- (void)close:(BOOL)a0;
- (void)close;
- (void).cxx_destruct;
- (void)freePacket:(id)a0;
- (void)dealloc;
- (struct interpose_frame { unsigned char x0; char *x1; unsigned int x2; unsigned long long x3; struct __user_buflet *x4; } *)allocateFrame:(struct interpose_frame { unsigned char x0; char *x1; unsigned int x2; unsigned long long x3; struct __user_buflet *x4; } *)a0;
- (void)deallocateFrame:(struct interpose_frame { unsigned char x0; char *x1; unsigned int x2; unsigned long long x3; struct __user_buflet *x4; } *)a0;
- (id)initWithInterface:(id)a0 flowId:(unsigned char[16])a1 nexusInstance:(unsigned char[16])a2 nexusPort:(unsigned int)a3 key:(void *)a4 keyLength:(unsigned int)a5 provider:(id)a6;
- (BOOL)matchFlow:(unsigned char[16])a0 flowId:(unsigned char[16])a1;
- (BOOL)createChannel;
- (id)delayCurrentPacket;
- (void)allowPacket:(id)a0;
- (id)description;

@end
