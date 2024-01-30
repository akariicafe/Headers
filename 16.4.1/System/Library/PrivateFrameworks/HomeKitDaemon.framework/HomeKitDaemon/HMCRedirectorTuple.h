@class HMCRedirector;

@interface HMCRedirectorTuple : HMFObject <HMFCancellable> {
    HMCRedirector *_owner;
    id _target;
    SEL _selector;
}

- (void)cancel;
- (id)attributeDescriptions;
- (id)description;
- (void).cxx_destruct;

@end
