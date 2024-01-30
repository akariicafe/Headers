@class DIXPCDispatcher, DIXPCManager;

@interface DIXPCConnectionManager : NSObject

@property (retain, nonatomic) DIXPCManager *manager;
@property (readonly, nonatomic) DIXPCDispatcher *dispatcher;

- (void).cxx_destruct;
- (id)initWithXPCManager:(id)a0 dispatcher:(id)a1;

@end
