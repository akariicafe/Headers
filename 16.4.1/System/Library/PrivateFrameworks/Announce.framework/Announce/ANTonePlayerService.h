@class NSXPCConnection;

@interface ANTonePlayerService : NSObject

@property (readonly, nonatomic) NSXPCConnection *connection;

- (void)dealloc;
- (void)playTone:(unsigned long long)a0 audioSessionID:(unsigned int)a1 endpointUUID:(id)a2 completionHandler:(id /* block */)a3;
- (id)init;
- (void)invalidate;
- (void).cxx_destruct;

@end
