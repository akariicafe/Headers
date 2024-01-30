@class NSString;

@interface UINibCoderValue : NSObject {
    NSString *key;
    unsigned int scope;
    char type;
    union { float floatValue; double doubleValue; unsigned long long integerValue; void *bytesValue; } value;
    unsigned long long length;
}

+ (id)nibValueForBoolean:(BOOL)a0 key:(id)a1 scope:(unsigned int)a2;
+ (id)nibValueForBytes:(const void *)a0 length:(unsigned long long)a1 key:(id)a2 scope:(unsigned int)a3;
+ (id)nibValueForDouble:(double)a0 key:(id)a1 scope:(unsigned int)a2;
+ (id)nibValueForFloat:(float)a0 key:(id)a1 scope:(unsigned int)a2;
+ (id)nibValueForInt16:(unsigned short)a0 key:(id)a1 scope:(unsigned int)a2;
+ (id)nibValueForInt32:(unsigned int)a0 key:(id)a1 scope:(unsigned int)a2;
+ (id)nibValueForInt64:(unsigned long long)a0 key:(id)a1 scope:(unsigned int)a2;
+ (id)nibValueForInt8:(unsigned char)a0 key:(id)a1 scope:(unsigned int)a2;
+ (id)nibValueForInteger:(unsigned long long)a0 key:(id)a1 scope:(unsigned int)a2;
+ (id)nibValueForObjectReference:(long long)a0 key:(id)a1 scope:(unsigned int)a2;
+ (id)nibValueRepresentingNilReferenceForKey:(id)a0 scope:(unsigned int)a1;

- (void)dealloc;
- (unsigned long long)byteLength;

@end
