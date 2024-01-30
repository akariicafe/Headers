@class NSXPCConnection;

@interface TSXClient : NSObject {
    BOOL _invalidated;
}

@property (readonly) NSXPCConnection *serverConnection;

+ (id)serviceName;
+ (id)serverProtocol;
+ (id)clientProtocol;

- (void)interruptedConnection;
- (void)invalidatedConnection;
- (void)dealloc;
- (id)init;
- (id)exportedObject;
- (void).cxx_destruct;

@end
