@class NSXPCConnection;

@interface SystemHealthManager : NSObject {
    NSXPCConnection *_connectionToService;
}

- (void).cxx_destruct;
- (id)init;
- (void)postComponentStatusEventFor:(unsigned long long)a0 status:(unsigned long long)a1 withReply:(id /* block */)a2;

@end
