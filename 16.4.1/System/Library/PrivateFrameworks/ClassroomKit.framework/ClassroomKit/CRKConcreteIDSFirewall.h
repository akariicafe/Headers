@class NSString, IDSFirewall;

@interface CRKConcreteIDSFirewall : NSObject <CRKIDSFirewall>

@property (readonly, nonatomic) IDSFirewall *underlyingFirewall;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)appleIDFromFirewallEntry:(id)a0;
+ (id)firewallEntryForAppleID:(id)a0;

- (void).cxx_destruct;
- (void)addAllowedAppleIDs:(id)a0 completion:(id /* block */)a1;
- (void)fetchAllowedAppleIDsWithCompletion:(id /* block */)a0;
- (id)initWithUnderlyingFirewall:(id)a0;
- (void)removeAllowedAppleIDs:(id)a0 completion:(id /* block */)a1;

@end
