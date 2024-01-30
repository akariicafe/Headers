@class NSData;

@interface _PASBloomFilter : NSObject {
    void /* function */ *_computeHashes;
    NSData *_data;
    unsigned int _numBits;
    int _numHashFunctions;
    int _hashArrayLength;
}

+ (id)bloomFilterWithData:(id)a0;
+ (id)bloomFilterWithPathToFile:(id)a0;

- (int)numHashes;
- (void).cxx_destruct;
- (id)init;
- (BOOL)getWithHashes:(id)a0;
- (id)initDummy;
- (id)initWithData:(id)a0 numBits:(unsigned int)a1 hashFunctionCode:(unsigned int)a2 numHashFunctions:(int)a3;
- (id)newHashesArray;
- (id)computeHashesForString:(id)a0 reuse:(id)a1;
- (id)computeHashesWithSeed:(int)a0 forData:(id)a1 reuse:(id)a2;
- (id)_computeHashesWithSeed:(int)a0 bytes:(const void *)a1 length:(unsigned long long)a2 reuse:(id)a3;
- (id)combineHashesWithSeed:(int)a0 hashA:(id)a1 hashB:(id)a2 reuse:(id)a3;

@end
