@class NSString, NSData;

@interface APOdmlVector : NSObject <NSSecureCoding> {
    float *_dataPtr;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSString *version;
@property (readonly, nonatomic) NSData *data;
@property (readonly, nonatomic) unsigned int length;

- (float)magnitude;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithDictionary:(id)a0;
- (unsigned long long)hash;
- (void)dealloc;
- (id)initWithVersion:(id)a0 data:(id)a1;
- (id)dictionaryRepresentation;
- (id)scalarMultiply:(float)a0;
- (id)initWithVersion:(id)a0 andArray:(id)a1;
- (id)vectorAdd:(id)a0;
- (id)initWithVersion:(id)a0 length:(unsigned int)a1 floats:(float *)a2;
- (id)arrayOfNumbers;
- (float *)_createDataPtrFromArray:(id)a0;
- (void)setDataPtr:(float *)a0;
- (id)_initWithVersion:(id)a0 length:(unsigned int)a1 rawMallocedFloats:(float *)a2;
- (float)dotProduct:(id)a0;
- (void)setArrayOfNumber:(id)a0;
- (id)vectorSubtract:(id)a0;
- (id)cosineSimilarity:(id)a0;

@end
