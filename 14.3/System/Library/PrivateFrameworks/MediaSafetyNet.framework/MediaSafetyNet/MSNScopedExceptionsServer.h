@class NSXPCListener, NSString, NSMutableArray, NSObject;
@protocol OS_dispatch_queue;

@interface MSNScopedExceptionsServer : NSObject <NSXPCListenerDelegate, MSNScopedExceptionsProtocol> {
    NSXPCListener *_listener;
    NSMutableArray *_activeExceptions;
    NSObject<OS_dispatch_queue> *_queue;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedProxy;
+ (id)validExceptions;
+ (id)validEntitlements;

- (id)initWithQueue:(id)a0;
- (void).cxx_destruct;
- (void)beginException:(id)a0;
- (BOOL)listener:(id)a0 shouldAcceptNewConnection:(id)a1;
- (BOOL)isConnectionAllowedToAssertException:(id)a0;
- (void)endException:(id)a0;
- (BOOL)isExceptionInEffect:(id)a0;

@end
