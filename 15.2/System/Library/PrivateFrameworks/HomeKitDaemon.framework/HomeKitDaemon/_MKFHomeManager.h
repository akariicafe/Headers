@class NSUUID, NSString, NSArray, HAPPairingIdentity, NSSet, _MKFHAPMetadata, NSDictionary, _MKFHomeManagerHome, Protocol, MKFHomeManagerDatabaseID, NSDate;
@protocol MKFHAPMetadata, MKFHomeManagerHome;

@interface _MKFHomeManager : _MKFModel <HMDNSManagedObjectBackingStoreModelObjectRepresentable, MKFHomeManager, MKFHomeManagerPrivateExtensions>

@property (class, readonly) Class cd_modelClass;
@property (class, readonly, copy, nonatomic) Protocol *backingModelProtocol;
@property (class, readonly, copy, nonatomic) NSUUID *defaultModelID;

@property (copy, nonatomic) NSUUID *primitiveModelID;
@property (readonly, copy, nonatomic) NSUUID *hmd_modelID;
@property (readonly, copy, nonatomic) NSUUID *hmd_parentModelID;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) NSDictionary *appDataDictionary;
@property (copy, nonatomic) NSString *controllerKeyIdentifier;
@property (retain, nonatomic) HAPPairingIdentity *legacyPairingIdentity;
@property (retain, nonatomic) NSArray *pairingAppleAccessories;
@property (retain, nonatomic) NSSet *accounts_;
@property (retain, nonatomic) NSSet *homes_;
@property (retain, nonatomic) NSSet *incomingInvitations_;
@property (retain, nonatomic) _MKFHAPMetadata *metadata;
@property (retain, nonatomic) _MKFHomeManagerHome *primaryHome;
@property (retain, nonatomic) NSDictionary *appDataDictionary;
@property (copy, nonatomic) NSString *controllerKeyIdentifier;
@property (retain, nonatomic) HAPPairingIdentity *legacyPairingIdentity;
@property (retain, nonatomic) NSArray *pairingAppleAccessories;
@property (readonly, retain, nonatomic) NSArray *accounts;
@property (readonly, retain, nonatomic) NSArray *homes;
@property (readonly, retain, nonatomic) NSArray *incomingInvitations;
@property (retain, nonatomic) id<MKFHAPMetadata> metadata;
@property (retain, nonatomic) id<MKFHomeManagerHome> primaryHome;
@property (readonly, copy, nonatomic) MKFHomeManagerDatabaseID *databaseID;
@property (readonly, copy, nonatomic) NSUUID *modelID;
@property (copy, nonatomic) NSDate *writerTimestamp;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)fetchRequest;
+ (id)fetchWithContext:(id)a0 error:(id *)a1;
+ (Class)backingModelClass;

- (void)awakeFromInsert;
- (id)castIfHomeManager;
- (id)hmd_modelsWithChangeType:(unsigned long long)a0 detached:(BOOL)a1 error:(id *)a2;
- (id)materializeOrCreateAccountsRelationWithModelID:(id)a0 createdNew:(BOOL *)a1;
- (id)findAccountsRelationWithModelID:(id)a0;
- (id)materializeOrCreateHomesRelationWithModelID:(id)a0 createdNew:(BOOL *)a1;
- (id)findHomesRelationWithModelID:(id)a0;
- (id)materializeOrCreateIncomingInvitationsRelationWithModelID:(id)a0 createdNew:(BOOL *)a1;
- (id)findIncomingInvitationsRelationWithModelID:(id)a0;
- (id)materializeOrCreateMetadataRelation:(BOOL *)a0;

@end
