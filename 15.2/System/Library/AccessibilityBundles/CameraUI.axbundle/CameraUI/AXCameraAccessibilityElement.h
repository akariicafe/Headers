@class NSString, AXMCameraFrameContext, AXMVisionFeatureFaceAttributes;

@interface AXCameraAccessibilityElement : UIAccessibilityElement

@property (readonly, nonatomic) NSString *_subjectDescription;
@property (nonatomic) unsigned long long featureType;
@property (nonatomic) long long location;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } normalizedFrame;
@property (nonatomic) double confidence;
@property (retain, nonatomic) AXMCameraFrameContext *cameraFrameContext;
@property (readonly, nonatomic) BOOL isFace;
@property (readonly, nonatomic) BOOL isProminentObject;
@property (readonly, nonatomic) BOOL isObjectClassification;
@property (readonly, nonatomic) BOOL isPerson;
@property (copy, nonatomic) NSString *faceName;
@property (retain, nonatomic) AXMVisionFeatureFaceAttributes *faceAttributes;
@property (nonatomic) long long faceID;
@property (copy, nonatomic) NSString *classificationLocalizedValue;
@property (copy, nonatomic) NSString *classificationLabel;
@property (nonatomic) BOOL didCrossEdge;
@property (nonatomic) BOOL didReuse;

- (id)description;
- (void).cxx_destruct;
- (id)accessibilityLabel;

@end
