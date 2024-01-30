@class XPCServer, CPCoreXPCService;

@interface CPCoreServerWrapper : NSObject

@property (retain, nonatomic) XPCServer *server;
@property (retain, nonatomic) CPCoreXPCService *service;

- (void)stop;
- (id)init;
- (void)start;
- (void).cxx_destruct;

@end
