@protocol SWLoadingPolicyProvider;

@interface SXWebContentComponentSizer : SXComponentSizer

@property (readonly, nonatomic) id<SWLoadingPolicyProvider> loadingPolicyProvider;

- (void).cxx_destruct;
- (double)calculateHeightForWidth:(double)a0 layoutContext:(id)a1;
- (id)initWithComponent:(id)a0 componentLayout:(id)a1 componentStyle:(id)a2 DOMObjectProvider:(id)a3 layoutOptions:(id)a4 loadingPolicyProvider:(id)a5;

@end
