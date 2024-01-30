@class NSXPCConnection;

@interface TSXAnonymousClient : NSObject {
    BOOL _invalidated;
}

@property (readonly) NSXPCConnection *serverConnection;

+ (id)serverProtocol;
+ (id)clientProtocol;

- (void)interruptedConnection;
- (id)initWithEndpoint:(id)a0;
- (void)invalidatedConnection;
- (void)dealloc;
- (id)exportedObject;
- (void).cxx_destruct;

@end
