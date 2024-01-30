@class NSSet, NSString, NSOrderedSet;

@interface FBSDisplayLayoutTransitionContext : NSObject <BSXPCCoding, BSDescriptionProviding> {
    NSOrderedSet *_transitionReasons;
}

@property (readonly, copy, nonatomic) NSSet *transitionReasons;
@property (readonly, copy, nonatomic) NSString *transitionReason;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)transitionReason;
- (void)encodeWithXPCDictionary:(id)a0;
- (id)descriptionBuilderWithMultilinePrefix:(id)a0;
- (id)succinctDescriptionBuilder;
- (id)initWithXPCDictionary:(id)a0;
- (void)setTransitionReasons:(id)a0;
- (id)succinctDescription;
- (id)descriptionWithMultilinePrefix:(id)a0;
- (void).cxx_destruct;

@end
