@class NSString, DIXPCDisconnectHandler, NSXPCConnection;
@protocol DIDocUploadSessionXPCProtocol;

@interface DIDocUploadSessionClient : NSObject <DIDocUploadSessionXPCProtocol>

@property (retain) NSXPCConnection *serverConnection;
@property (retain) id<DIDocUploadSessionXPCProtocol> remoteObjectProxy;
@property (retain) DIXPCDisconnectHandler *disconnectHandler;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
