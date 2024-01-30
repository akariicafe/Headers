@class NSUUID, NSString, NSDate, NSPredicate, NSSet, _MKFApplicationData, NSArray, MKFActionSetDatabaseID, Protocol, _MKFHome;
@protocol MKFHome, MKFApplicationData;

@interface _MKFActionSet : _MKFModel <HMDNSManagedObjectBackingStoreModelObjectRepresentable, MKFActionSet, MKFActionSetPrivateExtensions>

@property (class, readonly) Class cd_modelClass;
@property (class, readonly) NSPredicate *homeRelation;
@property (class, readonly, copy, nonatomic) Protocol *backingModelProtocol;

@property (readonly, copy, nonatomic) NSUUID *hmd_modelID;
@property (readonly, copy, nonatomic) NSUUID *hmd_parentModelID;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (copy, nonatomic) NSDate *lastExecutionDate;
@property (copy, nonatomic) NSUUID *modelID;
@property (copy, nonatomic) NSString *name;
@property (copy, nonatomic) NSString *type;
@property (copy, nonatomic) NSDate *writerTimestamp;
@property (retain, nonatomic) NSSet *actions_;
@property (retain, nonatomic) _MKFApplicationData *applicationData;
@property (retain, nonatomic) _MKFHome *home;
@property (retain, nonatomic) NSSet *triggers_;
@property (copy, nonatomic) NSDate *lastExecutionDate;
@property (readonly, copy, nonatomic) NSUUID *modelID;
@property (copy, nonatomic) NSString *name;
@property (copy, nonatomic) NSString *type;
@property (copy, nonatomic) NSDate *writerTimestamp;
@property (readonly, retain, nonatomic) NSArray *actions;
@property (retain, nonatomic) id<MKFApplicationData> applicationData;
@property (readonly, retain, nonatomic) id<MKFHome> home;
@property (readonly, retain, nonatomic) NSArray *triggers;
@property (readonly, copy, nonatomic) MKFActionSetDatabaseID *databaseID;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)fetchRequest;
+ (id)modelIDForParentRelationshipTo:(id)a0;

- (id)castIfActionSet;
- (void)synchronizeActionsRelationWith:(id)a0;
- (id)createActionsRelationOfType:(id)a0 modelID:(id)a1;
- (id)createActionsRelationOfTypeAppleMediaAccessoryPowerActionWithModelID:(id)a0;
- (id)createActionsRelationOfTypeCharacteristicWriteActionWithModelID:(id)a0;
- (id)createActionsRelationOfTypeMediaPlaybackActionWithModelID:(id)a0;
- (id)createActionsRelationOfTypeNaturalLightingActionWithModelID:(id)a0;
- (id)createActionsRelationOfTypeShortcutActionWithModelID:(id)a0;
- (id)findActionsRelationOfTypeAppleMediaAccessoryPowerActionWithModelID:(id)a0;
- (id)findActionsRelationOfTypeCharacteristicWriteActionWithModelID:(id)a0;
- (id)findActionsRelationOfTypeMediaPlaybackActionWithModelID:(id)a0;
- (id)findActionsRelationOfTypeNaturalLightingActionWithModelID:(id)a0;
- (id)findActionsRelationOfTypeShortcutActionWithModelID:(id)a0;
- (id)materializeOrCreateActionsRelationOfType:(id)a0 modelID:(id)a1 createdNew:(BOOL *)a2;
- (id)materializeOrCreateActionsRelationOfTypeAppleMediaAccessoryPowerActionWithModelID:(id)a0 createdNew:(BOOL *)a1;
- (id)materializeOrCreateActionsRelationOfTypeCharacteristicWriteActionWithModelID:(id)a0 createdNew:(BOOL *)a1;
- (id)materializeOrCreateActionsRelationOfTypeMediaPlaybackActionWithModelID:(id)a0 createdNew:(BOOL *)a1;
- (id)materializeOrCreateActionsRelationOfTypeNaturalLightingActionWithModelID:(id)a0 createdNew:(BOOL *)a1;
- (id)materializeOrCreateActionsRelationOfTypeShortcutActionWithModelID:(id)a0 createdNew:(BOOL *)a1;
- (id)materializeOrCreateApplicationDataRelation:(BOOL *)a0;

@end
