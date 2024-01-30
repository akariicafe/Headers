@interface WFPostprocessor : NSObject

+ (id)lightweightStripHTMLTags:(id)a0;
+ (id)normalizeStrippedHTML:(id)a0;
+ (struct _NSRange { unsigned long long x0; unsigned long long x1; })rangeOfFirstHTMLTag:(id)a0 searchRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;
+ (id)lightweightStripHTMLTagsForLine:(id)a0;
+ (id)postprocessPlainTextWebPage:(id)a0;
+ (id)adultWebSiteTagging:(id)a0;

@end
