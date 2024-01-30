@interface PGSceneCompleteEnrichmentProfile : PGDefaultEnrichmentProfile

+ (unsigned long long)durationForSummary;
+ (long long)cardinalModeForSummary;

- (id)identifier;
- (id)curationOptions;
- (unsigned short)targetEnrichmentState;
- (BOOL)canEnrichHighlight:(id)a0 withOptions:(unsigned long long)a1;

@end
