@class NSData;

@interface WBSPasswordBreachBloomFilter : NSObject {
    unsigned int _capacity;
    unsigned int _errorDenominator;
    unsigned int _hashCount;
    unsigned int _bucketCount;
    NSData *_bucketData;
}

@property (readonly, nonatomic) NSData *serializedRepresentation;

- (BOOL)containsLowercaseHexStringForData:(id)a0;
- (void).cxx_destruct;
- (void)addData:(id)a0;
- (id)description;
- (id)initWithSerializedRepresentation:(id)a0;
- (id)initWithCapacity:(unsigned int)a0 errorDenominator:(unsigned int)a1 bucketData:(id)a2;
- (void)_setBucketAtIndex:(unsigned int)a0 inBuffer:(char *)a1;
- (void)_enumerateBucketIndexesForData:(id)a0 withBlock:(id /* block */)a1;
- (BOOL)_getBucketAtIndex:(unsigned int)a0;
- (BOOL)containsData:(id)a0;

@end
