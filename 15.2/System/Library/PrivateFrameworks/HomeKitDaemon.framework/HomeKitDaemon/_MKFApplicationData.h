@class Protocol, _MKFAccessory, NSPredicate, NSDictionary, NSDate, _MKFMediaSystem, _MKFService, NSString, MKFApplicationDataDatabaseID, _MKFActionSet, _MKFServiceGroup, _MKFHome, _MKFRoom, NSUUID;
@protocol MKFService, MKFRoom, MKFMediaSystem, MKFAccessory, MKFServiceGroup, MKFHome, MKFActionSet;

@interface _MKFApplicationData : _MKFModel <HMDNSManagedObjectBackingStoreModelObjectRepresentable, MKFApplicationData, MKFApplicationDataPrivateExtensions>

@property (class, readonly) Class cd_modelClass;
@property (class, readonly) NSPredicate *homeRelation;
@property (class, readonly, copy, nonatomic) Protocol *backingModelProtocol;

@property (readonly, copy, nonatomic) NSUUID *hmd_modelID;
@property (readonly, copy, nonatomic) NSUUID *hmd_parentModelID;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) NSDictionary *appDataDictionary;
@property (copy, nonatomic) NSUUID *parentModelID;
@property (retain, nonatomic) _MKFAccessory *accessory;
@property (retain, nonatomic) _MKFActionSet *actionSet;
@property (retain, nonatomic) _MKFHome *home;
@property (retain, nonatomic) _MKFMediaSystem *mediaSystem;
@property (retain, nonatomic) _MKFRoom *room;
@property (retain, nonatomic) _MKFService *service;
@property (retain, nonatomic) _MKFServiceGroup *serviceGroup;
@property (retain, nonatomic) NSDictionary *appDataDictionary;
@property (copy, nonatomic) NSUUID *parentModelID;
@property (readonly, retain, nonatomic) id<MKFAccessory> accessory;
@property (readonly, retain, nonatomic) id<MKFActionSet> actionSet;
@property (readonly, retain, nonatomic) id<MKFHome> home;
@property (readonly, retain, nonatomic) id<MKFMediaSystem> mediaSystem;
@property (readonly, retain, nonatomic) id<MKFRoom> room;
@property (readonly, retain, nonatomic) id<MKFService> service;
@property (readonly, retain, nonatomic) id<MKFServiceGroup> serviceGroup;
@property (readonly, copy, nonatomic) MKFApplicationDataDatabaseID *databaseID;
@property (readonly, copy, nonatomic) NSUUID *modelID;
@property (copy, nonatomic) NSDate *writerTimestamp;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)fetchRequest;
+ (id)modelIDForParentRelationshipTo:(id)a0;
+ (Class)backingModelClass;

- (id)castIfApplicationData;

@end
