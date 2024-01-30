@class NSString;

@interface RBAssertionDescriptorValidator : NSObject <RBAssertionDescriptorValidating>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)isAssertionValidForContext:(id)a0 error:(out id *)a1;

@end
