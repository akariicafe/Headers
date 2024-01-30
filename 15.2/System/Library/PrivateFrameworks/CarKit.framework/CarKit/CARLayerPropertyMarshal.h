@class NSXPCConnection;

@interface CARLayerPropertyMarshal : NSObject

@property (retain, nonatomic) NSXPCConnection *connection;

- (void)_handleConnectionReset;
- (void)_setupConnection;
- (void).cxx_destruct;
- (id)init;
- (void)invalidate;
- (void)sendLayerProperties:(id)a0;

@end
