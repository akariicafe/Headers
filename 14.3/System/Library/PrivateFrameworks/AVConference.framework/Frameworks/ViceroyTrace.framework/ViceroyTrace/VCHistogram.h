@interface VCHistogram : NSObject {
    unsigned int *_buckets;
    unsigned int _bucketCount;
}

@property (readonly) const unsigned int *ranges;

+ (const unsigned int *)bucketWithType:(int)a0 count:(unsigned int *)a1;
+ (id)rangesDescription:(int)a0;

- (BOOL)merge:(id)a0;
- (id)array;
- (void)addValue:(unsigned int)a0;
- (void)reset;
- (void)dealloc;
- (id)description;
- (id)initWithType:(int)a0 bucketValues:(id)a1;
- (void)addValue:(unsigned int)a0 withIncrement:(unsigned int)a1;
- (unsigned int)bucketValueAtIndex:(unsigned int)a0;

@end
