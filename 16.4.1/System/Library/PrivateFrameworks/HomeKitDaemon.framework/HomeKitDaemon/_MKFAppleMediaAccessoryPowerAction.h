@class Protocol, NSUUID, NSString, _MKFAppleMediaAccessory, MKFAppleMediaAccessoryPowerActionDatabaseID, NSNumber, NSDate;
@protocol MKFHome, MKFActionSet, MKFAppleMediaAccessory;

@interface _MKFAppleMediaAccessoryPowerAction : _MKFAction <HMDNSManagedObjectBackingStoreModelObjectRepresentable, MKFAppleMediaAccessoryPowerAction, MKFAppleMediaAccessoryPowerActionPrivateExtensions>

@property (class, readonly) Class cd_modelClass;
@property (class, readonly, copy, nonatomic) Protocol *backingModelProtocol;

@property (readonly, copy, nonatomic) NSUUID *hmd_modelID;
@property (readonly, copy, nonatomic) NSUUID *hmd_parentModelID;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (copy, nonatomic) NSNumber *targetSleepWakeState;
@property (retain, nonatomic) _MKFAppleMediaAccessory *accessory;
@property (copy, nonatomic) NSNumber *targetSleepWakeState;
@property (retain, nonatomic) id<MKFAppleMediaAccessory> accessory;
@property (readonly, copy, nonatomic) MKFAppleMediaAccessoryPowerActionDatabaseID *databaseID;
@property (readonly) id<MKFHome> home;
@property (readonly, copy, nonatomic) NSUUID *modelID;
@property (copy, nonatomic) NSDate *writerTimestamp;
@property (readonly, retain, nonatomic) id<MKFActionSet> actionSet;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)fetchRequest;
+ (id)modelIDForParentRelationshipTo:(id)a0;

- (id)castIfAppleMediaAccessoryPowerAction;

@end
