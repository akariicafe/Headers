@interface WFLSMScoreNormalizedMap : WFLSMMap {
    float *maxScore;
    float *minScore;
}

- (id)evaluate:(id)a0;
- (void)dealloc;
- (id)initWithMap:(struct __LSMMap { } *)a0;

@end
