@class NSHashTable, NSXPCConnection;

@interface NFHardwareManagerXPC : NSObject {
    NSXPCConnection *_xpcConnection;
    NSHashTable *_delegates;
    long long _clientCount;
}

@property (readonly) NSXPCConnection *connection;

+ (id)sharedXPC;

- (void)addDelegate:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (void)invalidate;

@end
