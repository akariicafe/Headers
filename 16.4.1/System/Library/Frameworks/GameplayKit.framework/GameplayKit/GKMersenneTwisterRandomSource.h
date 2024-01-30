@interface GKMersenneTwisterRandomSource : GKRandomSource {
    unsigned long long _seed;
    struct mersenne_twister_engine<unsigned long long, 64UL, 312UL, 156UL, 31UL, 13043109905998158313ULL, 29UL, 6148914691236517205ULL, 17UL, 8202884508482404352ULL, 37UL, 18444473444759240704ULL, 43UL, 6364136223846793005ULL> { unsigned long long __x_[312]; unsigned long long __i_; } _engine;
}

@property (nonatomic) unsigned long long seed;

+ (BOOL)supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (id).cxx_construct;
- (id)initWithCoder:(id)a0;
- (id)initWithSeed:(unsigned long long)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (unsigned long long)nextIntWithUpperBound:(unsigned long long)a0;
- (long long)nextInt;
- (unsigned long long)nextBits:(int)a0;
- (BOOL)nextBool;
- (float)nextUniform;

@end
