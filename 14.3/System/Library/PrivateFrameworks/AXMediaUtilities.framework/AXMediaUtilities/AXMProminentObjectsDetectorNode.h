@class VNGenerateAttentionBasedSaliencyImageRequest;

@interface AXMProminentObjectsDetectorNode : AXMEvaluationNode

@property (retain, nonatomic) VNGenerateAttentionBasedSaliencyImageRequest *_imageSaliencyRequest;

+ (BOOL)isSupported;
+ (BOOL)supportsSecureCoding;
+ (id)title;

- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)nodeInitialize;
- (BOOL)validateVisionKitSoftLinkSymbols;
- (void)evaluate:(id)a0 metrics:(id)a1;
- (BOOL)requiresVisionFramework;
- (void)encodeWithCoder:(id)a0;

@end
