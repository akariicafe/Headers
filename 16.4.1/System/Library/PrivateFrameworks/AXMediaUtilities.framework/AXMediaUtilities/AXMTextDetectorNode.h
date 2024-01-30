@class AXMSemanticTextFactory, NSArray, AXMTextSpecialCase, AXMTextLayoutManager;

@interface AXMTextDetectorNode : AXMEvaluationNode <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) AXMSemanticTextFactory *semanticTextFactory;
@property (retain, nonatomic) AXMTextLayoutManager *textLayoutManager;
@property (retain, nonatomic) AXMTextSpecialCase *specialCaseManager;
@property (retain, nonatomic) NSArray *sceneLabelsForOCRDocumentTypeDetection;

+ (BOOL)isSupported;
+ (id)title;
+ (id)effectiveLanguagesFromOptions:(id)a0;
+ (id)filterPreferredDetectionLanguages:(id)a0 withSupportedDetectionLanguages:(id)a1;
+ (long long)recognitionLevelFromOptions:(id)a0;
+ (id)supportedDetectionLanguagesForLevel:(long long)a0;
+ (id)textDetectionLanguagesFromOptions:(id)a0;

- (void).cxx_destruct;
- (BOOL)shouldEvaluate:(id)a0;
- (double)detectTextSkew:(id)a0;
- (id)_sequencesForObservations:(id)a0 canvasSize:(struct CGSize { double x0; double x1; })a1;
- (id)_textDetectionOptions:(id)a0;
- (void)evaluate:(id)a0 metrics:(id)a1;
- (void)nodeInitialize;
- (BOOL)requiresVisionFramework;
- (BOOL)validateVisionKitSoftLinkSymbols;

@end
