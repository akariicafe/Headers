@class NSString;

@interface SBAnalyticsStateMachineEdge : NSObject <BSDescriptionProviding> {
    id /* block */ _transition;
}

@property (readonly, nonatomic) unsigned long long fromState;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)edgeFromState:(unsigned long long)a0 transition:(id /* block */)a1;
+ (id)edgeFromState:(unsigned long long)a0 toState:(unsigned long long)a1 uponEvent:(unsigned long long)a2;
+ (id)edgeFromState:(unsigned long long)a0 toState:(unsigned long long)a1 uponGestureState:(long long)a2 andDo:(id /* block */)a3;
+ (id)edgeFromState:(unsigned long long)a0 toState:(unsigned long long)a1 uponGestureState:(long long)a2;

- (id)descriptionBuilderWithMultilinePrefix:(id)a0;
- (unsigned long long)handleEvent:(unsigned long long)a0 withContext:(id)a1;
- (id)succinctDescription;
- (id)initWithFromState:(unsigned long long)a0 transition:(id /* block */)a1;
- (void).cxx_destruct;
- (id)descriptionWithMultilinePrefix:(id)a0;
- (id)succinctDescriptionBuilder;

@end
