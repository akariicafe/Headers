@interface CDMSpanMatchUtils : NSObject

+ (BOOL)isSamePosition:(id)a0 spanB:(id)a1 asrMapA:(id)a2 asrMapB:(id)a3 cdmTokenChainA:(id)a4 cdmTokenChainB:(id)a5;
+ (void)mergeAsrAlternativeIntoSpan:(id)a0 asrAltSpan:(id)a1 asrAltCdmTokenChain:(id)a2 asrAltHypothesis:(id)a3 asrAltTimingMap:(id)a4;
+ (void)addAsrConfidenceToSpans:(id)a0 tokenChain:(id)a1 asrTimingMap:(id)a2 asrHypothesis:(id)a3;
+ (BOOL)matcherNameIsSupportedForAsrAlternative:(id)a0;
+ (double)calculateAsrConfidenceForCharIndexBegin:(long long)a0 charIndexEnd:(long long)a1 asrTimingMap:(id)a2 asrHypothesis:(id)a3;
+ (id)createAsrAlternativeIdentifier:(id)a0 nameSpace:(id)a1 nodeIndex:(unsigned int)a2 backingAppBundleId:(id)a3 sourceComponent:(int)a4 asrConfidence:(double)a5;

@end
