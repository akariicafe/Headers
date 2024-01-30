@interface VCHistogram2D : VCHistogram {
    unsigned int **_buckets2D;
}

- (void)dealloc;
- (id)description;
- (void)reset;
- (void)addValue:(unsigned int)a0 withArray:(id)a1;
- (id)initWithType:(int)a0 bucketValues:(id)a1;

@end
