@class NSUUID, NSString, NSData, NSPredicate, NSSet, NSArray, NSDate, MKFAccessorySettingDatabaseID, Protocol, _MKFAccessorySettingGroup, NSNumber;
@protocol MKFHome, MKFAccessorySettingGroup;

@interface _MKFAccessorySetting : _MKFModel <HMDNSManagedObjectBackingStoreModelObjectRepresentable, MKFAccessorySetting, MKFAccessorySettingPrivateExtensions>

@property (class, readonly) Class cd_modelClass;
@property (class, readonly) NSPredicate *homeRelation;
@property (class, readonly, copy, nonatomic) Protocol *backingModelProtocol;

@property (readonly, copy, nonatomic) NSUUID *hmd_modelID;
@property (readonly, copy, nonatomic) NSUUID *hmd_parentModelID;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (copy, nonatomic) NSNumber *configurationVersion;
@property (copy, nonatomic) NSString *name;
@property (copy, nonatomic) NSNumber *properties;
@property (copy, nonatomic) NSNumber *type;
@property (retain, nonatomic) NSData *value;
@property (retain, nonatomic) NSSet *constraints_;
@property (retain, nonatomic) _MKFAccessorySettingGroup *group;
@property (copy, nonatomic) NSNumber *configurationVersion;
@property (copy, nonatomic) NSString *name;
@property (copy, nonatomic) NSNumber *properties;
@property (copy, nonatomic) NSNumber *type;
@property (retain, nonatomic) NSData *value;
@property (readonly, retain, nonatomic) NSArray *constraints;
@property (readonly, retain, nonatomic) id<MKFAccessorySettingGroup> group;
@property (readonly, copy, nonatomic) MKFAccessorySettingDatabaseID *databaseID;
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

- (id)castIfAccessorySetting;
- (id)materializeOrCreateConstraintsRelationWithModelID:(id)a0 createdNew:(BOOL *)a1;
- (id)findConstraintsRelationWithModelID:(id)a0;
- (void)synchronizeConstraintsRelationWith:(id)a0;

@end
