@class HMCRedirectorTuple;

@interface HMCRedirectorStrongTuple : HMFObject

@property (readonly, nonatomic) HMCRedirectorTuple *tuple;
@property (readonly, nonatomic) id target;
@property (readonly, nonatomic) SEL selector;

- (id)attributeDescriptions;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithTuple:(id)a0;
- (unsigned long long)hash;
- (void)sendMessageWithChanges:(id)a0;

@end
