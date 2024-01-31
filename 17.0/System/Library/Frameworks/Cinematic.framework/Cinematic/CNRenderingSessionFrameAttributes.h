@class PTTimedRenderingMetadata;

@interface CNRenderingSessionFrameAttributes : NSObject <NSCopying, NSMutableCopying>

@property (readonly) PTTimedRenderingMetadata *internalMetadata;
@property (readonly) long long majorVersion;
@property (readonly) long long minorVersion;
@property (readonly) float originalFocusDisparity;
@property (readonly) float originalFNumber;
@property float focusDisparity;
@property float fNumber;

- (void).cxx_destruct;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)_initJustWithPTTimedRenderingMetadata:(id)a0;
- (id)_initWithPTTimedRenderingMetadata:(id)a0;
- (id)_initWithTimedData:(id)a0 sessionAttributes:(id)a1;
- (id)initWithSampleBuffer:(struct opaqueCMSampleBuffer { } *)a0 sessionAttributes:(id)a1;
- (id)initWithTimedMetadataGroup:(id)a0 sessionAttributes:(id)a1;

@end
