@class NSString, FBServiceClientAuthenticator, BSServiceConnectionListener, NSObject;
@protocol OS_dispatch_queue, SBSystemNotesPresentationRequestServerDelegate;

@interface SBSystemNotesPresentationRequestServer : NSObject <BSServiceConnectionListenerDelegate> {
    FBServiceClientAuthenticator *_clientAuthenticator;
    BSServiceConnectionListener *_connectionListener;
    NSObject<OS_dispatch_queue> *_queue;
}

@property (weak, nonatomic) id<SBSystemNotesPresentationRequestServerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)listener:(id)a0 didReceiveConnection:(id)a1 withContext:(id)a2;
- (id)init;
- (void)activate;
- (void)invalidate;
- (void).cxx_destruct;

@end
