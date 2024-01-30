@class XPCServer, CPCoreXPCService;

@interface CPCoreServerWrapper : NSObject

@property (retain, nonatomic) XPCServer *server;
@property (retain, nonatomic) CPCoreXPCService *service;

- (void)start;
- (void).cxx_destruct;
- (id)init;
- (void)stop;

@end
