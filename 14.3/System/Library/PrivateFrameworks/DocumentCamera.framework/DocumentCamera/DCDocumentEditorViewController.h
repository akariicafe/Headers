@class UIView, ICDocCamDocumentInfoCollection, NSIndexPath, UIImage, ICDocCamExtractedDocumentViewController, VNDocumentCameraScan, NSString, ICDocCamImageCache;
@protocol DCDocumentEditorViewControllerDelegate;

@interface DCDocumentEditorViewController : UINavigationController <ICDocCamExtractedDocumentControllerDelegate, ICDocCamViewControllerDelegate, UINavigationControllerDelegate, UIViewControllerTransitioningDelegate>

@property (retain, nonatomic) ICDocCamExtractedDocumentViewController *extractedDocumentController;
@property (weak, nonatomic) id<DCDocumentEditorViewControllerDelegate> docCamDelegate;
@property (retain, nonatomic) VNDocumentCameraScan *scannedDocument;
@property (retain, nonatomic) ICDocCamDocumentInfoCollection *docInfoCollection;
@property (retain, nonatomic) ICDocCamImageCache *imageCache;
@property (nonatomic) BOOL useCustomRecropTransition;
@property (nonatomic) long long orientationForRecrop;
@property (retain, nonatomic) NSIndexPath *indexPathForRecrop;
@property (retain, nonatomic) UIImage *filteredImageForRecrop;
@property (retain, nonatomic) UIImage *unfilteredImageForRecrop;
@property (retain, nonatomic) UIView *sourceViewForZoomTransition;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)isAvailable;
+ (id)activityTypeOrder;
+ (id)docInfoCollectionFromScannedDocument:(id)a0 imageCache:(id)a1;

- (id)navigationController:(id)a0 animationControllerForOperation:(long long)a1 fromViewController:(id)a2 toViewController:(id)a3;
- (void).cxx_destruct;
- (id)initWithNavigationBarClass:(Class)a0 toolbarClass:(Class)a1;
- (id)initWithCoder:(id)a0;
- (void)_autoDismiss;
- (void)didReceiveMemoryWarning;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (id)initWithRootViewController:(id)a0;
- (BOOL)_canShowWhileLocked;
- (void)viewDidLoad;
- (id)extractedDocumentControllerTitle;
- (void)extractedDocumentControllerDidTapAddImage;
- (void)extractedDocumentController:(id)a0 didTapRecrop:(id)a1 index:(long long)a2;
- (void)extractedDocumentControllerDidTapRetake:(unsigned long long)a0;
- (void)extractedDocumentControllerDidTapDone:(unsigned long long)a0 scanDataDelegate:(id)a1;
- (void)extractedDocumentControllerDidTapDone:(unsigned long long)a0;
- (void)extractedDocumentController:(id)a0 shareDocument:(id)a1 sender:(id)a2;
- (void)extractedDocumentControllerDiscardMarkupModelDataForDocument:(id)a0;
- (id)extractedDocumentControllerMarkupModelDataForDocument:(id)a0;
- (void)extractedDocumentControllerDidChangeTitle:(id)a0;
- (void)extractedDocumentControllerDidSelectShareFromMenuForDocument:(id)a0 sourceRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 sourceView:(id)a2;
- (void)extractedDocumentControllerDidSelectCopyFromMenuForDocument:(id)a0;
- (BOOL)documentCameraController:(id)a0 canAddImages:(unsigned long long)a1;
- (void)documentCameraController:(id)a0 didFinishWithDocInfoCollection:(id)a1 imageCache:(id)a2 warnUser:(BOOL)a3 closeViewController:(BOOL)a4;
- (void)documentCameraControllerDidCancel:(id)a0;
- (id)documentCameraControllerCreateDataCryptorIfNecessary;
- (id)scanDataDelegateWithIdentifier:(id)a0;
- (void)documentCameraController:(id)a0 didFinishWithDocInfoCollection:(id)a1 imageCache:(id)a2 warnUser:(BOOL)a3;
- (id)documentCameraControllerImageCache;
- (id)initWithDelegate:(id)a0 scannedDocument:(id)a1;

@end
