@class NSXPCConnection;
@protocol WBSCyclerTestTarget;

@interface WBSCyclerTestTargetProxyController : NSObject {
    NSXPCConnection *_xpcConnection;
}

@property (copy, nonatomic) id /* block */ disconnectionHandler;
@property (readonly, nonatomic) id<WBSCyclerTestTarget> testTargetProxy;

- (id)init;
- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithEndpoint:(id)a0;

@end
