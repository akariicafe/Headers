@interface PGCompleteEnrichmentProfile : PGDefaultEnrichmentProfile

+ (long long)cardinalModeForSummary;
+ (unsigned long long)durationForSummary;

- (id)identifier;
- (BOOL)canEnrichHighlight:(id)a0 withOptions:(unsigned long long)a1;
- (id)curationOptions;
- (unsigned short)targetEnrichmentState;

@end
