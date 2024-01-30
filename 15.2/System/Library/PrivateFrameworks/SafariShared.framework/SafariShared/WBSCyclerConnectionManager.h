@class NSString, NSXPCListener, WBSCyclerServiceProxy;
@protocol WBSCyclerTestTarget;

@interface WBSCyclerConnectionManager : NSObject <NSXPCListenerDelegate> {
    NSXPCListener *_xpcListener;
    WBSCyclerServiceProxy *_cyclerProxy;
}

@property (readonly, nonatomic) id<WBSCyclerTestTarget> testTarget;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)isCyclerEnabled;

- (void)connect;
- (BOOL)listener:(id)a0 shouldAcceptNewConnection:(id)a1;
- (void).cxx_destruct;
- (id)init;
- (id)initWithTestTarget:(id)a0;

@end
