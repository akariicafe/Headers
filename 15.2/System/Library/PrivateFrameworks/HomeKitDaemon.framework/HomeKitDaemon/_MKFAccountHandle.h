@class NSUUID, NSString, IDSURI, NSDate, _MKFAccount, Protocol, MKFAccountHandleDatabaseID, NSNumber;
@protocol MKFAccount;

@interface _MKFAccountHandle : _MKFModel <HMDNSManagedObjectBackingStoreModelObjectRepresentable, MKFAccountHandle, MKFAccountHandlePrivateExtensions>

@property (class, readonly) Class cd_modelClass;
@property (class, readonly, copy, nonatomic) Protocol *backingModelProtocol;

@property (readonly, copy, nonatomic) NSUUID *hmd_modelID;
@property (readonly, copy, nonatomic) NSUUID *hmd_parentModelID;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) IDSURI *idsURI;
@property (copy, nonatomic) NSNumber *local;
@property (retain, nonatomic) _MKFAccount *account;
@property (retain, nonatomic) IDSURI *idsURI;
@property (copy, nonatomic) NSNumber *local;
@property (readonly, retain, nonatomic) id<MKFAccount> account;
@property (readonly, copy, nonatomic) MKFAccountHandleDatabaseID *databaseID;
@property (readonly, copy, nonatomic) NSUUID *modelID;
@property (copy, nonatomic) NSDate *writerTimestamp;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)fetchRequest;
+ (id)modelIDForParentRelationshipTo:(id)a0;
+ (Class)backingModelClass;

- (id)castIfAccountHandle;

@end
