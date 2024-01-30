@class NSUUID, NSString, NSData, NSPredicate, NSSet, NSArray, MKFTriggerEventDatabaseID, NSDate, Protocol, NSNumber;
@protocol MKFHome, MKFUser, MKFDevice;

@interface _MKFTriggerEvent : _MKFTrigger <HMDNSManagedObjectBackingStoreModelObjectRepresentable, MKFTriggerEvent, MKFTriggerEventPrivateExtensions>

@property (class, readonly) Class cd_modelClass;
@property (class, readonly) NSPredicate *homeRelation;
@property (class, readonly, copy, nonatomic) Protocol *backingModelProtocol;

@property (readonly, copy, nonatomic) NSUUID *hmd_modelID;
@property (readonly, copy, nonatomic) NSUUID *hmd_parentModelID;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) NSData *evaluationCondition;
@property (copy, nonatomic) NSNumber *executeOnce;
@property (retain, nonatomic) NSSet *events_;
@property (retain, nonatomic) NSData *evaluationCondition;
@property (copy, nonatomic) NSNumber *executeOnce;
@property (readonly, retain, nonatomic) NSArray *events;
@property (readonly, copy, nonatomic) MKFTriggerEventDatabaseID *databaseID;
@property (copy, nonatomic) NSNumber *active;
@property (copy, nonatomic) NSNumber *autoDelete;
@property (copy, nonatomic) NSString *configuredName;
@property (copy, nonatomic) NSDate *mostRecentFireDate;
@property (copy, nonatomic) NSString *name;
@property (retain, nonatomic) NSData *recurrences;
@property (retain, nonatomic) NSArray *actionSets;
@property (readonly, retain, nonatomic) id<MKFHome> home;
@property (retain, nonatomic) id<MKFUser> owner;
@property (retain, nonatomic) id<MKFDevice> owningDevice;
@property (readonly, copy, nonatomic) NSUUID *modelID;
@property (copy, nonatomic) NSDate *writerTimestamp;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)fetchRequest;
+ (id)modelIDForParentRelationshipTo:(id)a0;
+ (Class)backingModelClass;

- (id)castIfTriggerEvent;
- (id)materializeOrCreateEventsRelationOfType:(id)a0 modelID:(id)a1 createdNew:(BOOL *)a2;
- (id)materializeOrCreateEventsRelationOfTypeEventCalendarWithModelID:(id)a0 createdNew:(BOOL *)a1;
- (id)findEventsRelationOfTypeEventCalendarWithModelID:(id)a0;
- (id)materializeOrCreateEventsRelationOfTypeEventCharacteristicThresholdRangeWithModelID:(id)a0 createdNew:(BOOL *)a1;
- (id)findEventsRelationOfTypeEventCharacteristicThresholdRangeWithModelID:(id)a0;
- (id)materializeOrCreateEventsRelationOfTypeEventCharacteristicValueWithModelID:(id)a0 createdNew:(BOOL *)a1;
- (id)findEventsRelationOfTypeEventCharacteristicValueWithModelID:(id)a0;
- (id)materializeOrCreateEventsRelationOfTypeEventDurationWithModelID:(id)a0 createdNew:(BOOL *)a1;
- (id)findEventsRelationOfTypeEventDurationWithModelID:(id)a0;
- (id)materializeOrCreateEventsRelationOfTypeEventLocationWithModelID:(id)a0 createdNew:(BOOL *)a1;
- (id)findEventsRelationOfTypeEventLocationWithModelID:(id)a0;
- (id)materializeOrCreateEventsRelationOfTypeEventPresenceWithModelID:(id)a0 createdNew:(BOOL *)a1;
- (id)findEventsRelationOfTypeEventPresenceWithModelID:(id)a0;
- (id)materializeOrCreateEventsRelationOfTypeEventSignificantTimeWithModelID:(id)a0 createdNew:(BOOL *)a1;
- (id)findEventsRelationOfTypeEventSignificantTimeWithModelID:(id)a0;

@end
