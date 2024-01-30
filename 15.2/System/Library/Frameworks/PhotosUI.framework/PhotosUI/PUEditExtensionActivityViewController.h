@protocol PUEditExtensionActivityViewControllerDelegate;

@interface PUEditExtensionActivityViewController : UIActivityViewController

@property (weak, nonatomic) id<PUEditExtensionActivityViewControllerDelegate> editExtensionActivityViewControllerDelegate;

- (void)_performActivity:(id)a0;
- (void).cxx_destruct;
- (BOOL)_shouldUseModernDesign;
- (BOOL)isPhotosOrCamera;
- (BOOL)appWantsLargePreview;

@end
