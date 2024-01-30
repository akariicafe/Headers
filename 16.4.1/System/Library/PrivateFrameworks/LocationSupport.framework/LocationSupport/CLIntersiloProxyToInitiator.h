@class CLIntersiloProxy;

@interface CLIntersiloProxyToInitiator : CLIntersiloProxy

@property (readonly, weak, nonatomic) CLIntersiloProxy *peer;

- (id)initWithDelegateObject:(id)a0 delegateSilo:(id)a1 uninitializedPeer:(id)a2;
- (void).cxx_destruct;

@end
