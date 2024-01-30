@class NSUUID, NSString, NSDate, NSPredicate, NSSet, NSArray, Protocol, MKFBulletinRegistrationDatabaseID, _MKFUser;
@protocol MKFUser, MKFHome;

@interface _MKFBulletinRegistration : _MKFModel <MKFBulletinRegistration, MKFBulletinRegistrationPrivateExtensions>

@property (class, readonly) NSPredicate *homeRelation;
@property (class, readonly, copy, nonatomic) Protocol *backingModelProtocol;

@property (copy, nonatomic) NSString *deviceIdsDestination;
@property (copy, nonatomic) NSUUID *deviceIdsIdentifier;
@property (copy, nonatomic) NSUUID *modelID;
@property (copy, nonatomic) NSDate *writerTimestamp;
@property (retain, nonatomic) NSSet *conditions_;
@property (retain, nonatomic) _MKFUser *user;
@property (copy, nonatomic) NSString *deviceIdsDestination;
@property (copy, nonatomic) NSUUID *deviceIdsIdentifier;
@property (readonly, copy, nonatomic) NSUUID *modelID;
@property (copy, nonatomic) NSDate *writerTimestamp;
@property (readonly, retain, nonatomic) NSArray *conditions;
@property (readonly, retain, nonatomic) id<MKFUser> user;
@property (readonly, copy, nonatomic) MKFBulletinRegistrationDatabaseID *databaseID;
@property (readonly) id<MKFHome> home;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)fetchRequest;
+ (id)modelIDForParentRelationshipTo:(id)a0;

- (id)materializeOrCreateConditionsRelationOfType:(id)a0 modelID:(id)a1 createdNew:(BOOL *)a2;
- (void)addConditionsObject:(id)a0;
- (id)castIfBulletinRegistration;
- (id)createConditionsRelationOfType:(id)a0 modelID:(id)a1;
- (id)createConditionsRelationOfTypePresenceBulletinConditionWithModelID:(id)a0;
- (id)createConditionsRelationOfTypeTimePeriodBulletinConditionWithModelID:(id)a0;
- (id)findConditionsRelationOfTypePresenceBulletinConditionWithModelID:(id)a0;
- (id)findConditionsRelationOfTypeTimePeriodBulletinConditionWithModelID:(id)a0;
- (id)materializeOrCreateConditionsRelationOfTypePresenceBulletinConditionWithModelID:(id)a0 createdNew:(BOOL *)a1;
- (id)materializeOrCreateConditionsRelationOfTypeTimePeriodBulletinConditionWithModelID:(id)a0 createdNew:(BOOL *)a1;
- (void)removeConditionsObject:(id)a0;
- (void)residentSyncContextualizeConditions:(id)a0 userContext:(id)a1;

@end
