@class NSError, NSURL, UIImage, NSDictionary, PLLivePhotoEditSource, PICompositionController, NSProgress, AVVideoComposition, NSNumber, AVAsset;

@interface PXAssetVariationRenderingOperation : NSOperation

@property (readonly, nonatomic) long long variationType;
@property (readonly, nonatomic) PLLivePhotoEditSource *editSource;
@property (readonly, nonatomic) PLLivePhotoEditSource *overcaptureEditSource;
@property (readonly, copy, nonatomic) NSDictionary *analysisResult;
@property (readonly, copy, nonatomic) PICompositionController *baseCompositionController;
@property (readonly, nonatomic) struct CGSize { double width; double height; } targetSize;
@property (readonly, nonatomic) BOOL renderAllResources;
@property (copy, nonatomic) id /* block */ startHandler;
@property (readonly, nonatomic) NSURL *outputImageURL;
@property (readonly, nonatomic) UIImage *outputImage;
@property (readonly, nonatomic) NSURL *outputVideoURL;
@property (readonly, copy, nonatomic) PICompositionController *adjustedCompositionController;
@property (readonly, nonatomic) AVAsset *outputAVAsset;
@property (readonly, nonatomic) AVVideoComposition *outputVideoComposition;
@property (readonly, nonatomic) NSProgress *progress;
@property (readonly, nonatomic) BOOL succeeded;
@property (readonly, nonatomic) NSError *error;
@property (readonly, nonatomic) NSNumber *duration;

- (void)_timeout;
- (void)main;
- (void).cxx_destruct;
- (id)init;
- (void)cancel;
- (id)initWithEditSource:(id)a0 overcaptureEditSource:(id)a1 variationType:(long long)a2 analysisResult:(id)a3 baseCompositionController:(id)a4 outputImageURL:(id)a5 outputVideoURL:(id)a6 targetSize:(struct CGSize { double x0; double x1; })a7 renderAllResources:(BOOL)a8;
- (void)_incrementProgressWithStartDate:(id)a0;

@end
