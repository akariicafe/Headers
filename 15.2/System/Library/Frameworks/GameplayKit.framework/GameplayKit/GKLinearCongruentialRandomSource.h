@interface GKLinearCongruentialRandomSource : GKRandomSource {
    unsigned long long _seed;
}

@property (nonatomic) unsigned long long seed;

+ (BOOL)supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (id)initWithSeed:(unsigned long long)a0;
- (unsigned long long)nextIntWithUpperBound:(unsigned long long)a0;
- (long long)nextInt;
- (id)init;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)nextBool;
- (unsigned long long)nextBits:(int)a0;
- (float)nextUniform;

@end
