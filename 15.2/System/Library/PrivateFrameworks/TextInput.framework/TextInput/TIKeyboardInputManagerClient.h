@class NSXPCConnection;

@interface TIKeyboardInputManagerClient : NSObject

@property (retain, nonatomic) NSXPCConnection *connection;

+ (BOOL)instancesRespondToSelector:(SEL)a0;

- (void)handleRequest:(id)a0;
- (BOOL)isKindOfClass:(Class)a0;
- (id)methodSignatureForSelector:(SEL)a0;
- (void).cxx_destruct;
- (id)init;
- (void)forwardInvocation:(id)a0;
- (id)initWithImplProxy:(id)a0;
- (BOOL)conformsToProtocol:(id)a0;
- (void)dealloc;
- (BOOL)respondsToSelector:(SEL)a0;
- (void)handleError:(id)a0 forRequest:(id)a1;

@end
