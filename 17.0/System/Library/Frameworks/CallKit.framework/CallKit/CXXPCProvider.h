@class NSXPCConnection;

@interface CXXPCProvider : CXProvider

@property (retain, nonatomic) NSXPCConnection *connection;
@property (nonatomic) int notifyToken;

- (void)dealloc;
- (void)invalidate;
- (id)initWithConfiguration:(id)a0;
- (void).cxx_destruct;
- (id)hostProtocolDelegate;
- (BOOL)requiresProxyingAVAudioSessionState;

@end
