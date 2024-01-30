@class NSXPCListener, AXDragSession, NSString, AXDispatchTimer, AXDragEndpointVendor, NSMutableArray, NSObject;
@protocol AXDragManagerDelegate, OS_dispatch_queue;

@interface AXDragManager : NSObject <AXDragEndpointVendorDelegate, NSXPCListenerDelegate, AXDragSessionDragManager, AXDragSessionDelegate> {
    AXDragEndpointVendor *_vendor;
    NSXPCListener *_endpointListener;
    NSMutableArray *_activeSessions;
    NSObject<OS_dispatch_queue> *_dragStateQueue;
}

@property (nonatomic) int pidForDrag;
@property (copy, nonatomic) id /* block */ dragStartCompletionHandler;
@property (retain, nonatomic) AXDispatchTimer *dragStartTimer;
@property (retain, nonatomic) AXDragSession *dragSession;
@property (weak, nonatomic) id<AXDragManagerDelegate> delegate;
@property (readonly, nonatomic) BOOL isDragActive;
@property (readonly, nonatomic) NSString *machServiceName;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)listener:(id)a0 shouldAcceptNewConnection:(id)a1;
- (void)drop;
- (id)initWithMachServiceName:(id)a0;
- (void)cancelDrag;
- (void).cxx_destruct;
- (void)moveToPoint:(struct CGPoint { double x0; double x1; })a0;
- (void)dragSessionEnded:(id)a0 withOperation:(unsigned long long)a1;
- (BOOL)_shouldAllowEndpointVendForRequestingConnection:(id)a0;
- (void)dragSession:(id)a0 movedToPoint:(struct CGPoint { double x0; double x1; })a1 byRequestor:(id)a2;
- (void)dragSessionChanged:(id)a0 toStatus:(id)a1;
- (void)dragSessionWasTerminated:(id)a0;
- (id)endpointForRequestingConnection:(id)a0 fromEndpointVendor:(id)a1;
- (void)moveToAndDropAtPoint:(struct CGPoint { double x0; double x1; })a0;
- (void)sessionWasTerminated:(id)a0;
- (void)waitForDragStartFromPid:(int)a0 completionHandler:(id /* block */)a1;

@end
