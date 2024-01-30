@class NSURL, NSString, PHContentEditingInput, UIImage, PUPhotoEditIrisModel, PICompositionController, NUComposition;
@protocol PUEditableAsset;

@interface PUPhotoEditResourceLoadResult : NSObject

@property (retain, nonatomic, setter=_setCompositionController:) PICompositionController *compositionController;
@property (retain, nonatomic, setter=_setOriginalComposition:) NUComposition *originalComposition;
@property (retain, nonatomic, setter=_setLivePhotoModel:) PUPhotoEditIrisModel *livePhotoModel;
@property (retain, nonatomic, setter=_setImage:) UIImage *image;
@property (retain, nonatomic, setter=_setImageURL:) NSURL *imageURL;
@property (retain, nonatomic, setter=_setImageUTI:) NSString *imageUTI;
@property (retain, nonatomic, setter=_setVideoComplementURL:) NSURL *videoComplementURL;
@property (nonatomic, setter=_setVideoComplementStillImageTime:) struct { long long value; int timescale; unsigned int flags; long long epoch; } videoComplementStillImageTime;
@property (nonatomic) struct { long long value; int timescale; unsigned int flags; long long epoch; } videoComplementOriginalStillImageTime;
@property (nonatomic, setter=_setVideoComplementDuration:) struct { long long value; int timescale; unsigned int flags; long long epoch; } videoComplementDuration;
@property (nonatomic, setter=_setRetrievedVersion:) long long retrievedVersion;
@property (nonatomic, setter=_setPenultimateAvailability:) long long penultimateAvailability;
@property (retain, nonatomic, setter=_setAsset:) id<PUEditableAsset> asset;
@property (nonatomic, setter=_setAssetLoadingAsRaw:) BOOL assetLoadingAsRaw;
@property (retain, nonatomic, setter=_setContentEditingInput:) PHContentEditingInput *contentEditingInput;
@property (retain, nonatomic, setter=_setAdjustmentIdentifierAndVersion:) NSString *adjustmentIdentifierAndVersion;
@property (retain, nonatomic) NSURL *overcaptureImageURL;
@property (retain, nonatomic) NSURL *overcaptureVideoURL;
@property (readonly, nonatomic, getter=isPenultimateAvailable) BOOL penultimateAvailable;

+ (id)resultWithContentEditingInput:(id)a0 asset:(id)a1;

- (void).cxx_destruct;
- (id)editSource;
- (id)overcaptureEditSource;

@end
