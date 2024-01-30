@class NSString, NSXPCListener, WBSCyclerServiceProxy;
@protocol WBSCyclerTestTarget;

@interface WBSCyclerConnectionManager : NSObject <NSXPCListenerDelegate> {
    NSXPCListener *_xpcListener;
    WBSCyclerServiceProxy *_cyclerProxy;
}

@property (class, readonly, nonatomic) unsigned long long countOfEnabledCyclers;
@property (class, readonly, nonatomic) BOOL isBookmarkCyclerEnabled;
@property (class, readonly, nonatomic) BOOL isTabCyclerEnabled;
@property (class, readonly, nonatomic) BOOL isExtensionCyclerEnabled;

@property (readonly, nonatomic) id<WBSCyclerTestTarget> testTarget;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)connect;
- (BOOL)listener:(id)a0 shouldAcceptNewConnection:(id)a1;
- (id)init;
- (void).cxx_destruct;
- (id)initWithTestTarget:(id)a0;

@end
