@class NSUUID, NSString, NSData, NSPredicate, MKFAccessorySettingConstraintDatabaseID, NSDate, Protocol, NSNumber, _MKFAccessorySetting;
@protocol MKFAccessorySetting, MKFHome;

@interface _MKFAccessorySettingConstraint : _MKFModel <HMDNSManagedObjectBackingStoreModelObjectRepresentable, MKFAccessorySettingConstraint, MKFAccessorySettingConstraintPrivateExtensions>

@property (class, readonly) Class cd_modelClass;
@property (class, readonly) NSPredicate *homeRelation;
@property (class, readonly, copy, nonatomic) Protocol *backingModelProtocol;

@property (readonly, copy, nonatomic) NSUUID *hmd_modelID;
@property (readonly, copy, nonatomic) NSUUID *hmd_parentModelID;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (copy, nonatomic) NSNumber *type;
@property (retain, nonatomic) NSData *value;
@property (retain, nonatomic) _MKFAccessorySetting *setting;
@property (copy, nonatomic) NSNumber *type;
@property (retain, nonatomic) NSData *value;
@property (readonly, retain, nonatomic) id<MKFAccessorySetting> setting;
@property (readonly, copy, nonatomic) MKFAccessorySettingConstraintDatabaseID *databaseID;
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

- (id)castIfAccessorySettingConstraint;
- (id)materializeOrCreateSettingRelationWithModelID:(id)a0 createdNew:(BOOL *)a1;
- (id)findSettingRelationWithModelID:(id)a0;
- (void)synchronizeSettingRelationWith:(id)a0;

@end
