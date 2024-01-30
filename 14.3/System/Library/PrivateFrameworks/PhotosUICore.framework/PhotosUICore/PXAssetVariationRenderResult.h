@class NSURL, AVAsset, NSDictionary, UIImage, PICompositionController, NSError, AVVideoComposition;

@interface PXAssetVariationRenderResult : NSObject

@property (retain, nonatomic) UIImage *image;
@property (retain, nonatomic) AVAsset *videoAsset;
@property (retain, nonatomic) AVVideoComposition *videoComposition;
@property (nonatomic, getter=isFullsizeRender) BOOL fullsizeRender;
@property (readonly, nonatomic) long long variationType;
@property (readonly, copy, nonatomic) NSDictionary *analysisResult;
@property (readonly, nonatomic) BOOL success;
@property (readonly, copy, nonatomic) PICompositionController *compositionController;
@property (readonly, nonatomic) NSError *error;
@property (readonly, nonatomic) NSURL *imageURL;
@property (readonly, nonatomic) NSURL *videoURL;

- (id)init;
- (void).cxx_destruct;
- (id)description;
- (id)initWithVariationType:(long long)a0 imageURL:(id)a1 videoURL:(id)a2 analysisResult:(id)a3 compositionController:(id)a4 success:(BOOL)a5 error:(id)a6;

@end
