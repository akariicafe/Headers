@class NSArray, NSString, FBSProcessExecutionStrategy;

@interface FBSProcessExecutionPolicy : NSObject <NSCopying, BSDescriptionProviding>

@property (copy, nonatomic) FBSProcessExecutionStrategy *strategy;
@property (copy, nonatomic) NSArray *provisions;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)policyForStrategy:(id)a0 withProvisions:(id)a1;

- (id)descriptionBuilderWithMultilinePrefix:(id)a0;
- (id)succinctDescriptionBuilder;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)succinctDescription;
- (id)descriptionWithMultilinePrefix:(id)a0;
- (void).cxx_destruct;

@end
