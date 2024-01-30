@class TKSmartCardSlotEngine, NSXPCConnection;

@interface TKSmartCardSessionEngine : NSObject <TKProtocolSmartCardSession> {
    TKSmartCardSlotEngine *_slot;
    BOOL _transmitting;
}

@property BOOL valid;
@property BOOL active;
@property long long endPolicy;
@property (readonly, weak, nonatomic) NSXPCConnection *connection;

- (void).cxx_destruct;
- (void)dealloc;
- (void)transmit:(id)a0 reply:(id /* block */)a1;
- (void)terminateWithReply:(id /* block */)a0;
- (void)setSessionEndPolicy:(long long)a0;
- (id)initWithSlot:(id)a0 connection:(id)a1;

@end
