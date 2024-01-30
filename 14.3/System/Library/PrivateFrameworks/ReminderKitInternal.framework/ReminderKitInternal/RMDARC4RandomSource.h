@class NSData;

@interface RMDARC4RandomSource : RMDRandomSource {
    struct Arc4State { unsigned int x0; unsigned int x1; char *x2; } *_state;
    NSData *_seed;
}

@property (copy, nonatomic) NSData *seed;

- (id)init;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)dealloc;
- (id)initWithCoder:(id)a0;
- (long long)nextInt;
- (unsigned long long)nextBits:(int)a0;
- (float)nextUniform;
- (void)dropValuesWithCount:(unsigned long long)a0;
- (BOOL)nextBool;
- (unsigned long long)nextIntWithUpperBound:(unsigned long long)a0;
- (id)initWithSeed:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
