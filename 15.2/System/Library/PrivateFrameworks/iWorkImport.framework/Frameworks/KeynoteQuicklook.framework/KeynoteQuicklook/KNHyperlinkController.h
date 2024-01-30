@interface KNHyperlinkController : NSObject

+ (id)uniqueIdentifierFromHyperlinkURL:(id)a0;
+ (unsigned long long)slideIndexForSlideLink:(id)a0 url:(id)a1;
+ (long long)hyperlinkTypeFromHyperlinkURL:(id)a0;
+ (BOOL)URLContainsKeynoteSpecificHyperlink:(id)a0;
+ (id)displayStringForSlideLink:(long long)a0 url:(id)a1 documentRoot:(id)a2;
+ (id)smartFieldForRep:(id)a0 atUnscaledPoint:(struct CGPoint { double x0; double x1; })a1 outRep:(id *)a2;
+ (BOOL)isExternalHyperlinkURL:(id)a0;
+ (BOOL)canProcessHyperlinkURLInRemote:(id)a0;

@end
