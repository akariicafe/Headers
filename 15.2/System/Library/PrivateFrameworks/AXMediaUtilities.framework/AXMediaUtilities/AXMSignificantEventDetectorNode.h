@class VN6Mb1ME89lyW3HpahkEygIG;

@interface AXMSignificantEventDetectorNode : AXMEvaluationNode {
    VN6Mb1ME89lyW3HpahkEygIG *_request;
}

+ (BOOL)supportsSecureCoding;
+ (id)title;
+ (BOOL)isSupported;
+ (BOOL)addSignificantEventResultToContext:(id)a0 forIdentifier:(id)a1 confidence:(double)a2 markAsSensitiveCaptionContent:(BOOL)a3;

- (void).cxx_destruct;
- (BOOL)validateVisionKitSoftLinkSymbols;
- (void)evaluate:(id)a0 metrics:(id)a1;

@end
