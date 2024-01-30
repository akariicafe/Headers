@class CLIntersiloProxy;

@interface CLIntersiloProxyToRecipient : CLIntersiloProxy

@property (readonly, nonatomic) CLIntersiloProxy *peer;

- (void).cxx_destruct;
- (id)initWithUninitializedPeer:(id)a0;

@end
