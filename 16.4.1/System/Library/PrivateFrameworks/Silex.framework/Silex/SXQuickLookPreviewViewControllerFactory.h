@class NSString;
@protocol SXMediaSharingPolicyProvider;

@interface SXQuickLookPreviewViewControllerFactory : NSObject <SXQuickLookPreviewViewControllerFactory>

@property (readonly, nonatomic) id<SXMediaSharingPolicyProvider> mediaSharingPolicyProvider;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)initWithMediaSharingPolicyProvider:(id)a0;
- (id)viewControllerForFile:(id)a0 transitionContext:(id)a1;

@end
