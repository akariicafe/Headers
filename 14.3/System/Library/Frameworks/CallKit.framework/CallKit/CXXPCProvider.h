@class NSXPCConnection;

@interface CXXPCProvider : CXProvider

@property (retain, nonatomic) NSXPCConnection *connection;
@property (nonatomic) int notifyToken;

- (void).cxx_destruct;
- (void)dealloc;
- (id)hostProtocolDelegate;
- (id)initWithConfiguration:(id)a0;
- (void)invalidate;
- (BOOL)requiresProxyingAVAudioSessionState;

@end
