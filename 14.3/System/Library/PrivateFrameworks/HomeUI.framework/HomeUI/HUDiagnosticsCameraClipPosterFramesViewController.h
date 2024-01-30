@class HMCameraProfile, UICollectionView, NSOperationQueue, HMCameraClip, NSString;

@interface HUDiagnosticsCameraClipPosterFramesViewController : UIViewController <UICollectionViewDataSource, UICollectionViewDelegate>

@property (retain, nonatomic) HMCameraProfile *cameraProfile;
@property (retain, nonatomic) HMCameraClip *cameraClip;
@property (retain, nonatomic) NSOperationQueue *diagnosticOperationQueue;
@property (retain, nonatomic) UICollectionView *posterFrameCollectionView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;
- (struct CGSize { double x0; double x1; })collectionView:(id)a0 layout:(id)a1 sizeForItemAtIndexPath:(id)a2;
- (long long)collectionView:(id)a0 numberOfItemsInSection:(long long)a1;
- (long long)numberOfSectionsInCollectionView:(id)a0;
- (void).cxx_destruct;
- (void)viewDidLoad;
- (id)initWithCameraClip:(id)a0 cameraProfile:(id)a1;

@end
