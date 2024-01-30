@class AXMSemanticTextFactory, AXMTextLayoutManager;

@interface AXMTextDetectorNode : AXMEvaluationNode <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) AXMSemanticTextFactory *semanticTextFactory;
@property (retain, nonatomic) AXMTextLayoutManager *textLayoutManager;

+ (BOOL)isSupported;
+ (long long)recognitionLevelFromOptions:(id)a0;
+ (id)textDetectionLanguagesFromOptions:(id)a0;
+ (id)supportedDetectionLanguagesForLevel:(long long)a0;
+ (id)filterPreferredDetectionLanguages:(id)a0 withSupportedDetectionLanguages:(id)a1;
+ (id)effectiveLanguagesFromOptions:(id)a0;
+ (id)title;

- (void).cxx_destruct;
- (void)nodeInitialize;
- (BOOL)validateVisionKitSoftLinkSymbols;
- (void)evaluate:(id)a0 metrics:(id)a1;
- (BOOL)requiresVisionFramework;
- (id)_textDetectionOptions:(id)a0;
- (id)_textsForObservations:(id)a0;
- (BOOL)shouldEvaluate:(id)a0;

@end
