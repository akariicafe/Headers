@class NSUUID, NSString, NSDate, NSPredicate, NSData, MKFTimerTriggerDatabaseID, NSArray, Protocol, NSTimeZone, NSDateComponents, NSNumber;
@protocol MKFHome, MKFUser;

@interface _MKFTimerTrigger : _MKFTrigger <HMDNSManagedObjectBackingStoreModelObjectRepresentable, MKFTimerTrigger, MKFTimerTriggerPrivateExtensions>

@property (class, readonly) Class cd_modelClass;
@property (class, readonly) NSPredicate *homeRelation;
@property (class, readonly, copy, nonatomic) Protocol *backingModelProtocol;

@property (readonly, copy, nonatomic) NSUUID *hmd_modelID;
@property (readonly, copy, nonatomic) NSUUID *hmd_parentModelID;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (copy, nonatomic) NSDate *fireDate;
@property (retain, nonatomic) NSTimeZone *fireDateTimeZone;
@property (retain, nonatomic) NSDateComponents *fireRepeatInterval;
@property (copy, nonatomic) NSNumber *recurrenceDays;
@property (retain, nonatomic) NSData *recurrences;
@property (copy, nonatomic) NSString *significantEvent;
@property (retain, nonatomic) NSData *significantEventOffset;
@property (copy, nonatomic) NSNumber *significantEventOffsetSeconds;
@property (retain, nonatomic) NSData *recurrences;
@property (retain, nonatomic) NSData *significantEventOffset;
@property (copy, nonatomic) NSDate *fireDate;
@property (retain, nonatomic) NSTimeZone *fireDateTimeZone;
@property (retain, nonatomic) NSDateComponents *fireRepeatInterval;
@property (copy, nonatomic) NSNumber *recurrenceDays;
@property (copy, nonatomic) NSString *significantEvent;
@property (copy, nonatomic) NSNumber *significantEventOffsetSeconds;
@property (readonly, copy, nonatomic) MKFTimerTriggerDatabaseID *databaseID;
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
- (id)castIfTimerTrigger;

@end
