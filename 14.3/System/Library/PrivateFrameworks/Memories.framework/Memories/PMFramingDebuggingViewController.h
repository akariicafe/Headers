@class UIStackView, PHAsset, UITapGestureRecognizer, UIImageView, UIButton, PHAssetCollection, UITextView, NSMutableArray, NSDictionary, UILabel;

@interface PMFramingDebuggingViewController : UIViewController

@property int currentFramingChoice;
@property (retain, nonatomic) UITapGestureRecognizer *tapGestureRecognizer;
@property (retain, nonatomic) PHAsset *framingAsset;
@property (retain, nonatomic) PHAssetCollection *assetCollection;
@property (retain, nonatomic) UIImageView *framingAssetImageView;
@property (retain, nonatomic) UIButton *changeDisplayedFramingButton;
@property (retain, nonatomic) UILabel *currentModeDisplayLabel;
@property (retain, nonatomic) UILabel *currentConfidenceLevels;
@property (retain, nonatomic) UIStackView *holdingStackView;
@property (retain, nonatomic) UITextView *textOverlayView;
@property (retain, nonatomic) NSMutableArray *correspondingClipForAsset;
@property (retain, nonatomic) NSDictionary *kbHorizontalFramingAssetIDMap;
@property (retain, nonatomic) NSDictionary *kbVerticalFramingAssetIDMap;
@property (retain, nonatomic) NSDictionary *kbPlaybackSizeAssetIDMap;

- (void).cxx_destruct;
- (void)viewDidLoad;
- (void)renderSaliencyImage;
- (void)didSelectFramingMode:(id)a0;
- (void)displayImportantSubjectCriteria;
- (void)configureTapGestureRecognizer;
- (void)displayContextInformationForAssetCollection;
- (void)didTapImageView:(id)a0;
- (void)renderSaliencyRectsForAsset:(id)a0;
- (void)renderKBRects;
- (void)renderKBRectsVertical;
- (void)renderDetectedFaces;
- (void)displayFeaturedFacesFoundInAsset;
- (void)renderDetectedPets;
- (void)renderDetectedPetFaces;
- (void)displayPreferredCrop;
- (void)displayAcceptableCrop;
- (void)displaySuggestedCrops;
- (void)displayNUpFramingDecisions;
- (void)displayUnionRect;
- (id)renderSaliencyBoundingBoxToImage:(id)a0;
- (id)renderBoundingBoxToImage:(id)a0 metadataRects:(id)a1 playbackImageSize:(struct CGSize { double x0; double x1; })a2 normalized:(BOOL)a3 flipYAxis:(BOOL)a4;
- (struct CGSize { double x0; double x1; })targetSizeForInputAspect:(double)a0 imageSize:(struct CGSize { double x0; double x1; })a1;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })createInterestingRect;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })roundValuesInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })petAndFaceRect;
- (void)displayPetFaceUnionRect;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })extendAllTheThings:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 alignment:(long long)a1 targetAspect:(float)a2 imageSize:(struct CGSize { double x0; double x1; })a3 clipAspect:(float)a4;
- (void)displayContextInformationForAsset;

@end
