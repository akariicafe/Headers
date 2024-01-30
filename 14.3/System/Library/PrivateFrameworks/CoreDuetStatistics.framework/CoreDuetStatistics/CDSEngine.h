@interface CDSEngine : NSObject

+ (id)valueStatistic:(long long)a0 fromBasisObjects:(id)a1 error:(id *)a2;
+ (id)durationStatistic:(long long)a0 fromBasisObjects:(id)a1 error:(id *)a2;
+ (id)interArrivalStatistic:(long long)a0 fromBasisObjects:(id)a1 error:(id *)a2;
+ (id)canonicalizeBasisObjectSequence:(id)a0 error:(id *)a1;

- (BOOL)injestBasisObjects:(id)a0 error:(id *)a1;
- (double)occurrenceCoevalityCorrelationOfAttributeId:(unsigned long long)a0 toAttributeId:(unsigned long long)a1 coevalityLeewaySeconds:(double)a2 error:(id *)a3;
- (double)occurrenceOrderingCorrelationOfAttributeId:(unsigned long long)a0 toAttributeId:(unsigned long long)a1 orderingGapLeewaySeconds:(double)a2 error:(id *)a3;
- (double *)copyRangeCoevalityCorrelationMatrixOfAttributeId:(unsigned long long)a0 toAttributeId:(unsigned long long)a1 coevalityLeewaySeconds:(double)a2 error:(id *)a3;
- (double *)copyRangeOrderingCorrelationMatrixOfAttributeId:(unsigned long long)a0 toAttributeId:(unsigned long long)a1 orderingGapLeewaySeconds:(double)a2 error:(id *)a3;
- (id)cachedAttributeIds;
- (double *)copyOccurrenceCoevalityCorrelationMatrixWithCoevalityLeewaySeconds:(double)a0 writeAttributeCount:(unsigned long long *)a1 error:(id *)a2;
- (double *)copyOccurrenceOrderingCorrelationMatrixWithOrderingGapLeewaySeconds:(double)a0 writeAttributeCount:(unsigned long long *)a1 error:(id *)a2;
- (double *)copyRangeCoevalityCorrelationMatrixWithCoevalityLeewaySeconds:(double)a0 writeAttributeCount:(unsigned long long *)a1 error:(id *)a2;
- (double *)copyRangeOrderingCorrelationMatrixWithOrderingGapLeewaySeconds:(double)a0 writeAttributeCount:(unsigned long long *)a1 error:(id *)a2;
- (double *)copyPrincipalOccurrenceCoevalityComponentsWithCoevalityLeewaySeconds:(double)a0 writeAttributeCount:(unsigned long long *)a1 writeAttributeIds:(unsigned long long **)a2 error:(id *)a3;
- (double *)copyPrincipalOccurrenceOrderingComponentsWithOrderingGapLeewaySeconds:(double)a0 writeAttributeCount:(unsigned long long *)a1 writeAttributeIds:(unsigned long long **)a2 error:(id *)a3;
- (double *)copyPrincipalRangeCoevalityComponentsWithCoevalityLeewaySeconds:(double)a0 writeAttributeCount:(unsigned long long *)a1 writeAttributeIds:(unsigned long long **)a2 writeStatisticTypes:(long long **)a3 error:(id *)a4;
- (double *)copyPrincipalRangeOrderingComponentsWithOrderingGapLeewaySeconds:(double)a0 writeAttributeCount:(unsigned long long *)a1 writeAttributeIds:(unsigned long long **)a2 writeStatisticTypes:(long long **)a3 error:(id *)a4;
- (id)valueStatistic:(long long)a0 forAttributeId:(unsigned long long)a1 error:(id *)a2;
- (id)durationStatistic:(long long)a0 forAttributeId:(unsigned long long)a1 error:(id *)a2;
- (id)interArrivalStatistic:(long long)a0 forAttributeId:(unsigned long long)a1 error:(id *)a2;

@end
