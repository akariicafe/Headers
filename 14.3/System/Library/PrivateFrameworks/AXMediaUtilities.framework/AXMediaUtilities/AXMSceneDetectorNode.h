@class NSArray, VNSceneClassificationRequest;

@interface AXMSceneDetectorNode : AXMEvaluationNode

@property (class, readonly, nonatomic) NSArray *possibleSceneClassifications;

@property (retain, nonatomic, setter=_setSceneClassificationRequest:) VNSceneClassificationRequest *_sceneClassificationRequest;
@property (nonatomic) unsigned int taxonomyOptions;

+ (BOOL)isSupported;
+ (BOOL)supportsSecureCoding;
+ (id)title;

- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (BOOL)validateVisionKitSoftLinkSymbols;
- (void)evaluate:(id)a0 metrics:(id)a1;
- (void)encodeWithCoder:(id)a0;

@end
