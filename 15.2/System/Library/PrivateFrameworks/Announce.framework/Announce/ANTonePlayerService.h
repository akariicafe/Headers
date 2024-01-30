@class NSXPCConnection;

@interface ANTonePlayerService : NSObject

@property (readonly, nonatomic) NSXPCConnection *connection;

- (void).cxx_destruct;
- (id)init;
- (void)invalidate;
- (void)dealloc;
- (void)playTone:(unsigned long long)a0 endpointUUID:(id)a1 completionHandler:(id /* block */)a2;

@end
