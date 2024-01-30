@class NSString, UIViewController;

@interface SKUIPreviewContainerViewController : UIViewController <SKUIViewControllerPreviewing>

@property (retain, nonatomic) UIViewController *childViewController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)previewCommitViewController;

@end
