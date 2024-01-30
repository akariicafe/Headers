@class WLKCanonicalContainerResponse;

@interface WLKCanonicalContainerRequestOperation : WLKCanonicalPlayablesRequestOperation

@property (readonly, nonatomic) WLKCanonicalContainerResponse *containerResponse;

- (void).cxx_destruct;
- (void)processResponse;

@end
