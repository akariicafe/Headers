@protocol PSEventInvocation;

@interface PSLocalSubscription : PSSubscription {
    id<PSEventInvocation> _invocation;
}

- (void).cxx_destruct;
- (id)attributeDescriptions;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void)invokeWithEvent:(id)a0 forTopicWithName:(id)a1;
- (id)initWithTopic:(id)a0 filters:(id)a1 conditionals:(id)a2 invocation:(id)a3;

@end
