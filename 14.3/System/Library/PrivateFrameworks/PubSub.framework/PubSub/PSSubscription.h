@class PSTopic, NSSet;

@interface PSSubscription : HMFObject

@property (readonly, weak) PSTopic *topic;
@property (readonly, copy) NSSet *filters;
@property (readonly, copy) NSSet *conditionals;

- (void).cxx_destruct;
- (id)attributeDescriptions;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void)unsubscribe;
- (id)initWithTopic:(id)a0 filters:(id)a1 conditionals:(id)a2;

@end
