@class NSSet;

@interface CEMPayloadBase : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy) NSSet *unknownPayloadKeys;

+ (id)load:(id)a0 error:(id *)a1;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)loadStringFromDictionary:(id)a0 withKey:(id)a1 isRequired:(BOOL)a2 defaultValue:(id)a3 error:(id *)a4;
- (id)loadBooleanFromDictionary:(id)a0 withKey:(id)a1 isRequired:(BOOL)a2 defaultValue:(id)a3 error:(id *)a4;
- (id)loadIntegerFromDictionary:(id)a0 withKey:(id)a1 isRequired:(BOOL)a2 defaultValue:(id)a3 error:(id *)a4;
- (void)serializeStringIntoDictionary:(id)a0 withKey:(id)a1 withValue:(id)a2 isRequired:(BOOL)a3 defaultValue:(id)a4;
- (void)serializeBooleanIntoDictionary:(id)a0 withKey:(id)a1 withValue:(id)a2 isRequired:(BOOL)a3 defaultValue:(id)a4;
- (void)serializeIntegerIntoDictionary:(id)a0 withKey:(id)a1 withValue:(id)a2 isRequired:(BOOL)a3 defaultValue:(id)a4;
- (void)serializeAssetIntoDictionary:(id)a0 withKey:(id)a1 withValue:(id)a2 assetProvider:(id)a3 transformType:(id)a4 isRequired:(BOOL)a5 defaultValue:(id)a6;
- (BOOL)loadPayload:(id)a0 error:(id *)a1;
- (id)serializePayloadWithAssetProviders:(id)a0;
- (id)serializePayload;
- (id)loadDictionaryFromDictionary:(id)a0 withKey:(id)a1 classType:(Class)a2 isRequired:(BOOL)a3 defaultValue:(id)a4 error:(id *)a5;
- (void)serializeDictionaryIntoDictionary:(id)a0 withKey:(id)a1 withValue:(id)a2 dictSerializer:(id /* block */)a3 isRequired:(BOOL)a4 defaultValue:(id)a5;
- (id)loadArrayFromDictionary:(id)a0 withKey:(id)a1 classType:(Class)a2 nested:(BOOL)a3 isRequired:(BOOL)a4 defaultValue:(id)a5 error:(id *)a6;
- (void)serializeArrayIntoDictionary:(id)a0 withKey:(id)a1 withValue:(id)a2 itemSerializer:(id /* block */)a3 isRequired:(BOOL)a4 defaultValue:(id)a5;
- (id)loadArrayFromDictionary:(id)a0 withKey:(id)a1 validator:(id /* block */)a2 isRequired:(BOOL)a3 defaultValue:(id)a4 error:(id *)a5;
- (id)loadDataFromDictionary:(id)a0 withKey:(id)a1 isRequired:(BOOL)a2 defaultValue:(id)a3 error:(id *)a4;
- (void)serializeDataIntoDictionary:(id)a0 withKey:(id)a1 withValue:(id)a2 isRequired:(BOOL)a3 defaultValue:(id)a4;
- (id)loadDateFromDictionary:(id)a0 withKey:(id)a1 isRequired:(BOOL)a2 defaultValue:(id)a3 error:(id *)a4;
- (id)loadFloatFromDictionary:(id)a0 withKey:(id)a1 isRequired:(BOOL)a2 defaultValue:(id)a3 error:(id *)a4;
- (void)serializeDateIntoDictionary:(id)a0 withKey:(id)a1 withValue:(id)a2 isRequired:(BOOL)a3 defaultValue:(id)a4;
- (void)serializeFloatIntoDictionary:(id)a0 withKey:(id)a1 withValue:(id)a2 isRequired:(BOOL)a3 defaultValue:(id)a4;
- (void)mergeUnknownKeysFrom:(id)a0 withParentKey:(id)a1;
- (id)_loadObjectOfClass:(Class)a0 fromDictionary:(id)a1 withKey:(id)a2 isRequired:(BOOL)a3 defaultValue:(id)a4 error:(id *)a5;
- (id)createNestedObjectWithClass:(Class)a0 withParentKey:(id)a1 withPayload:(id)a2 error:(id *)a3;
- (void)_serializeItemIntoDictionary:(id)a0 withKey:(id)a1 withValue:(id)a2 isRequired:(BOOL)a3 isDefaultValue:(BOOL)a4;

@end
