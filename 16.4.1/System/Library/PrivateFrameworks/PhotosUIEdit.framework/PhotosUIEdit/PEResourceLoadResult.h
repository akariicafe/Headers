@class NSURL, NSString, PHContentEditingInput, UIImage, PICompositionController, NUComposition, PLEditSource;
@protocol PEAsset;

@interface PEResourceLoadResult : NSObject

@property (retain, nonatomic, setter=_setCompositionController:) PICompositionController *compositionController;
@property (retain, nonatomic, setter=_setEditSource:) PLEditSource *editSource;
@property (retain, nonatomic, setter=_setOriginalComposition:) NUComposition *originalComposition;
@property (retain, nonatomic, setter=_setImage:) UIImage *image;
@property (retain, nonatomic, setter=_setImageURL:) NSURL *imageURL;
@property (retain, nonatomic, setter=_setImageUTI:) NSString *imageUTI;
@property (retain, nonatomic, setter=_setVideoComplementURL:) NSURL *videoComplementURL;
@property (nonatomic, setter=_setVideoComplementStillImageTime:) struct { long long value; int timescale; unsigned int flags; long long epoch; } videoComplementStillImageTime;
@property (nonatomic) struct { long long value; int timescale; unsigned int flags; long long epoch; } videoComplementOriginalStillImageTime;
@property (nonatomic, setter=_setVideoComplementDuration:) struct { long long value; int timescale; unsigned int flags; long long epoch; } videoComplementDuration;
@property (nonatomic, setter=_setRetrievedVersion:) long long retrievedVersion;
@property (nonatomic, setter=_setPenultimateAvailability:) long long penultimateAvailability;
@property (retain, nonatomic, setter=_setAsset:) id<PEAsset> asset;
@property (nonatomic, setter=_setAssetLoadingAsRaw:) BOOL assetLoadingAsRaw;
@property (retain, nonatomic, setter=_setContentEditingInput:) PHContentEditingInput *contentEditingInput;
@property (retain, nonatomic) NSURL *overcaptureImageURL;
@property (retain, nonatomic) NSURL *overcaptureVideoURL;
@property (retain, nonatomic) PICompositionController *adjustedSourceCompositionController;
@property (readonly, nonatomic, getter=isPenultimateAvailable) BOOL penultimateAvailable;

+ (id)resultWithContentEditingInput:(id)a0 asset:(id)a1 assetLoadingAsRaw:(BOOL)a2;

- (void).cxx_destruct;
- (id)overcaptureEditSource;

@end
