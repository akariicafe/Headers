@class HMBLocalZone, NSSet, NSMapTable, NSString, HMFVersion;
@protocol HMBMirrorProtocol;

@interface HMBModelContainer : HMFObject <HMFLogging, NSMutableCopying, NSCopying> {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _propertyLock;
}

@property (class, readonly, nonatomic) NSSet *internalAllowedTypes;
@property (class, readonly, nonatomic) NSSet *allowedTypes;

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
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)encodeAsOPACK:(id)a0 error:(id *)a1;
+ (id)decodeAsNSDictionary:(id)a0 error:(id *)a1;
+ (id)encodeAsNSDictionary:(id)a0 error:(id *)a1;
+ (id)logCategory;
+ (id)decodeAsOPACK:(id)a0 error:(id *)a1;

- (id)encodePropertyValue:(id)a0 forProperty:(id)a1 field:(id)a2 storageLocation:(unsigned long long)a3 error:(id *)a4;
- (id)typeNameForModelClass:(Class)a0;
- (id)schemaHashForModel:(id)a0;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (void)updateLocalZone:(id)a0;
- (id)decodePropertyValueFromData:(id)a0 forProperty:(id)a1 field:(id)a2 storageLocation:(unsigned long long)a3 error:(id *)a4;
- (id)modelFromData:(id)a0 encoding:(unsigned long long)a1 storageLocation:(unsigned long long)a2 type:(id)a3 error:(id *)a4;
- (Class)_modelClassFromDictionary:(id)a0 typeName:(id)a1 error:(id *)a2;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)unavailableVersionsForModelClass:(Class)a0;
- (id)modelFromData:(id)a0 encoding:(unsigned long long)a1 storageLocation:(unsigned long long)a2 error:(id *)a3;
- (id)initWithDataVersion:(id)a0 legacyDataVersion:(id)a1;
- (unsigned long long)bestModelEncodingForStorageLocation:(unsigned long long)a0;
- (void)updateMirror:(id)a0;
- (id)init;
- (Class)modelClassForTypeName:(id)a0;
- (id)modelFromDictionary:(id)a0 storageLocation:(unsigned long long)a1 typeName:(id)a2 error:(id *)a3;
- (void).cxx_destruct;
- (id)readOnlyVersionsForModelClass:(Class)a0;
- (id)dataFromModel:(id)a0 encoding:(unsigned long long)a1 storageLocation:(unsigned long long)a2 updatedModelIDs:(id)a3 error:(id *)a4;

@end
