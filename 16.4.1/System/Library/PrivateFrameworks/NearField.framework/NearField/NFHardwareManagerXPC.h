@class NSHashTable, NSObject, NSXPCConnection;
@protocol OS_dispatch_queue;

@interface NFHardwareManagerXPC : NSObject {
    NSXPCConnection *_xpcConnection;
    NSHashTable *_delegates;
    long long _clientCount;
    NSObject<OS_dispatch_queue> *_xpcQueue;
}

@property (readonly) NSXPCConnection *connection;

+ (id)sharedXPC;

- (void)addDelegate:(id)a0;
- (id)init;
- (void)removeDelegate:(id)a0;
- (void).cxx_destruct;

@end
