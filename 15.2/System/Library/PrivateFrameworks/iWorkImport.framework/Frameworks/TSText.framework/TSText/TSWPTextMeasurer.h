@interface TSWPTextMeasurer : NSObject

+ (double)heightForString:(id)a0 textMeasurerBundle:(id)a1 width:(double)a2 outFitWidth:(inout double *)a3;
+ (double)widthForString:(id)a0 textMeasurerBundle:(id)a1;
+ (BOOL)canQuicklyMeasureParagraphStyle:(id)a0;
+ (id)textMeasurerBundleForParagraphStyle:(id)a0;
+ (BOOL)canQuicklyMeasureString:(id)a0 textMeasurerBundle:(id)a1;

@end
