@class NSString, NSMutableDictionary, NSXPCConnection;
@protocol AccessoryHIDXPCServerProtocol, AccessoryHIDClientProtocol;

@interface AccessoryHIDClient : NSObject <AccessoryHIDXPCClientProtocol>

@property (retain, nonatomic) NSXPCConnection *serverConnection;
@property (retain, nonatomic) id<AccessoryHIDXPCServerProtocol> remoteObject;
@property (retain) NSMutableDictionary *registeredHIDDescriptors;
@property (weak, nonatomic) id<AccessoryHIDClientProtocol> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithDelegate:(id)a0;
- (void)connectToServer;
- (void).cxx_destruct;
- (void)dealloc;
- (void)sendOutReport:(id)a0 fromUUID:(id)a1;
- (void)sendGetReportForType:(id)a0 andID:(id)a1 fromUUID:(id)a2;
- (void)hidDescriptor:(id)a0 active:(BOOL)a1;
- (void)registerHIDDescriptor:(id)a0 componentID:(unsigned short)a1 dictionary:(id)a2 withReply:(id /* block */)a3;
- (void)unregisterHIDDescriptor:(id)a0 componentID:(unsigned short)a1 withReply:(id /* block */)a2;
- (void)unregisterAllDescriptors:(id)a0 withReply:(id /* block */)a1;
- (void)inReport:(id)a0 componentID:(unsigned short)a1 report:(id)a2 withReply:(id /* block */)a3;
- (void)getReportResponse:(id)a0 componentID:(unsigned short)a1 reportType:(unsigned char)a2 reportID:(unsigned char)a3 report:(id)a4 withReply:(id /* block */)a5;

@end
