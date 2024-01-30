@class NSString;
@protocol NSXPCProxyCreating;

@interface CPSSessionRemoteObserver : NSObject <CPSSessionObserving> {
    id<NSXPCProxyCreating> _xpcProxy;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)observerWithXPCProxy:(id)a0;

- (id)initWithXPCProxy:(id)a0;
- (id)forwardingTargetForSelector:(SEL)a0;
- (void).cxx_destruct;

@end
