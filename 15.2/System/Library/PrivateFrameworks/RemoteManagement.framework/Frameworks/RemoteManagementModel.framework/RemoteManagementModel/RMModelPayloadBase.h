@class NSSet;

@interface RMModelPayloadBase : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSSet *unknownPayloadKeys;

+ (id)load:(id)a0 serializationType:(short)a1 error:(id *)a2;
+ (id)loadData:(id)a0 serializationType:(short)a1 error:(id *)a2;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)loadStringFromDictionary:(id)a0 usingKey:(id)a1 forKeyPath:(id)a2 isRequired:(BOOL)a3 defaultValue:(id)a4 error:(id *)a5;
- (BOOL)loadIntegerFromDictionary:(id)a0 usingKey:(id)a1 forKeyPath:(id)a2 isRequired:(BOOL)a3 defaultValue:(id)a4 error:(id *)a5;
- (void)serializeStringIntoDictionary:(id)a0 usingKey:(id)a1 value:(id)a2 isRequired:(BOOL)a3 defaultValue:(id)a4;
- (void)serializeIntegerIntoDictionary:(id)a0 usingKey:(id)a1 value:(id)a2 isRequired:(BOOL)a3 defaultValue:(id)a4;
- (BOOL)loadArrayFromDictionary:(id)a0 usingKey:(id)a1 forKeyPath:(id)a2 validator:(id /* block */)a3 isRequired:(BOOL)a4 defaultValue:(id)a5 error:(id *)a6;
- (BOOL)loadDictionaryFromDictionary:(id)a0 usingKey:(id)a1 forKeyPath:(id)a2 classType:(Class)a3 isRequired:(BOOL)a4 defaultValue:(id)a5 serializationType:(short)a6 error:(id *)a7;
- (BOOL)loadBooleanFromDictionary:(id)a0 usingKey:(id)a1 forKeyPath:(id)a2 isRequired:(BOOL)a3 defaultValue:(id)a4 error:(id *)a5;
- (void)serializeArrayIntoDictionary:(id)a0 usingKey:(id)a1 value:(id)a2 itemSerializer:(id /* block */)a3 isRequired:(BOOL)a4 defaultValue:(id)a5;
- (id)serializeWithType:(short)a0;
- (void)serializeDictionaryIntoDictionary:(id)a0 usingKey:(id)a1 value:(id)a2 dictSerializer:(id /* block */)a3 isRequired:(BOOL)a4 defaultValue:(id)a5;
- (void)serializeBooleanIntoDictionary:(id)a0 usingKey:(id)a1 value:(id)a2 isRequired:(BOOL)a3 defaultValue:(id)a4;
- (BOOL)loadFromDictionary:(id)a0 serializationType:(short)a1 error:(id *)a2;
- (BOOL)loadArrayFromDictionary:(id)a0 usingKey:(id)a1 forKeyPath:(id)a2 classType:(Class)a3 nested:(BOOL)a4 isRequired:(BOOL)a5 defaultValue:(id)a6 serializationType:(short)a7 error:(id *)a8;
- (void)mergeUnknownKeysFrom:(id)a0 parentKey:(id)a1;
- (BOOL)_loadObjectOfClass:(Class)a0 fromDictionary:(id)a1 usingKey:(id)a2 isRequired:(BOOL)a3 defaultValue:(id)a4 payloadValue:(id *)a5 error:(id *)a6;
- (id)createNestedObjectWithClass:(Class)a0 serializationType:(short)a1 parentKey:(id)a2 payload:(id)a3 error:(id *)a4;
- (BOOL)getModelObjectFromDictionary:(id)a0 usingKey:(id)a1 classType:(Class)a2 isRequired:(BOOL)a3 defaultValue:(id)a4 serializationType:(short)a5 payloadValue:(id *)a6 error:(id *)a7;
- (void)_serializeItemIntoDictionary:(id)a0 usingKey:(id)a1 value:(id)a2 isRequired:(BOOL)a3 isDefaultValue:(BOOL)a4;
- (id)serializeAsDataWithType:(short)a0 error:(id *)a1;
- (BOOL)loadFloatFromDictionary:(id)a0 usingKey:(id)a1 forKeyPath:(id)a2 isRequired:(BOOL)a3 defaultValue:(id)a4 error:(id *)a5;
- (BOOL)loadDateFromDictionary:(id)a0 usingKey:(id)a1 forKeyPath:(id)a2 isRequired:(BOOL)a3 defaultValue:(id)a4 serializationType:(short)a5 error:(id *)a6;
- (BOOL)loadDataFromDictionary:(id)a0 usingKey:(id)a1 forKeyPath:(id)a2 isRequired:(BOOL)a3 defaultValue:(id)a4 serializationType:(short)a5 error:(id *)a6;
- (void)serializeFloatIntoDictionary:(id)a0 usingKey:(id)a1 value:(id)a2 isRequired:(BOOL)a3 defaultValue:(id)a4;
- (void)serializeDateIntoDictionary:(id)a0 usingKey:(id)a1 value:(id)a2 isRequired:(BOOL)a3 defaultValue:(id)a4 serializationType:(short)a5;
- (void)serializeDataIntoDictionary:(id)a0 usingKey:(id)a1 value:(id)a2 isRequired:(BOOL)a3 defaultValue:(id)a4 serializationType:(short)a5;

@end
