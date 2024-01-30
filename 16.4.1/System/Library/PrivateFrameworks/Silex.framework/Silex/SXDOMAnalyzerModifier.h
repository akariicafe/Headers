@class NSString;

@interface SXDOMAnalyzerModifier : NSObject <SXDOMModifying>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)analyzeButtonComponent:(id)a0 analysis:(id)a1;
- (void)analyzeComponents:(id)a0 parent:(id)a1 DOM:(id)a2;
- (void)analyzeDataTableCellStyle:(id)a0 component:(id)a1 analysis:(id)a2;
- (void)analyzeDataTableComponent:(id)a0 DOM:(id)a1;
- (void)analyzeDataTableStyle:(id)a0 component:(id)a1 analysis:(id)a2;
- (void)analyzeFormattedText:(id)a0 component:(id)a1 analysis:(id)a2;
- (void)analyzeGalleryComponent:(id)a0 analysis:(id)a1;
- (void)analyzeInlineTextStyle:(id)a0 component:(id)a1 analysis:(id)a2;
- (void)analyzeScalableImageComponent:(id)a0 analysis:(id)a1;
- (void)analyzeTextComponent:(id)a0 analysis:(id)a1;
- (void)modifyDOM:(id)a0 context:(id)a1;

@end
