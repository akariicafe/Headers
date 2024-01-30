@class NSString, NSMutableDictionary;

@interface SAPhoneApplicationLauncher : NSObject <SAApplicationLauncher> {
    NSMutableDictionary *_assertionMap;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)openApplicationInBackgroundWithBundleId:(id)a0 withReason:(long long)a1 completion:(id /* block */)a2;
- (id)init;
- (void).cxx_destruct;
- (void)addAssertion:(id)a0 forProcessId:(int)a1;
- (void)cleanupInvalidAssertions;

@end
