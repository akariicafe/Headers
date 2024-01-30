@interface RMDMersenneTwisterRandomSource : RMDRandomSource {
    unsigned long long _seed;
    struct mersenne_twister_engine<unsigned long long, 64, 312, 156, 31, 13043109905998158313, 29, 6148914691236517205, 17, 8202884508482404352, 37, 18444473444759240704, 43, 6364136223846793005> { unsigned long long __x_[312]; unsigned long long __i_; } _engine;
}

@property (nonatomic) unsigned long long seed;

- (void)encodeWithCoder:(id)a0;
- (id)initWithSeed:(unsigned long long)a0;
- (unsigned long long)nextIntWithUpperBound:(unsigned long long)a0;
- (long long)nextInt;
- (id)init;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)nextBool;
- (id).cxx_construct;
- (unsigned long long)nextBits:(int)a0;
- (float)nextUniform;

@end
