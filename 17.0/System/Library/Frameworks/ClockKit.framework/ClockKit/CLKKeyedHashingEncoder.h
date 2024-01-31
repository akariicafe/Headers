@class NSData;

@interface CLKKeyedHashingEncoder : NSCoder {
    void /* unknown type, empty encoding */ state;
    void /* unknown type, empty encoding */ keyValuePairs;
}

@property (nonatomic, readonly) BOOL requiresSecureCoding;
@property (nonatomic, readonly) NSData *encodedData;
@property (nonatomic, readonly) BOOL isFinished;
@property (nonatomic, readonly) BOOL allowsKeyedCoding;

- (void)encodeObject:(id)a0 forKey:(id)a1;
- (void)encodeDouble:(double)a0 forKey:(id)a1;
- (void)encodeInt:(int)a0 forKey:(id)a1;
- (void)encodeBool:(BOOL)a0 forKey:(id)a1;
- (void)encodeInteger:(long long)a0 forKey:(id)a1;
- (id)init;
- (void)encodeValueOfObjCType:(const char *)a0 at:(void *)a1;
- (void)encodeInt64:(long long)a0 forKey:(id)a1;
- (void)encodeFloat:(float)a0 forKey:(id)a1;
- (void)encodeBytes:(const char *)a0 length:(long long)a1 forKey:(id)a2;
- (void)encodeInt32:(int)a0 forKey:(id)a1;
- (void)encodeObject:(id)a0;
- (void)encodeDataObject:(id)a0;
- (void)encodeConditionalObject:(id)a0 forKey:(id)a1;
- (void).cxx_destruct;
- (void)encodeRootObject:(id)a0;
- (void)finishEncoding;

@end
