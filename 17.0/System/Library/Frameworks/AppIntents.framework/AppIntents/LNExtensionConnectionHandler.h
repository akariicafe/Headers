@class LNAppContext, NSMutableSet;

@interface LNExtensionConnectionHandler : NSObject <_EXMainConnectionHandler>

@property (retain, nonatomic) LNAppContext *appContext;
@property (retain, nonatomic) id principalObject;
@property (readonly, nonatomic) NSMutableSet *clientConnections;

- (id)init;
- (BOOL)shouldAcceptXPCConnection:(id)a0;
- (void).cxx_destruct;
- (id)initWithPrincipalObject:(id)a0;

@end
