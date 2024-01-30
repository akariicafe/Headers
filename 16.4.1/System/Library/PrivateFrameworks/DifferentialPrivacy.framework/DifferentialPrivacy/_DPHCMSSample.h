@class NSData;

@interface _DPHCMSSample : NSObject

@property (readonly, nonatomic) unsigned long long hashFunctionIndex;
@property (readonly, nonatomic) unsigned long long bitIndex;
@property (readonly, nonatomic) NSData *bitString;

+ (id)convertDataToString:(id)a0;
+ (id)dataFor:(id)a0 hashAtIndex:(unsigned long long)a1 epsilon:(double)a2 bitCount:(unsigned long long)a3 bitIndex:(unsigned long long)a4;
+ (id)hcmsSampleWith:(id)a0 privacyParameter:(double)a1 hashFunctionCount:(unsigned long long)a2 bitCount:(unsigned long long)a3;
+ (id)jsonStringFrom:(id)a0 hashIndex:(unsigned long long)a1 bitIndex:(unsigned long long)a2;
+ (id)jsonStringFromSequence:(id)a0 sequenceHashIndex:(unsigned short)a1 sequencebitIndex:(unsigned long long)a2 fragment:(id)a3 fragmentHashIndex:(unsigned short)a4 fragmentbitIndex:(unsigned long long)a5 fragmentPosition:(unsigned short)a6;

- (id)init;
- (id)initWith:(id)a0 privacyParameter:(double)a1 hashFunctionCount:(unsigned long long)a2 bitCount:(unsigned long long)a3;
- (void).cxx_destruct;

@end
