@class HMCRedirector;

@interface HMCRedirectorTuple : HMFObject <HMFCancellable>

@property (readonly, weak, nonatomic) HMCRedirector *owner;
@property (readonly, weak, nonatomic) id target;
@property (readonly, nonatomic) SEL selector;

- (id)attributeDescriptions;
- (id)description;
- (void).cxx_destruct;
- (void)cancel;
- (id)initWithOwner:(id)a0 target:(id)a1 selector:(SEL)a2;
- (id)strongify;

@end
