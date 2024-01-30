@class NSString, AVMetadataVideoPreviewHistogramObject, AVMetadataObject;

@interface CAMHistogramResult : NSObject <CAMMetadataObjectResult>

@property (retain, nonatomic) AVMetadataVideoPreviewHistogramObject *_metadataHistogramObject;
@property (readonly, nonatomic) double shadowClipping;
@property (readonly, nonatomic) double highlightClipping;
@property (readonly, copy, nonatomic) NSString *metadataType;
@property (readonly, copy, nonatomic) NSString *uniqueIdentifier;
@property (readonly, nonatomic) AVMetadataObject *underlyingMetadataObject;
@property (readonly, nonatomic) unsigned long long syntheticFocusMode;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)initWithHistogramObject:(id)a0 forDeviceFormat:(id)a1;

@end
