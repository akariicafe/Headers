@class VN6Mb1ME89lyW3HpahkEygIG;

@interface AXMSignificantEventDetectorNode : AXMEvaluationNode {
    VN6Mb1ME89lyW3HpahkEygIG *_request;
}

+ (BOOL)supportsSecureCoding;
+ (BOOL)isSupported;
+ (id)title;
+ (BOOL)addSignificantEventResultToContext:(id)a0 forIdentifier:(id)a1 confidence:(double)a2 markAsSensitiveCaptionContent:(BOOL)a3;

- (void).cxx_destruct;
- (void)evaluate:(id)a0 metrics:(id)a1;
- (BOOL)validateVisionKitSoftLinkSymbols;

@end
