@class NSUUID, NSString, _MKFAccessory, NSPredicate, MKFAssistantAccessControlDatabaseID, NSDate, Protocol, NSNumber;
@protocol MKFHome, MKFAccessory;

@interface _MKFAssistantAccessControl : _MKFModel <HMDNSManagedObjectBackingStoreModelObjectRepresentable, MKFAssistantAccessControl, MKFAssistantAccessControlPrivateExtensions>

@property (class, readonly) Class cd_modelClass;
@property (class, readonly) NSPredicate *homeRelation;
@property (class, readonly, copy, nonatomic) Protocol *backingModelProtocol;

@property (readonly, copy, nonatomic) NSUUID *hmd_modelID;
@property (readonly, copy, nonatomic) NSUUID *hmd_parentModelID;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (copy, nonatomic) NSString *changeTag;
@property (copy, nonatomic) NSNumber *enabled;
@property (copy, nonatomic) NSNumber *options;
@property (retain, nonatomic) _MKFAccessory *accessory;
@property (copy, nonatomic) NSString *changeTag;
@property (copy, nonatomic) NSNumber *enabled;
@property (copy, nonatomic) NSNumber *options;
@property (readonly, retain, nonatomic) id<MKFAccessory> accessory;
@property (readonly, copy, nonatomic) MKFAssistantAccessControlDatabaseID *databaseID;
@property (readonly) id<MKFHome> home;
@property (readonly, copy, nonatomic) NSUUID *modelID;
@property (copy, nonatomic) NSDate *writerTimestamp;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)fetchRequest;
+ (id)modelIDForParentRelationshipTo:(id)a0;
+ (Class)backingModelClass;

- (id)castIfAssistantAccessControl;

@end
