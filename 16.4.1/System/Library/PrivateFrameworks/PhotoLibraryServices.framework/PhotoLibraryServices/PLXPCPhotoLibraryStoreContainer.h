@class NSXPCListener, NSXPCStoreServer, NSXPCListenerEndpoint;

@interface PLXPCPhotoLibraryStoreContainer : NSObject {
    NSXPCListener *_listener;
}

@property (readonly) NSXPCStoreServer *server;
@property (readonly) NSXPCListenerEndpoint *listenerEndpoint;

+ (id)newContainerWithPathManager:(id)a0 connectionAuthorization:(id)a1;

- (id)initWithServer:(id)a0 listener:(id)a1;
- (void).cxx_destruct;

@end
