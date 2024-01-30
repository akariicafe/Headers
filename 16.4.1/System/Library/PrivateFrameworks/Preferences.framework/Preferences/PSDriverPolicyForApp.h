@class NSString;
@protocol PSDriverPolicyForAppDelegate;

@interface PSDriverPolicyForApp : NSObject <DriverManagerObserver>

@property (weak, nonatomic) id<PSDriverPolicyForAppDelegate> delegate;
@property (copy, nonatomic) NSString *bundleIdentifier;

- (void)dealloc;
- (id)specifiers;
- (id)initWithBundleIdentifier:(id)a0;
- (void).cxx_destruct;
- (void)approvalStateDidChange:(BOOL)a0;
- (void)setValue:(id)a0 forSpecifier:(id)a1;
- (id)valueForSpecifier:(id)a0;

@end
