@class NSString, AVMetadataTextRegionObject, AVMetadataObject;

@interface CAMTextRegionResult : NSObject <CAMMetadataObjectResult>

@property (retain, nonatomic) AVMetadataTextRegionObject *_metadataTextRegionObject;
@property (readonly, nonatomic) float confidence;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } bounds;
@property (readonly, nonatomic) double baselineAngle;
@property (readonly, copy, nonatomic) NSString *metadataType;
@property (readonly, copy, nonatomic) NSString *uniqueIdentifier;
@property (readonly, nonatomic) AVMetadataObject *underlyingMetadataObject;
@property (readonly, nonatomic) unsigned long long syntheticFocusMode;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)initWithTextRegionObject:(id)a0;

@end
