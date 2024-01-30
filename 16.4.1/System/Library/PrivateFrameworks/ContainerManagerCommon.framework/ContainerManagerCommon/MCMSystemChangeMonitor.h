@class NSString;

@interface MCMSystemChangeMonitor : NSObject <MCMUserIdentityCacheObserver>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)userIdentityCache:(id)a0 didInvalidateUserIdentity:(id)a1;
- (void)userIdentityCache:(id)a0 didAddUserIdentity:(id)a1;

@end
