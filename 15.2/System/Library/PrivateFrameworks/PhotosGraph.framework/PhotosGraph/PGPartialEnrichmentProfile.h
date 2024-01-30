@interface PGPartialEnrichmentProfile : PGDefaultEnrichmentProfile

- (id)identifier;
- (unsigned short)targetEnrichmentState;
- (BOOL)canEnrichHighlight:(id)a0 withOptions:(unsigned long long)a1;

@end
