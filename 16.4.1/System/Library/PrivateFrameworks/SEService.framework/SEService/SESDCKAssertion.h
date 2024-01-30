@class NSString, NSObject;
@protocol SESDCKAssertionInterface, NSXPCProxyCreating;

@interface SESDCKAssertion : NSObject <SESDCKAssertionCallbackInterface> {
    NSObject<SESDCKAssertionInterface, NSXPCProxyCreating> *_proxy;
}

@property (readonly, nonatomic) NSString *keyIdentifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)synchronousRemoteObjectProxyWithErrorHandler:(id /* block */)a0;
- (void)setProxy:(id)a0;
- (id)proxy;
- (void)didInvalidate;
- (void)dealloc;
- (void)invalidate;
- (void).cxx_destruct;
- (id)initWithKeyIdentifier:(id)a0;

@end
