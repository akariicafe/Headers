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
@property (copy, nonatomic) NSString *name;
@property (copy, nonatomic) NSString *type;
@property (retain, nonatomic) NSSet *actions_;
@property (retain, nonatomic) _MKFApplicationData *applicationData;
@property (retain, nonatomic) _MKFHome *home;
@property (retain, nonatomic) NSSet *triggers_;
@property (copy, nonatomic) NSDate *lastExecutionDate;
@property (copy, nonatomic) NSString *name;
@property (copy, nonatomic) NSString *type;
@property (readonly, retain, nonatomic) NSArray *actions;
@property (retain, nonatomic) id<MKFApplicationData> applicationData;
@property (readonly, retain, nonatomic) id<MKFHome> home;
@property (readonly, retain, nonatomic) NSArray *triggers;
@property (readonly, copy, nonatomic) MKFActionSetDatabaseID *databaseID;
@property (readonly, copy, nonatomic) NSUUID *modelID;
@property (copy, nonatomic) NSDate *writerTimestamp;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)fetchRequest;
+ (id)modelIDForParentRelationshipTo:(id)a0;
+ (Class)backingModelClass;

- (id)castIfActionSet;
- (id)materializeOrCreateApplicationDataRelation:(BOOL *)a0;
- (id)materializeOrCreateActionsRelationOfType:(id)a0 modelID:(id)a1 createdNew:(BOOL *)a2;
- (id)materializeOrCreateActionsRelationOfTypeActionCharacteristicWriteWithModelID:(id)a0 createdNew:(BOOL *)a1;
- (id)findActionsRelationOfTypeActionCharacteristicWriteWithModelID:(id)a0;
- (id)materializeOrCreateActionsRelationOfTypeActionLightProfileNaturalLightingWithModelID:(id)a0 createdNew:(BOOL *)a1;
- (id)findActionsRelationOfTypeActionLightProfileNaturalLightingWithModelID:(id)a0;
- (id)materializeOrCreateActionsRelationOfTypeActionMediaPlaybackWithModelID:(id)a0 createdNew:(BOOL *)a1;
- (id)findActionsRelationOfTypeActionMediaPlaybackWithModelID:(id)a0;
- (id)materializeOrCreateActionsRelationOfTypeActionShortcutWithModelID:(id)a0 createdNew:(BOOL *)a1;
- (id)findActionsRelationOfTypeActionShortcutWithModelID:(id)a0;
- (void)synchronizeActionsRelationWith:(id)a0;

@end
