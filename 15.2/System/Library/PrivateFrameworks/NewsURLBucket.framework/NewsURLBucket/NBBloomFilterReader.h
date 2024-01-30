@class NBObjCBloomFilterReader;

@interface NBBloomFilterReader : NSObject

@property (readonly, nonatomic) NBObjCBloomFilterReader *bloomFilterReader;

- (id)initWithData:(id)a0 hashFunctionCount:(unsigned long long)a1;
- (BOOL)maybeContainsString:(id)a0;
- (void).cxx_destruct;

@end
