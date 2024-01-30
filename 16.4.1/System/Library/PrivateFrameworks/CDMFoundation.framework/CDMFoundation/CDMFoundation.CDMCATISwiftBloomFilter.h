@class NSString;

@interface CDMFoundation.CDMCATISwiftBloomFilter : NSObject {
    void /* unknown type, empty encoding */ bitVector;
    void /* unknown type, empty encoding */ numberOfBits;
    void /* unknown type, empty encoding */ numberOfHashes;
    void /* unknown type, empty encoding */ seed;
    void /* unknown type, empty encoding */ expectedNumberOfItems;
    void /* unknown type, empty encoding */ numberOfItems;
    void /* unknown type, empty encoding */ name;
    void /* unknown type, empty encoding */ expectedItemsBuffer;
}

@property (nonatomic, readonly) void /* unknown type, empty encoding */ falsePositiveRate;
@property (nonatomic, copy) NSString *name;

- (id)init;
- (void).cxx_destruct;
- (BOOL)containsWithData:(id)a0;

@end
