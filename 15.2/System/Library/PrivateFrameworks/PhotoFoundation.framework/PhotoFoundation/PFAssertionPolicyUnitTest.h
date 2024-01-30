@class NSString;

@interface PFAssertionPolicyUnitTest : NSObject <PFAssertionPolicyHandler>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)notifyAssertion:(id)a0;

@end
