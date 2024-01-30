@class NSError, NSMutableArray, NSDictionary;

@interface HKSPDictionarySerializer : NSCoder

@property (readonly, nonatomic) unsigned long long serializationOptions;
@property (readonly, nonatomic) NSError *internalError;
@property (readonly, nonatomic) NSMutableArray *stack;
@property (readonly, nonatomic) NSDictionary *serializedDictionary;

- (void)encodeDouble:(double)a0 forKey:(id)a1;
- (void)encodeInteger:(long long)a0 forKey:(id)a1;
- (void)encodeFloat:(float)a0 forKey:(id)a1;
- (void)encodeRootObject:(id)a0;
- (BOOL)allowsKeyedCoding;
- (void)encodeInt32:(int)a0 forKey:(id)a1;
- (id)init;
- (void)encodeInt:(int)a0 forKey:(id)a1;
- (void).cxx_destruct;
- (void)encodeBool:(BOOL)a0 forKey:(id)a1;
- (void)encodeInt64:(long long)a0 forKey:(id)a1;
- (void)encodeObject:(id)a0 forKey:(id)a1;
- (BOOL)serialize:(id)a0 error:(id *)a1;
- (id)initWithSerializationOptions:(unsigned long long)a0;
- (void)_encodeObject:(id)a0 forKey:(id)a1;
- (void)_encodeProtocolObject:(id)a0 forKey:(id)a1;
- (id)_dictionaryForProtocolObject:(id)a0;
- (unsigned long long)hksp_serializationOptions;

@end
