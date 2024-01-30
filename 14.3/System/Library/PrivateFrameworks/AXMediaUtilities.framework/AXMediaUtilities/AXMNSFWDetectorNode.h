@class VNVYvzEtX1JlUdu8xx5qhDI;

@interface AXMNSFWDetectorNode : AXMEvaluationNode {
    VNVYvzEtX1JlUdu8xx5qhDI *_request;
}

+ (BOOL)isSupported;
+ (BOOL)supportsSecureCoding;
+ (BOOL)addNSFWResultToContext:(id)a0 forIdentifier:(id)a1 confidence:(double)a2 markAsSensitiveCaptionContent:(BOOL)a3;
+ (id)title;

- (void).cxx_destruct;
- (BOOL)validateVisionKitSoftLinkSymbols;
- (void)evaluate:(id)a0 metrics:(id)a1;

@end
