@class NSMutableArray, NSString, NSHashTable, NSObject, BSServiceConnectionListener;
@protocol OS_dispatch_queue, CRSUIStatusBarStyleServiceDelegate;

@interface CRSUIStatusBarStyleService : NSObject <BSServiceConnectionListenerDelegate, CRSUIStatusBarStyleClientToServerInterface, BSInvalidatable> {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    NSMutableArray *_lock_assertions;
}

@property (weak, nonatomic) id<CRSUIStatusBarStyleServiceDelegate> delegate;
@property (retain, nonatomic) BSServiceConnectionListener *listener;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *connectionQueue;
@property (retain, nonatomic) NSHashTable *connections;
@property (readonly, nonatomic) long long interfaceStyle;
@property (readonly, nonatomic) long long contrast;
@property (readonly, nonatomic, getter=isSiriPresentation) BOOL siriPresentation;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)listener:(id)a0 didReceiveConnection:(id)a1 withContext:(id)a2;
- (id)initWithDelegate:(id)a0;
- (void)invalidate;
- (void)_connectionQueue_removeConnection:(id)a0;
- (void)_connectionQueue_addConnection:(id)a0;
- (oneway void)clientAcquireForSiriPresentationWithFenceHandle:(id)a0 animationSettings:(id)a1;
- (oneway void)clientAcquireWithInterfaceStyle:(id)a0 contrast:(id)a1 fenceHandle:(id)a2 animationSettings:(id)a3;
- (oneway void)clientReliquishWithFenceHandle:(id)a0 animationSettings:(id)a1;

@end
