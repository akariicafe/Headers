@class NSSet, NSDictionary, NSMutableSet, NSError, NSMutableArray;

@interface HKSPDictionarySerializer : NSCoder

@property (readonly, nonatomic) unsigned long long serializationOptions;
@property (readonly, nonatomic) NSError *internalError;
@property (readonly, nonatomic) NSMutableArray *stack;
@property (readonly, nonatomic) NSMutableSet *mutableSerializedClasses;
@property (readonly, nonatomic) NSDictionary *serializedDictionary;
@property (readonly, nonatomic) NSSet *serializedClasses;

- (void)encodeInteger:(long long)a0 forKey:(id)a1;
- (void)encodeFloat:(float)a0 forKey:(id)a1;
- (void)encodeInt32:(int)a0 forKey:(id)a1;
- (void)encodeRootObject:(id)a0;
- (void)encodeDouble:(double)a0 forKey:(id)a1;
- (void)encodeInt:(int)a0 forKey:(id)a1;
- (void)encodeObject:(id)a0 forKey:(id)a1;
- (void)encodeBool:(BOOL)a0 forKey:(id)a1;
- (void)encodeInt64:(long long)a0 forKey:(id)a1;
- (unsigned long long)hksp_serializationOptions;
- (BOOL)allowsKeyedCoding;
- (void)_encodeObject:(id)a0 forKey:(id)a1;
- (BOOL)serialize:(id)a0 error:(id *)a1;
- (void).cxx_destruct;
- (id)init;
- (id)_dictionaryForProtocolObject:(id)a0;
- (void)_encodeProtocolObject:(id)a0 forKey:(id)a1;
- (id)initWithSerializationOptions:(unsigned long long)a0;

@end
