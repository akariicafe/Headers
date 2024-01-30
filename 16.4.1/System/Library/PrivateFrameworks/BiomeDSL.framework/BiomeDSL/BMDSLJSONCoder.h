@class NSDictionary, NSMutableArray, NSMutableDictionary;

@interface BMDSLJSONCoder : NSCoder {
    NSMutableArray *_stack;
    NSMutableDictionary *_currentDictionary;
    BOOL _allowSecureCodingObjects;
    BOOL _allowKeyModifications;
}

@property (copy, nonatomic) NSDictionary *userInfo;

+ (BOOL)hasNativeSupportForClass:(Class)a0;

- (id)pop;
- (void)encodeInt32:(int)a0 forKey:(id)a1;
- (void)encodeInt64:(long long)a0 forKey:(id)a1;
- (void)encodeInteger:(long long)a0 forKey:(id)a1;
- (void)encodeInt:(int)a0 forKey:(id)a1;
- (void)encodeDouble:(double)a0 forKey:(id)a1;
- (void)encodeFloat:(float)a0 forKey:(id)a1;
- (float)decodeFloatForKey:(id)a0;
- (void)encodeBool:(BOOL)a0 forKey:(id)a1;
- (void)encodeObject:(id)a0 forKey:(id)a1;
- (int)decodeIntForKey:(id)a0;
- (BOOL)decodeBoolForKey:(id)a0;
- (double)decodeDoubleForKey:(id)a0;
- (long long)decodeIntegerForKey:(id)a0;
- (int)decodeInt32ForKey:(id)a0;
- (long long)decodeInt64ForKey:(id)a0;
- (id)encodingDescriptorFromKey:(id)a0;
- (id)decodeObjectForKey:(id)a0;
- (BOOL)_jsonDecodeArray:(inout id *)a0 forKey:(inout id *)a1;
- (BOOL)allowsKeyedCoding;
- (BOOL)_jsonDecodeDictionary:(inout id *)a0 forKey:(inout id *)a1;
- (BOOL)_jsonEncodeDictionary:(id *)a0 forKey:(id *)a1;
- (BOOL)_jsonEncodeArray:(id *)a0 forKey:(id *)a1;
- (id)buildKeyFromEncodingDescriptor:(id)a0 originalKey:(id)a1;
- (id)buildKeyFromClass:(Class)a0 originalKey:(id)a1;
- (id)decodeRootObjectFromData:(id)a0;
- (id)encodingCompatibleObjectFromRootObject:(id)a0;
- (void)push:(id)a0;
- (BOOL)_jsonDecodeDictionary:(id *)a0 asClass:(Class)a1;
- (BOOL)_jsonEncodeObject:(id *)a0 forKey:(id *)a1;
- (BOOL)_jsonDecodeObject:(id *)a0 forKey:(id *)a1;
- (id)init;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })encodingDescriptorRangeInKey:(id)a0;
- (BOOL)_jsonDecodeObject:(id *)a0 encodingDescriptor:(id)a1;
- (Class)classFromEncodingDescriptor:(id)a0;
- (id)keyWithoutEncodingDescriptor:(id)a0;
- (id)initWithOptions:(unsigned long long)a0;
- (id)encodeDataFromRootObject:(id)a0;
- (void).cxx_destruct;

@end
