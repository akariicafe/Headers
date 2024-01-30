@class NSUUID, NSString, NSArray, NSPredicate, NSSet, NSDate, MKFPresenceEventDatabaseID, Protocol, NSNumber;
@protocol MKFHome, MKFEventTrigger;

@interface _MKFPresenceEvent : _MKFEvent <HMDNSManagedObjectBackingStoreModelObjectRepresentable, MKFPresenceEvent, MKFPresenceEventPrivateExtensions>

@property (class, readonly) Class cd_modelClass;
@property (class, readonly) NSPredicate *homeRelation;
@property (class, readonly, copy, nonatomic) Protocol *backingModelProtocol;

@property (readonly, copy, nonatomic) NSUUID *hmd_modelID;
@property (readonly, copy, nonatomic) NSUUID *hmd_parentModelID;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (copy, nonatomic) NSNumber *activation;
@property (copy, nonatomic) NSString *presenceType;
@property (retain, nonatomic) NSSet *users_;
@property (copy, nonatomic) NSNumber *activation;
@property (copy, nonatomic) NSString *presenceType;
@property (readonly, retain, nonatomic) NSArray *users;
@property (readonly, copy, nonatomic) MKFPresenceEventDatabaseID *databaseID;
@property (readonly) id<MKFHome> home;
@property (copy, nonatomic) NSNumber *endEvent;
@property (readonly, copy, nonatomic) NSUUID *modelID;
@property (copy, nonatomic) NSDate *writerTimestamp;
@property (readonly, retain, nonatomic) id<MKFEventTrigger> trigger;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)fetchRequest;
+ (id)modelIDForParentRelationshipTo:(id)a0;

- (void)addUsersObject:(id)a0;
- (id)castIfPresenceEvent;
- (void)removeUsersObject:(id)a0;
- (BOOL)synchronizeUsersRelationWith:(id)a0;
- (BOOL)validateForInsertOrUpdate:(id *)a0;

@end
