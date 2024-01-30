@class SFAuthenticationManager, NSUUID, AFWatchdogTimer, NSString, NSObject;
@protocol OS_dispatch_queue;

@interface SRUIFWatchAuthenticationManager : NSObject <SFAuthenticationManagerDelegate> {
    NSObject<OS_dispatch_queue> *_watchAuthenticationQueue;
}

@property (copy, nonatomic) id /* block */ authenticationCompletion;
@property (copy, nonatomic) NSUUID *currentSessionID;
@property (retain, nonatomic) AFWatchdogTimer *authenticationWatchdogTimer;
@property (retain, nonatomic) SFAuthenticationManager *authenticationManager;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (void)manager:(id)a0 didCompleteAuthenticationForSessionWithID:(id)a1;
- (void)manager:(id)a0 didFailAuthenticationForSessionWithID:(id)a1 error:(id)a2;
- (void)manager:(id)a0 didStartAuthenticationForSessionWithID:(id)a1;
- (void)requestWatchAuthentication:(id /* block */)a0;
- (void)_requestWatchAuthentication:(id /* block */)a0;
- (id)initWithQueue:(id)a0 manager:(id)a1;

@end
