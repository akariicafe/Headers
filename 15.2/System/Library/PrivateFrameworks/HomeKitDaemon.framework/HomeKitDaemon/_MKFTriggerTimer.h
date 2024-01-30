@class NSUUID, NSString, NSDate, NSPredicate, NSData, MKFTriggerTimerDatabaseID, NSArray, Protocol, NSNumber;
@protocol MKFHome, MKFUser, MKFDevice;

@interface _MKFTriggerTimer : _MKFTrigger <HMDNSManagedObjectBackingStoreModelObjectRepresentable, MKFTriggerTimer, MKFTriggerTimerPrivateExtensions>

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
@property (retain, nonatomic) NSData *fireDateTimeZone;
@property (retain, nonatomic) NSData *fireRepeatInterval;
@property (copy, nonatomic) NSString *significantEvent;
@property (retain, nonatomic) NSData *significantEventOffset;
@property (copy, nonatomic) NSDate *fireDate;
@property (retain, nonatomic) NSData *fireDateTimeZone;
@property (retain, nonatomic) NSData *fireRepeatInterval;
@property (copy, nonatomic) NSString *significantEvent;
@property (retain, nonatomic) NSData *significantEventOffset;
@property (readonly, copy, nonatomic) MKFTriggerTimerDatabaseID *databaseID;
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

- (id)castIfTriggerTimer;

@end
