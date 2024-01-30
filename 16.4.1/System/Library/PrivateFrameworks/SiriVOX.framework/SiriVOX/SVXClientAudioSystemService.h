@class NSString;
@protocol SVXPerforming, SVXClientServiceProviding, SVXClientAudioSystemServiceDelegate;

@interface SVXClientAudioSystemService : NSObject <SVXClientServiceConsuming, SVXClientAudioSystemServicing> {
    id<SVXPerforming> _performer;
    id<SVXClientServiceProviding> _clientServiceProvider;
    BOOL _isAudioSessionActive;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<SVXClientAudioSystemServiceDelegate> delegate;

- (void).cxx_destruct;
- (void)clientServiceDidChange:(BOOL)a0;
- (void)handleAudioSessionDidBecomeActive:(BOOL)a0 activationContext:(id)a1 deactivationContext:(id)a2;
- (void)handleAudioSessionIDDidChange:(unsigned int)a0;
- (void)handleAudioSessionWillBecomeActive:(BOOL)a0 activationContext:(id)a1 deactivationContext:(id)a2;
- (id)initWithClientServiceProvider:(id)a0 analytics:(id)a1 performer:(id)a2;

@end
