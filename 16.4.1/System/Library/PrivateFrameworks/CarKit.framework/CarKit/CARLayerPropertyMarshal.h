@class NSXPCConnection;

@interface CARLayerPropertyMarshal : NSObject

@property (retain, nonatomic) NSXPCConnection *connection;

- (void)_setupConnection;
- (void)_handleConnectionReset;
- (id)init;
- (void)invalidate;
- (void).cxx_destruct;
- (void)sendLayerProperties:(id)a0;

@end
