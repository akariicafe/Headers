@class NSString, NSXPCListenerEndpoint, NSXPCConnection;

@interface BMComputeSourceClient : NSObject {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    NSXPCConnection *_connection;
    NSXPCListenerEndpoint *_listenerEndpoint;
}

@property (readonly, nonatomic) NSXPCConnection *connection;
@property (readonly, copy, nonatomic) NSString *streamIdentifier;

+ (void)setUseSynchronousXPCMessageSending:(BOOL)a0;

- (void)sendEvent:(id)a0 timestamp:(double)a1 signpostID:(unsigned long long)a2 sendFullEvent:(BOOL)a3;
- (id)initWithStreamIdentifier:(id)a0;
- (id)initWithStreamIdentifier:(id)a0 listenerEndpoint:(id)a1;
- (id)description;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;

@end
