@class NSXPCListener, NSString, NSObject, NSMutableArray;
@protocol OS_dispatch_queue, STSRemoteTransceiverProtocol;

@interface STSRemoteTransceiverProxyListener : NSObject <NSXPCListenerDelegate, STSRemoteTransceiverProxyListenerProtocol> {
    NSObject<STSRemoteTransceiverProtocol> *_delegate;
    NSObject<OS_dispatch_queue> *_workQueue;
    NSXPCListener *_xpcListener;
    NSMutableArray *_xpcConnections;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
