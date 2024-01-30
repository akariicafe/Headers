@class AVAssetWriterInput, AVAssetWriterInputMetadataAdaptorInternal;

@interface AVAssetWriterInputMetadataAdaptor : NSObject {
    AVAssetWriterInputMetadataAdaptorInternal *_internal;
}

@property (readonly, nonatomic) AVAssetWriterInput *assetWriterInput;

+ (void)initialize;
+ (id)assetWriterInputMetadataAdaptorWithAssetWriterInput:(id)a0;

- (id)init;
- (void)dealloc;
- (id)initWithAssetWriterInput:(id)a0;
- (BOOL)appendTimedMetadataGroup:(id)a0;
- (id)description;

@end
