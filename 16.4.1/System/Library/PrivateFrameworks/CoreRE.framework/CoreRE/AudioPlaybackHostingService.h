@class NSXPCListener, NSString, NSMutableDictionary, NSObject;
@protocol OS_xpc_object, OS_dispatch_queue;

@interface AudioPlaybackHostingService : NSObject <NSXPCListenerDelegate> {
    NSXPCListener *_listener;
    NSMutableDictionary *_clients;
    NSObject<OS_dispatch_queue> *_serviceQueue;
    unsigned long long _connectionIdentifierCounter;
}

@property (readonly) NSObject<OS_xpc_object> *endpoint;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
