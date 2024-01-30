@interface MSVBloomFilter : NSObject <NSSecureCoding> {
    struct __CFBitVector { } *_vector;
    long long _vectorCapacity;
    unsigned long long _murmurSeed;
    long long _hashCount;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) long long capacity;
@property (readonly, nonatomic) float falsePositiveTolerance;
@property (readonly, nonatomic) float falsePositiveProbability;
@property (readonly, nonatomic) long long estimatedCount;

- (void)addObject:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCapacity:(long long)a0 falsePositiveTolerance:(float)a1 murmurSeed:(unsigned long long)a2;
- (id)initWithCoder:(id)a0;
- (id)initWithCapacity:(long long)a0 falsePositiveTolerance:(float)a1;
- (id)_vectorIndexSetForObject:(id)a0;
- (void)dealloc;
- (id)description;
- (unsigned long long)_murmur2HashObject:(id)a0;
- (unsigned long long)_fnvHashObject:(id)a0;
- (BOOL)containsObject:(id)a0;

@end
