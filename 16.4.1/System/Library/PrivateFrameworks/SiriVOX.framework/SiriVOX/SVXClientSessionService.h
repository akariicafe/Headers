@class NSString;
@protocol SVXPerforming, SVXClientSessionServiceDelegate, SVXClientServiceProviding;

@interface SVXClientSessionService : NSObject <SVXClientServiceConsuming, SVXClientSessionServicing> {
    id<SVXPerforming> _performer;
    id<SVXClientServiceProviding> _clientServiceProvider;
    BOOL _isActive;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) long long currentState;
@property (weak, nonatomic) id<SVXClientSessionServiceDelegate> delegate;

- (void)_setCurrentState:(long long)a0;
- (void).cxx_destruct;
- (void)fetchStateWithCompletion:(id /* block */)a0;
- (void)handleDidStopSoundWithID:(long long)a0 error:(id)a1;
- (void)clientServiceDidChange:(BOOL)a0;
- (void)fetchAlarmAndTimerFiringContextWithCompletion:(id /* block */)a0;
- (void)handleDidBecomeActiveWithActivationContext:(id)a0 turnID:(id)a1;
- (void)handleDidChangeStateFrom:(long long)a0 to:(long long)a1;
- (void)handleDidResignActiveWithDeactivationContext:(id)a0;
- (void)handleDidStartSoundWithID:(long long)a0;
- (void)handleWillBecomeActiveWithActivationContext:(id)a0 turnID:(id)a1;
- (void)handleWillChangeStateFrom:(long long)a0 to:(long long)a1;
- (void)handleWillPresentFeedbackWithDialogIdentifier:(id)a0;
- (void)handleWillResignActiveWithOptions:(unsigned long long)a0 duration:(double)a1;
- (void)handleWillStartSoundWithID:(long long)a0;
- (id)initWithClientServiceProvider:(id)a0 analytics:(id)a1 performer:(id)a2;

@end
