@class CATIBitVector;

@interface CATIBloomFilter : NSObject {
    unsigned char murmurHash[16];
    CATIBitVector *bitVector;
    unsigned long long _numberOfBits;
    unsigned long long _numberHashes;
}

@property (readonly) unsigned int seed;
@property (readonly) unsigned long long expectedNumberOfItems;
@property (readonly) double falsePositiveRate;

- (void)add:(id)a0;
- (void).cxx_destruct;
- (BOOL)contains:(id)a0;
- (id)initWithExceptedNumberOfItems:(unsigned long long)a0 falsePositiveRate:(double)a1 seed:(unsigned int)a2;

@end
