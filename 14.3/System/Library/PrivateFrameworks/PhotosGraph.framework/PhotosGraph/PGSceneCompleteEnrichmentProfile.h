@interface PGSceneCompleteEnrichmentProfile : PGDefaultEnrichmentProfile

+ (unsigned long long)durationForSummary;
+ (long long)cardinalModeForSummary;

- (id)curationOptions;
- (unsigned short)targetEnrichmentState;
- (BOOL)canEnrichHighlight:(id)a0 withOptions:(unsigned long long)a1;
- (id)identifier;

@end
