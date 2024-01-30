@class NSString, BKSProcessAssertion;

@interface CPProcessAssertion : NSObject

@property (retain, nonatomic) BKSProcessAssertion *processAssertion;
@property (readonly, copy, nonatomic) NSString *bundleIdentifier;

+ (id)processAssertionNameForBundleIdentifier:(id)a0;
+ (id)processAssertionWithBundleIdentifier:(id)a0;

- (void)dealloc;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)initWithBundleIdentifier:(id)a0;
- (void).cxx_destruct;
- (id)name;
- (void)acquireWithCompletionHandler:(id /* block */)a0;

@end
