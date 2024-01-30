@class HMHome, NAFuture, HFHomePersonItemProvider, HMCameraProfile, HMPersonManager, HMFaceClassification, HFPhotosPersonItemProvider, HMCameraSignificantEvent;

@interface HUFaceRecognitionAddPersonItemManager : HFItemManager

@property (readonly, nonatomic) HMCameraSignificantEvent *significantEvent;
@property (readonly, nonatomic) HMCameraProfile *cameraProfile;
@property (readonly, nonatomic) HFHomePersonItemProvider *homePersonItemProvider;
@property (readonly, nonatomic) HFPhotosPersonItemProvider *photosPersonItemProvider;
@property (readonly, nonatomic) HMPersonManager *personManager;
@property (readonly, nonatomic) HMHome *overrideHome;
@property (readonly, nonatomic) HMFaceClassification *faceClassification;
@property (readonly, nonatomic) NAFuture *faceCropImageFuture;

- (id)initWithDelegate:(id)a0;
- (void).cxx_destruct;
- (id)_buildItemProvidersForHome:(id)a0;
- (id)_buildSectionsWithDisplayedItems:(id)a0;
- (id)_homeFuture;
- (id)associateFaceClassificationWithExistingPerson:(id)a0;
- (id)associateFaceClassificationWithNewPersonNamed:(id)a0;
- (id)initWithDelegate:(id)a0 sourceItem:(id)a1;
- (id)initWithSignificantEvent:(id)a0 home:(id)a1 delegate:(id)a2;

@end
