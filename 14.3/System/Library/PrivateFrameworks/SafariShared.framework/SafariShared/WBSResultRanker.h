@interface WBSResultRanker : NSObject

+ (BOOL)allowLooserMatching:(id)a0;
+ (id)filterOutUnlikelyMatchesFromMatches:(id)a0 forQuery:(id)a1 rewrittenQuery:(id)a2;

@end
