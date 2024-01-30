@interface WFLSMScoreNormalizedMap : WFLSMMap {
    float *maxScore;
    float *minScore;
}

- (id)initWithMap:(struct __LSMMap { } *)a0;
- (void)dealloc;
- (id)evaluate:(id)a0;

@end
