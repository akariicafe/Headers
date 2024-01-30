@class NSUUID, NSString, NSSet, NSMutableDictionary, CKRecord, HMFVersion;
@protocol HMDBackingStoreObjectProtocol;

@interface HMDBackingStoreModelObject : HMFObject <HMFLogging, NSCopying> {
    NSMutableDictionary *_reserved;
}

@property (class, readonly, copy) Class backedObjectClass;

@property (retain, nonatomic) NSUUID *uuid;
@property (retain, nonatomic) NSUUID *parentUUID;
@property (retain, nonatomic) NSString *bsoType;
@property (retain, nonatomic) CKRecord *bsoRecord;
@property BOOL bsoDataVersionOverride;
@property (nonatomic) unsigned long long objectChangeType;
@property (readonly, nonatomic) NSSet *dependentUUIDs;
@property (weak, nonatomic) id<HMDBackingStoreObjectProtocol> bsoDelegate;
@property (readonly) unsigned long long bsoLogRowID;
@property (readonly, nonatomic) HMFVersion *bsoDataVersion;
@property (readonly, nonatomic, getter=isReadOnly) BOOL isReadOnly;
@property (readonly, nonatomic, getter=isGenericRepresentation) BOOL isGenericRepresentation;
@property (readonly, nonatomic, getter=isReplayable) BOOL replayable;
@property (retain, nonatomic) HMFVersion *bsoIgnoredBefore;
@property (readonly, nonatomic) BOOL bsoIgnoreModel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)logCategory;
+ (id)properties;
+ (BOOL)resolveInstanceMethod:(SEL)a0;
+ (id)schemaHashRoot;
+ (id)objectFromData:(id)a0 encoding:(unsigned long long)a1 error:(id *)a2;
+ (id)objectFromData:(id)a0 encoding:(unsigned long long)a1 record:(id)a2 error:(id *)a3;
+ (id)objectFromData:(id)a0 encoding:(unsigned long long)a1 rowID:(unsigned long long)a2 error:(id *)a3;
+ (id)objectFromDictionaryData:(id)a0 type:(id)a1 error:(id *)a2;
+ (Class)genericRepresentation;
+ (id)readonlyBefore;
+ (id)formatValue:(id)a0;
+ (id)bsoSchemaHash;
+ (id)objectFromDictionaryData:(id)a0 error:(id *)a1;
+ (id)objectFromCloud:(id)a0 error:(id *)a1;

- (id)merge:(id)a0;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)setProperties;
- (id)debugString:(BOOL)a0;
- (id)initWithUUID:(id)a0;
- (id)encodeWithError:(id *)a0;
- (BOOL)isEqual:(id)a0;
- (id)logIdentifier;
- (BOOL)_validateType:(id)a0 error:(id *)a1;
- (id)validateType:(id)a0 path:(id)a1;
- (void)dumpDebug:(id)a0;
- (void)dumpDebug;
- (id)initWithObjectChangeType:(unsigned long long)a0 uuid:(id)a1 parentUUID:(id)a2;
- (id)dependentUUIDs;
- (BOOL)diff:(id)a0 differingFields:(id *)a1;
- (id)initWithUUID:(id)a0 parentUUID:(id)a1;
- (id)backedObjectWithParent:(id)a0 error:(id *)a1;
- (void)setPropertyIfNotNil:(id)a0 named:(id)a1;
- (BOOL)propertyWasSet:(id)a0;
- (id)initWithVersion:(id)a0 changeType:(unsigned long long)a1 uuid:(id)a2 parentUUID:(id)a3;
- (id)encodeWithEncoding:(unsigned long long)a0 error:(id *)a1;
- (void)clearVersionOverride;
- (id)prepareFor:(unsigned long long)a0;
- (id)encodeFor:(unsigned long long)a0 error:(id *)a1;
- (id)encodeWithEncoding:(unsigned long long)a0 for:(unsigned long long)a1 error:(id *)a2;
- (id)encodeAsNSDictionaryFor:(unsigned long long)a0 error:(id *)a1;
- (BOOL)propertyIsAvailable:(id)a0;
- (BOOL)propertyIsReadOnly:(id)a0;
- (id)merge:(id)a0 from:(unsigned long long)a1;
- (id)typeNameForDebug;
- (id)encodeForCloud:(id *)a0;
- (void)setParentUUIDIfNotNil:(id)a0;
- (BOOL)validForStorage;
- (BOOL)merge:(id)a0 error:(id *)a1;
- (id)defaultValueForPropertyNamed:(id)a0 isSet:(BOOL *)a1;

@end
