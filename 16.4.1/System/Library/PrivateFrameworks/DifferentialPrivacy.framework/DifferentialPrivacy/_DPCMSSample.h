@class NSData;

@interface _DPCMSSample : NSObject

@property (readonly, nonatomic) unsigned long long hashFunctionIndex;
@property (readonly, nonatomic) NSData *bitString;

+ (id)jsonStringFrom:(id)a0 hashIndex:(unsigned long long)a1;
+ (id)convertToHexString:(id)a0;
+ (id)dataFor:(id)a0 hashAtIndex:(unsigned long long)a1 privacyParameter:(double)a2 bitCount:(unsigned long long)a3;
+ (id)jsonStringFromSequence:(id)a0 sequenceHashIndex:(unsigned short)a1 fragment:(id)a2 fragmentHashIndex:(unsigned short)a3 fragmentPosition:(unsigned short)a4;
+ (id)cmsSampleWith:(id)a0 privacyParameter:(double)a1 hashFunctionCount:(unsigned long long)a2 bitCount:(unsigned long long)a3;

- (id)init;
- (id)initWith:(id)a0 privacyParameter:(double)a1 hashFunctionCount:(unsigned long long)a2 bitCount:(unsigned long long)a3;
- (void).cxx_destruct;

@end
