@class HMBLocalZone, NSSet, NSMapTable, HMFUnfairLock, HMFVersion;
@protocol HMBMirrorProtocol;

@interface HMBModelContainer : HMFObject <NSMutableCopying, NSCopying>

@property (class, readonly, nonatomic) NSSet *internalAllowedTypes;
@property (class, readonly, nonatomic) NSSet *allowedTypes;

@property (readonly, nonatomic) HMFUnfairLock *propertyLock;
@property (readonly, nonatomic) NSMapTable *queryFieldsCache;
@property (readonly, weak, nonatomic) HMBLocalZone *localZone;
@property (readonly, weak, nonatomic) id<HMBMirrorProtocol> mirror;
@property (copy, nonatomic) NSMapTable *classToNameTransform;
@property (copy, nonatomic) NSMapTable *nameToClassTransform;
@property (retain, nonatomic) NSMapTable *objectPropertyHashLookup;
@property (retain, nonatomic) NSMapTable *classReadOnlyVersionCache;
@property (retain, nonatomic) NSMapTable *classUnavailableVersionCache;
@property (readonly, copy, nonatomic) HMFVersion *legacyDataVersion;
@property (readonly, copy, nonatomic) HMFVersion *dataVersion;

+ (id)encodeAsNSDictionary:(id)a0 error:(id *)a1;
+ (id)encodeAsOPACK:(id)a0 error:(id *)a1;
+ (id)decodeAsNSDictionary:(id)a0 error:(id *)a1;
+ (id)decodeAsOPACK:(id)a0 error:(id *)a1;

- (id)modelFromData:(id)a0 encoding:(unsigned long long)a1 storageLocation:(unsigned long long)a2 error:(id *)a3;
- (id)modelFromDictionary:(id)a0 storageLocation:(unsigned long long)a1 typeName:(id)a2 error:(id *)a3;
- (id)initWithDataVersion:(id)a0 legacyDataVersion:(id)a1;
- (id)init;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)readOnlyVersionsForModelClass:(Class)a0;
- (id)dataFromModel:(id)a0 encoding:(unsigned long long)a1 storageLocation:(unsigned long long)a2 updatedModelIDs:(id)a3 error:(id *)a4;
- (Class)modelClassForTypeName:(id)a0;
- (id)schemaHashForModel:(id)a0;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (id)unavailableVersionsForModelClass:(Class)a0;
- (id)modelFromData:(id)a0 encoding:(unsigned long long)a1 storageLocation:(unsigned long long)a2 type:(id)a3 error:(id *)a4;
- (void)updateLocalZone:(id)a0;
- (unsigned long long)bestModelEncodingForStorageLocation:(unsigned long long)a0;
- (id)typeNameForModelClass:(Class)a0;
- (void)updateMirror:(id)a0;

@end
