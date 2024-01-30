@class NSUUID, NSString, NSData, NSPredicate, NSSet, NSArray, MKFEventTriggerDatabaseID, NSDate, Protocol, NSNumber;
@protocol MKFHome, MKFUser;

@interface _MKFEventTrigger : _MKFTrigger <HMDNSManagedObjectBackingStoreModelObjectRepresentable, MKFEventTrigger, MKFEventTriggerPrivateExtensions>

@property (class, readonly) Class cd_modelClass;
@property (class, readonly) NSPredicate *homeRelation;
@property (class, readonly, copy, nonatomic) Protocol *backingModelProtocol;

@property (readonly, copy, nonatomic) NSUUID *hmd_modelID;
@property (readonly, copy, nonatomic) NSUUID *hmd_parentModelID;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) NSPredicate *evaluationCondition;
@property (copy, nonatomic) NSNumber *executeOnce;
@property (copy, nonatomic) NSNumber *recurrenceDays;
@property (retain, nonatomic) NSData *recurrences;
@property (retain, nonatomic) NSSet *events_;
@property (retain, nonatomic) NSData *recurrences;
@property (retain, nonatomic) NSPredicate *evaluationCondition;
@property (copy, nonatomic) NSNumber *executeOnce;
@property (copy, nonatomic) NSNumber *recurrenceDays;
@property (readonly, retain, nonatomic) NSArray *events;
@property (readonly, copy, nonatomic) MKFEventTriggerDatabaseID *databaseID;
@property (copy, nonatomic) NSNumber *active;
@property (copy, nonatomic) NSNumber *autoDelete;
@property (copy, nonatomic) NSString *configuredName;
@property (readonly, copy, nonatomic) NSUUID *modelID;
@property (copy, nonatomic) NSDate *mostRecentFireDate;
@property (copy, nonatomic) NSString *name;
@property (copy, nonatomic) NSDate *writerTimestamp;
@property (retain, nonatomic) NSArray *actionSets;
@property (readonly, retain, nonatomic) id<MKFHome> home;
@property (retain, nonatomic) id<MKFUser> owner;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)fetchRequest;
+ (id)modelIDForParentRelationshipTo:(id)a0;

- (void)awakeFromFetch;
- (id)castIfEventTrigger;
- (id)createEventsRelationOfType:(id)a0 modelID:(id)a1;
- (id)createEventsRelationOfTypeCalendarEventWithModelID:(id)a0;
- (id)createEventsRelationOfTypeCharacteristicRangeEventWithModelID:(id)a0;
- (id)createEventsRelationOfTypeCharacteristicValueEventWithModelID:(id)a0;
- (id)createEventsRelationOfTypeDurationEventWithModelID:(id)a0;
- (id)createEventsRelationOfTypeLocationEventWithModelID:(id)a0;
- (id)createEventsRelationOfTypePresenceEventWithModelID:(id)a0;
- (id)createEventsRelationOfTypeSignificantTimeEventWithModelID:(id)a0;
- (id)findEventsRelationOfTypeCalendarEventWithModelID:(id)a0;
- (id)findEventsRelationOfTypeCharacteristicRangeEventWithModelID:(id)a0;
- (id)findEventsRelationOfTypeCharacteristicValueEventWithModelID:(id)a0;
- (id)findEventsRelationOfTypeDurationEventWithModelID:(id)a0;
- (id)findEventsRelationOfTypeLocationEventWithModelID:(id)a0;
- (id)findEventsRelationOfTypePresenceEventWithModelID:(id)a0;
- (id)findEventsRelationOfTypeSignificantTimeEventWithModelID:(id)a0;
- (id)materializeOrCreateEventsRelationOfType:(id)a0 modelID:(id)a1 createdNew:(BOOL *)a2;
- (id)materializeOrCreateEventsRelationOfTypeCalendarEventWithModelID:(id)a0 createdNew:(BOOL *)a1;
- (id)materializeOrCreateEventsRelationOfTypeCharacteristicRangeEventWithModelID:(id)a0 createdNew:(BOOL *)a1;
- (id)materializeOrCreateEventsRelationOfTypeCharacteristicValueEventWithModelID:(id)a0 createdNew:(BOOL *)a1;
- (id)materializeOrCreateEventsRelationOfTypeDurationEventWithModelID:(id)a0 createdNew:(BOOL *)a1;
- (id)materializeOrCreateEventsRelationOfTypeLocationEventWithModelID:(id)a0 createdNew:(BOOL *)a1;
- (id)materializeOrCreateEventsRelationOfTypePresenceEventWithModelID:(id)a0 createdNew:(BOOL *)a1;
- (id)materializeOrCreateEventsRelationOfTypeSignificantTimeEventWithModelID:(id)a0 createdNew:(BOOL *)a1;
- (id)residentSyncAttributeValueForKey:(id)a0 userContext:(id)a1;
- (void)residentSyncContextualizeConditions:(id)a0 userContext:(id)a1;

@end
