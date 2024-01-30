@class PHAdjustmentData, NSString, NSURL, NSData, NSNumber, PHContentEditingOutputRequestOptions;

@interface PHContentEditingOutput : NSObject <NSSecureCoding> {
    PHAdjustmentData *_adjustmentData;
    long long _baseVersion;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) PHContentEditingOutputRequestOptions *requestOptions;
@property long long baseVersion;
@property (retain, nonatomic) NSNumber *originalResourceChoice;
@property (nonatomic) BOOL isSubstandardRender;
@property (nonatomic) long long fullSizeRenderWidth;
@property (nonatomic) long long fullSizeRenderHeight;
@property (nonatomic) double fullSizeRenderDuration;
@property (copy) NSURL *renderedContentURL;
@property (retain) NSData *penultimateRenderedJPEGData;
@property (copy) NSURL *penultimateRenderedVideoContentURL;
@property (copy) NSURL *renderedVideoPosterURL;
@property (copy) NSURL *renderedVideoComplementContentURL;
@property (copy) NSURL *penultimateRenderedVideoComplementContentURL;
@property (retain) NSURL *editorBundleURL;
@property (readonly) long long mediaType;
@property (readonly, getter=isLoopingLivePhoto) BOOL loopingLivePhoto;
@property (retain, nonatomic) NSURL *renderedPreviewContentURL;
@property (nonatomic) BOOL isAsyncAdjustment;
@property (retain, nonatomic) NSNumber *playbackVariation;
@property (retain, nonatomic) NSNumber *videoDuration;
@property (retain, nonatomic) NSNumber *reframeVariation;
@property (copy, nonatomic) NSString *accessibilityDescription;
@property (retain) PHAdjustmentData *adjustmentData;

+ (id)imageRenderURLUsingHEICFormat:(BOOL)a0;
+ (unsigned long long)maximumAdjustmentDataLength;
+ (id)outputForFlippingFullSizeRenderWithContentEditingInput:(id)a0 error:(id *)a1;
+ (id)renderURLWithExtensionForMediaType:(long long)a0;
+ (id)renderURLWithExtensionForMediaType:(long long)a0 useHEICImage:(BOOL)a1;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)debugDescription;
- (id)description;
- (void).cxx_destruct;
- (void)_setupRequiredRenderedContentURLsWithEditingInput:(id)a0 options:(id)a1;
- (id)assetAdjustmentsWithEditorBundleID:(id)a0;
- (void)clearRenderedContentURL;
- (id)initWithAdjustmentBaseVersion:(long long)a0 mediaType:(long long)a1;
- (id)initWithContentEditingInput:(id)a0;
- (id)initWithContentEditingInput:(id)a0 withOptions:(id)a1;
- (id)initWithPlaceholderForCreatedAsset:(id)a0;
- (BOOL)isOnlyChangingOriginalChoice;
- (id)renderURLWithExtensionForMediaType:(long long)a0;
- (void)setRenderedJPEGData:(id)a0;
- (BOOL)shouldPreferHEICForRenderedImages;

@end
