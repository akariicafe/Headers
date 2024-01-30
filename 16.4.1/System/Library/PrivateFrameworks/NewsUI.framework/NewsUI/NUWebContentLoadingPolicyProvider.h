@class NSString;
@protocol FCHeadlineProviding;

@interface NUWebContentLoadingPolicyProvider : NSObject <SWLoadingPolicyProvider>

@property (readonly, nonatomic) id<FCHeadlineProviding> headline;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)initWithHeadline:(id)a0;
- (unsigned long long)loadingPolicy;

@end
