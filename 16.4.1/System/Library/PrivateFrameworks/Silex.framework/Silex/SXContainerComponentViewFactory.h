@protocol SXMediaSharingPolicyProvider;

@interface SXContainerComponentViewFactory : SXComponentViewFactory

@property (readonly, nonatomic) id<SXMediaSharingPolicyProvider> mediaSharingPolicyProvider;

- (id)type;
- (int)role;
- (void).cxx_destruct;
- (id)componentViewForComponent:(id)a0;
- (id)initWithDOMObjectProvider:(id)a0 viewport:(id)a1 presentationDelegateProvider:(id)a2 componentStyleRendererFactory:(id)a3 mediaSharingPolicyProvider:(id)a4;

@end
