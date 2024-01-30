@class NSString, NSArray;

@interface FBSProcessWatchdogPolicy : NSObject <BSDescriptionProviding, NSCopying>

@property (copy, nonatomic) NSString *name;
@property (copy, nonatomic) NSArray *provisions;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)policyWithProvisions:(id)a0;
+ (id)policyWithName:(id)a0 forProvisions:(id)a1;

- (id)descriptionBuilderWithMultilinePrefix:(id)a0;
- (id)succinctDescription;
- (void).cxx_destruct;
- (id)descriptionWithMultilinePrefix:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)succinctDescriptionBuilder;

@end
