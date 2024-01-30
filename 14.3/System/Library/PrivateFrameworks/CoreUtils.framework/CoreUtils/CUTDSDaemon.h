@class NSXPCListener, NSString, NSMutableSet, NSObject;
@protocol OS_dispatch_queue;

@interface CUTDSDaemon : NSObject <NSXPCListenerDelegate> {
    NSObject<OS_dispatch_queue> *_dispatchQueue;
    BOOL _invalidateCalled;
    BOOL _invalidateDone;
    struct LogCategory { int x0; int x1; char *x2; unsigned int x3; char *x4; char *x5; int x6; struct LogCategory *x7; struct LogOutput *x8; struct LogOutput *x9; unsigned long long x10; unsigned long long x11; unsigned int x12; unsigned int x13; char *x14; struct LogCategoryPrivate *x15; } *_ucat;
    NSMutableSet *_xpcConnections;
    NSXPCListener *_xpcListener;
}

@property (copy, nonatomic) NSString *xpcServiceName;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedTDSDaemon;

- (id)init;
- (void).cxx_destruct;
- (void)_activate;
- (void)_invalidated;
- (BOOL)listener:(id)a0 shouldAcceptNewConnection:(id)a1;
- (void)_xpcConnectionInvalidated:(id)a0;
- (void)activate;
- (void)_invalidate;
- (void)invalidate;

@end
