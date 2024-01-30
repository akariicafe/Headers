@class NSDictionary, NSMutableArray;

@interface HKSPDictionaryDeserializer : NSCoder

@property (readonly, nonatomic) unsigned long long serializationOptions;
@property (readonly, nonatomic) NSDictionary *serializedDictionary;
@property (readonly, nonatomic) NSMutableArray *stack;

- (int)decodeIntForKey:(id)a0;
- (long long)decodeIntegerForKey:(id)a0;
- (id)_decodeObject:(id)a0;
- (int)decodeInt32ForKey:(id)a0;
- (long long)decodeInt64ForKey:(id)a0;
- (id)decodeObjectForKey:(id)a0;
- (double)decodeDoubleForKey:(id)a0;
- (BOOL)decodeBoolForKey:(id)a0;
- (BOOL)allowsKeyedCoding;
- (float)decodeFloatForKey:(id)a0;
- (void).cxx_destruct;
- (id)decodeTopLevelObjectOfClass:(Class)a0 forKey:(id)a1 error:(id *)a2;
- (id)initWithSerializedDictionary:(id)a0 serializationOptions:(unsigned long long)a1;
- (id)_decodeDeserializable:(id)a0;
- (id)initWithSerializedDictionary:(id)a0;
- (id)deserializeObjectOfClass:(Class)a0 error:(id *)a1;
- (unsigned long long)hksp_serializationOptions;

@end
