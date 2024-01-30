@class NSString;

@interface SBNetworkReselectionController : NSObject <STTelephonyStateObserver>

@property (class, readonly) SBNetworkReselectionController *sharedController;

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)subscriptionInfoDidChangeForStateProvider:(id)a0 slot:(long long)a1;
- (id)init;
- (void)_handleNetworkReselectionNeeded:(BOOL)a0 forSlot:(long long)a1;
- (void)_test;
- (void)dealloc;

@end
