@interface AXMBrailleEdgesDetectorNode : AXMEvaluationNode

+ (BOOL)supportsSecureCoding;
+ (id)title;
+ (BOOL)isSupported;

- (void)evaluate:(id)a0 metrics:(id)a1;
- (unsigned char)_mapLuminance:(double)a0 toDiscreteNumber:(unsigned long long)a1 invert:(BOOL)a2;
- (id)_processImage:(id)a0 analaysisOptions:(id)a1;
- (id)_generateResultFromImage:(id)a0 canvasDescription:(id)a1 invert:(BOOL)a2;

@end
