@class NSString;
@protocol PXActivityItemSourceController;

@interface PUAssignToContactActivity : UIAssignToContactActivity <UINavigationControllerDelegate, PXActivity>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<PXActivityItemSourceController> itemSourceController;

- (unsigned long long)navigationControllerSupportedInterfaceOrientations:(id)a0;
- (id)activityViewController;
- (void).cxx_destruct;
- (id)_embeddedActivityViewController;
- (id)_systemImageName;

@end
