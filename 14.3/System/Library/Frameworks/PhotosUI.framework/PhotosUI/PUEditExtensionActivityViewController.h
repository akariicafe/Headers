@protocol PUEditExtensionActivityViewControllerDelegate;

@interface PUEditExtensionActivityViewController : UIActivityViewController

@property (weak, nonatomic) id<PUEditExtensionActivityViewControllerDelegate> editExtensionActivityViewControllerDelegate;

- (void).cxx_destruct;
- (BOOL)_shouldUseModernDesign;
- (BOOL)isPhotosOrCamera;
- (BOOL)appWantsLargePreview;
- (void)_performActivity:(id)a0;

@end
