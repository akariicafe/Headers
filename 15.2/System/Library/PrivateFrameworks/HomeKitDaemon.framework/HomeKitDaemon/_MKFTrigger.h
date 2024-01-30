@class Protocol, MKFTriggerDatabaseID, NSNumber, NSDate, NSPredicate, _MKFUser, NSString, NSSet, NSArray, NSData, _MKFDevice, _MKFHome, NSUUID;
@protocol MKFHome, MKFUser, MKFDevice;

@interface _MKFTrigger : _MKFModel <HMDNSManagedObjectBackingStoreModelObjectRepresentable, MKFTrigger, MKFTriggerPrivateExtensions>

@property (class, readonly) Class cd_modelClass;
@property (class, readonly) NSPredicate *homeRelation;
@property (class, readonly, copy, nonatomic) Protocol *backingModelProtocol;

@property (readonly, copy, nonatomic) NSUUID *hmd_modelID;
@property (readonly, copy, nonatomic) NSUUID *hmd_parentModelID;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (copy, nonatomic) NSNumber *active;
@property (copy, nonatomic) NSNumber *autoDelete;
@property (copy, nonatomic) NSString *configuredName;
@property (copy, nonatomic) NSDate *mostRecentFireDate;
@property (copy, nonatomic) NSString *name;
@property (retain, nonatomic) NSData *recurrences;
@property (retain, nonatomic) NSSet *actionSets_;
@property (retain, nonatomic) _MKFHome *home;
@property (retain, nonatomic) _MKFUser *owner;
@property (retain, nonatomic) _MKFDevice *owningDevice;
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
@property (readonly, copy, nonatomic) MKFTriggerDatabaseID *databaseID;
@property (readonly, copy, nonatomic) NSUUID *modelID;
@property (copy, nonatomic) NSDate *writerTimestamp;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)fetchRequest;
+ (id)modelIDForParentRelationshipTo:(id)a0;
+ (Class)backingModelClass;

- (id)castIfTrigger;
- (void)addActionSetsObject:(id)a0;
- (void)removeActionSetsObject:(id)a0;

@end
