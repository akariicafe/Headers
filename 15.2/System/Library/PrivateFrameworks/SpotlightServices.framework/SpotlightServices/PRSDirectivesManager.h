@class NSMutableIndexSet, NSMutableDictionary, PRSL2FeatureVectorProcessingContext;

@interface PRSDirectivesManager : NSObject {
    int indexOfAsIs;
    int indexOfAsIsRange;
    int indexOfReplaceIf;
    int indexOfReplaceThenMin;
    int indexOfIsPopulated;
    int indexOfIdMapping;
    int indexOfResultSetIdMapping;
    int indexOfResultSetIdScoreMapping;
    int indexOfValueIfNotExist;
    int indexOfOneSidedInverse;
    int indexOfQuantize;
    int indexOfFanOutValue;
    int sizeOfAsIs;
    int sizeOfAsIsRange;
    int sizeOfReplaceIf;
    int sizeOfReplaceThenMin;
    int sizeOfIsPopulated;
    int sizeOfIdMapping;
    int sizeOfResultSetIdMapping;
    int sizeOfResultSetIdScoreMapping;
    int sizeOfValueIfNotExist;
    int sizeOfOneSidedInverse;
    int sizeOfQuantize;
    int sizeOfFanOutValue;
    struct _as_is { unsigned long long x0; unsigned long long x1; } *directive_as_is;
    struct _as_is_range { unsigned long long x0; unsigned long long x1; unsigned long long x2; } *directive_as_is_range;
    struct _replace_if { unsigned long long x0; unsigned long long x1; float x2[2]; float x3[2]; unsigned long long x4; } *directive_replace_if;
    struct _replace_then_min { unsigned long long x0; unsigned long long x1; float x2[5]; float x3[5]; float x4; unsigned long long x5; } *directive_replace_then_min;
    struct _value_if_not_exist { unsigned long long x0; unsigned long long x1; float x2; } *directive_value_if_not_exist;
    struct _is_populated { unsigned long long x0; unsigned long long x1; float x2[5]; float x3[5]; unsigned long long x4; } *directive_is_populated;
    struct _id_mapping { unsigned long long x0; unsigned long long x1; union { struct __CFDictionary *x0; int x1[5]; } x2; char *x3; } *directive_id_mapping;
    struct _resultset_id_mapping { unsigned long long x0; unsigned long long x1; union { struct __CFDictionary *x0; int x1[5]; } x2; char *x3; float *x4; } *directive_resultset_id_mapping;
    struct _resultset_id_score_mapping { unsigned long long x0; unsigned long long x1; union { struct __CFDictionary *x0; int x1[5]; } x2; struct __CFDictionary *x3; char *x4; float *x5; } *directive_resultset_id_score_mapping;
    struct _one_sided_inverse { unsigned long long x0; unsigned long long x1; } *directive_one_sided_inverse;
    struct _quantize { unsigned long long x0; unsigned long long x1; float *x2; unsigned long long x3; } *directive_quantize;
    struct fan_out_value { unsigned long long x0; unsigned long long x1; } *directive_fan_out;
    struct _local_resultset_id_values_mapping { unsigned long long start_idx; unsigned long long end_idx; struct __CFDictionary *mapping; unsigned long long numPRSRankingBundleFeatures; unsigned long long *PRSRankingBundleFeatureOrder; id /* block */ *PRSRankingBundleFeaturePickers; float *score_vector; unsigned long long mapSize; } directive_local_resultset_id_values_mapping;
    struct _parsec_resultset_id_values_mapping { unsigned long long start_idx; unsigned long long end_idx; unsigned long long numFeatures; struct __CFDictionary *mapping; id /* block */ *PRSRankingBundleFeaturePickers; float *score_vector; unsigned long long mapSize; } directive_parsec_resultset_id_values_mapping;
    NSMutableIndexSet *disabledFeatureIndices;
    NSMutableDictionary *mapInflatedIndexToSize;
}

@property (retain, nonatomic) PRSL2FeatureVectorProcessingContext *processingContext;
@property (nonatomic) double weightX;
@property (nonatomic) double weightY;

+ (void)initialize;

- (void)cleanup;
- (void)getAllDirectivesArraysForTesting:(void *)a0;
- (void)processResultSetValuesWithMap:(id)a0 serverFeatures:(id)a1;
- (unsigned long long)getDirectiveTypeFromString:(id)a0;
- (void)processDirectives:(id)a0;
- (void).cxx_destruct;
- (void)processL2FeatureVector:(id)a0 populatingValues:(float *)a1 scoreValue:(char *)a2 count:(int)a3;
- (id)init;
- (void)dealloc;

@end
