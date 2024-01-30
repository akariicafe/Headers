@class NSUUID, NSString, NSArray, NSPredicate, NSSet, NSDate, Protocol, NSNumber, MKFEventPresenceDatabaseID;
@protocol MKFHome, MKFTriggerEvent;

@interface _MKFEventPresence : _MKFEvent <HMDNSManagedObjectBackingStoreModelObjectRepresentable, MKFEventPresence, MKFEventPresencePrivateExtensions>

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
@property (readonly, copy, nonatomic) MKFEventPresenceDatabaseID *databaseID;
@property (readonly) id<MKFHome> home;
@property (copy, nonatomic) NSNumber *endEvent;
@property (readonly, retain, nonatomic) id<MKFTriggerEvent> trigger;
@property (readonly, copy, nonatomic) NSUUID *modelID;
@property (copy, nonatomic) NSDate *writerTimestamp;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)fetchRequest;
+ (id)modelIDForParentRelationshipTo:(id)a0;
+ (Class)backingModelClass;

- (id)castIfEventPresence;
- (void)addUsersObject:(id)a0;
- (void)removeUsersObject:(id)a0;
- (BOOL)synchronizeUsersRelationWith:(id)a0;
- (BOOL)validateForInsertOrUpdate:(id *)a0;

@end
