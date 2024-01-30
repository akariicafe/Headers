@interface KNHLController : NSObject

+ (id)uniqueIdentifierFromHyperlinkURL:(id)a0;
+ (long long)hyperlinkTypeFromHyperlinkURL:(id)a0;
+ (BOOL)URLContainsKeynoteSpecificHyperlink:(id)a0;
+ (id)smartFieldForRep:(id)a0 atUnscaledPoint:(struct CGPoint { double x0; double x1; })a1 outRep:(id *)a2;
+ (BOOL)isExternalHyperlinkURL:(id)a0;

@end
