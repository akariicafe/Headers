@class NSString, SXQuickLookTransitionContext, SXQuickLookFile;
@protocol SXMediaSharingPolicyProvider;

@interface SXQuickLookPreviewViewController : QLPreviewController <QLPreviewControllerPrivateDelegate, QLPreviewControllerDataSource>

@property (readonly, nonatomic) SXQuickLookFile *file;
@property (readonly, nonatomic) id<SXMediaSharingPolicyProvider> mediaSharingPolicyProvider;
@property (readonly, nonatomic) SXQuickLookTransitionContext *transitionContext;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (long long)numberOfPreviewItemsInPreviewController:(id)a0;
- (id)previewController:(id)a0 previewItemAtIndex:(long long)a1;
- (void)viewDidLoad;
- (id)previewController:(id)a0 transitionViewForPreviewItem:(id)a1;
- (void).cxx_destruct;
- (BOOL)previewController:(id)a0 canShareItem:(id)a1;
- (id)initWithFile:(id)a0 mediaSharingPolicyProvider:(id)a1 transitionContext:(id)a2;

@end
