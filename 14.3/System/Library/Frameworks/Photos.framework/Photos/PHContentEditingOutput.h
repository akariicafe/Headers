@class NSURL, NSData, NSNumber, PHAdjustmentData;

@interface PHContentEditingOutput : NSObject <NSSecureCoding> {
    PHAdjustmentData *_adjustmentData;
    long long _baseVersion;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property long long baseVersion;
@property (retain, nonatomic) NSNumber *originalResourceChoice;
@property (nonatomic) BOOL isSubstandardRender;
@property (nonatomic) long long fullSizeRenderWidth;
@property (nonatomic) long long fullSizeRenderHeight;
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
@property (retain) PHAdjustmentData *adjustmentData;

+ (id)renderURLWithExtensionForMediaType:(long long)a0;
+ (id)renderURLWithExtensionForMediaType:(long long)a0 useHEICImage:(BOOL)a1;
+ (unsigned long long)maximumAdjustmentDataLength;
+ (id)outputForFlippingFullSizeRenderWithContentEditingInput:(id)a0 error:(id *)a1;

- (void).cxx_destruct;
- (void)setRenderedJPEGData:(id)a0;
- (id)initWithContentEditingInput:(id)a0;
- (id)initWithContentEditingInput:(id)a0 withOptions:(id)a1;
- (id)initWithPlaceholderForCreatedAsset:(id)a0;
- (id)initWithAdjustmentBaseVersion:(long long)a0 mediaType:(long long)a1;
- (id)renderURLWithExtensionForMediaType:(long long)a0;
- (void)clearRenderedContentURL;
- (id)assetAdjustmentsWithEditorBundleID:(id)a0;
- (BOOL)isOnlyChangingOriginalChoice;
- (void)_setupRequiredRenderedContentURLsWithEditingInput:(id)a0 options:(id)a1;
- (id)initWithCoder:(id)a0;
- (id)description;
- (id)debugDescription;
- (void)encodeWithCoder:(id)a0;

@end
