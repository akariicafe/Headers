@class CLIntersiloProxy;

@interface CLIntersiloProxyToInitiator : CLIntersiloProxy

@property (readonly, weak, nonatomic) CLIntersiloProxy *peer;

- (void).cxx_destruct;
- (id)initWithDelegateObject:(id)a0 delegateSilo:(id)a1 uninitializedPeer:(id)a2;

@end
