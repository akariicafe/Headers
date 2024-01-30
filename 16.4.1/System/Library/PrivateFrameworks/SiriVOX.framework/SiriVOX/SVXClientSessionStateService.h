@class NSString;
@protocol SVXClientSessionStateServiceDelegate, SVXPerforming, SVXClientServiceProviding;

@interface SVXClientSessionStateService : NSObject <SVXClientServiceConsuming, SVXClientSessionStateServicing> {
    id<SVXPerforming> _performer;
    id<SVXClientServiceProviding> _clientServiceProvider;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) long long currentState;
@property (weak, nonatomic) id<SVXClientSessionStateServiceDelegate> delegate;

- (void)_setCurrentState:(long long)a0;
- (void).cxx_destruct;
- (void)fetchStateWithCompletion:(id /* block */)a0;
- (void)clientServiceDidChange:(BOOL)a0;
- (void)handleDidChangeSessionStateFrom:(long long)a0 to:(long long)a1;
- (void)handleWillChangeSessionStateFrom:(long long)a0 to:(long long)a1;
- (id)initWithClientServiceProvider:(id)a0 analytics:(id)a1 performer:(id)a2;

@end
