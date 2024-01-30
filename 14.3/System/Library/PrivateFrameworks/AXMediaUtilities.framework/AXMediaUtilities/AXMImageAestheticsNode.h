@class VNClassifyImageAestheticsRequest;

@interface AXMImageAestheticsNode : AXMEvaluationNode

@property (retain, nonatomic) VNClassifyImageAestheticsRequest *_imageAestheticsRequest;

+ (BOOL)isSupported;
+ (BOOL)supportsSecureCoding;
+ (id)title;

- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (BOOL)validateVisionKitSoftLinkSymbols;
- (void)evaluate:(id)a0 metrics:(id)a1;
- (void)encodeWithCoder:(id)a0;

@end
