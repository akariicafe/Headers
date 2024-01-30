@class WLKCanonicalContainerResponse;

@interface WLKCanonicalContainerRequestOperation : WLKCanonicalPlayablesRequestOperation

@property (readonly, nonatomic) WLKCanonicalContainerResponse *containerResponse;

- (void)processResponse;
- (void).cxx_destruct;

@end
