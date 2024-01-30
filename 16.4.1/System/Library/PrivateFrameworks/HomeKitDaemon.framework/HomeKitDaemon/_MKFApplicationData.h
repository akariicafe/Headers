@class NSUUID, NSString, NSDate, _MKFAccessory, _MKFActionSet, _MKFService, NSDictionary, _MKFRoom, Protocol, _MKFHome, _MKFServiceGroup, MKFApplicationDataDatabaseID;
@protocol MKFService, MKFRoom, MKFServiceGroup, MKFAccessory, MKFHome, MKFActionSet;

@interface _MKFApplicationData : _MKFModel <HMDNSManagedObjectBackingStoreModelObjectRepresentable, MKFApplicationData, MKFApplicationDataPrivateExtensions>

@property (class, readonly) Class cd_modelClass;
@property (class, readonly, copy, nonatomic) Protocol *backingModelProtocol;

@property (readonly, copy, nonatomic) NSUUID *hmd_modelID;
@property (readonly, copy, nonatomic) NSUUID *hmd_parentModelID;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) NSDictionary *appDataDictionary;
@property (copy, nonatomic) NSUUID *modelID;
@property (copy, nonatomic) NSDate *writerTimestamp;
@property (retain, nonatomic) _MKFAccessory *accessory;
@property (retain, nonatomic) _MKFActionSet *actionSet;
@property (retain, nonatomic) _MKFHome *home;
@property (retain, nonatomic) _MKFRoom *room;
@property (retain, nonatomic) _MKFService *service;
@property (retain, nonatomic) _MKFServiceGroup *serviceGroup;
@property (retain, nonatomic) NSDictionary *appDataDictionary;
@property (readonly, copy, nonatomic) NSUUID *modelID;
@property (copy, nonatomic) NSDate *writerTimestamp;
@property (readonly, retain, nonatomic) id<MKFAccessory> accessory;
@property (readonly, retain, nonatomic) id<MKFActionSet> actionSet;
@property (readonly, retain, nonatomic) id<MKFHome> home;
@property (readonly, retain, nonatomic) id<MKFRoom> room;
@property (readonly, retain, nonatomic) id<MKFService> service;
@property (readonly, retain, nonatomic) id<MKFServiceGroup> serviceGroup;
@property (readonly, copy, nonatomic) MKFApplicationDataDatabaseID *databaseID;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)fetchRequest;
+ (id)modelIDForParentRelationshipTo:(id)a0;
+ (id)castIfApplicationDataContainer:(id)a0;
+ (id)appDataDictionaryForContainer:(id)a0;
+ (id)hmd_parentAttributeKeyPaths;
+ (id)modelIDForContainerUUID:(id)a0;
+ (void)setAppDataDictionary:(id)a0 forContainer:(id)a1;

- (id)castIfApplicationData;
- (BOOL)hasValidContainer;
- (BOOL)validateForInsertOrUpdate:(id *)a0;

@end
