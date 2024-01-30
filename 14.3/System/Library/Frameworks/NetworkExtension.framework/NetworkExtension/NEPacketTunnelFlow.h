@class NSFileHandle, NSDictionary, NSObject;
@protocol OS_dispatch_queue;

@interface NEPacketTunnelFlow : NSObject

@property (retain) NSObject<OS_dispatch_queue> *queue;
@property BOOL handlerSetup;
@property (retain) NSFileHandle *socket;
@property (copy) id /* block */ packetHandler;
@property (copy) id /* block */ packetObjectHandler;
@property char **packetDataArray;
@property unsigned int *packetProtocols;
@property unsigned long long *packetLengths;
@property unsigned long long buffersSize;
@property (retain) NSDictionary *uuidMap;
@property (readonly) long long interfaceType;
@property (readonly) struct NEVirtualInterface_s { } *interface;

- (void).cxx_destruct;
- (void)dealloc;
- (void)readPacketsWithCompletionHandler:(id /* block */)a0;
- (void)readPacketObjectsWithCompletionHandler:(id /* block */)a0;
- (BOOL)writePackets:(id)a0 withProtocols:(id)a1;
- (BOOL)writePacketObjects:(id)a0;
- (id)initWithVirtualInterfaceType:(long long)a0;
- (void)setAppUUIDMap:(id)a0;
- (BOOL)setVirtualInterfaceSocket:(id)a0;
- (void)closeVirtualInterface;
- (void)resetReadHandler;

@end
