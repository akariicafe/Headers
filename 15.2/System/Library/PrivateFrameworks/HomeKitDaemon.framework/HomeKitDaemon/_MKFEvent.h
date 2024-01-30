@class NSUUID, NSString, _MKFTriggerEvent, NSPredicate, NSDate, Protocol, MKFEventDatabaseID, NSNumber;
@protocol MKFTriggerEvent, MKFHome;

@interface _MKFEvent : _MKFModel <HMDNSManagedObjectBackingStoreModelObjectRepresentable, MKFEvent, MKFEventPrivateExtensions>

@property (class, readonly) Class cd_modelClass;
@property (class, readonly) NSPredicate *homeRelation;
@property (class, readonly, copy, nonatomic) Protocol *backingModelProtocol;

@property (readonly, copy, nonatomic) NSUUID *hmd_modelID;
@property (readonly, copy, nonatomic) NSUUID *hmd_parentModelID;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (copy, nonatomic) NSNumber *endEvent;
@property (retain, nonatomic) _MKFTriggerEvent *trigger;
@property (copy, nonatomic) NSNumber *endEvent;
@property (readonly, retain, nonatomic) id<MKFTriggerEvent> trigger;
@property (readonly, copy, nonatomic) MKFEventDatabaseID *databaseID;
@property (readonly) id<MKFHome> home;
@property (readonly, copy, nonatomic) NSUUID *modelID;
@property (copy, nonatomic) NSDate *writerTimestamp;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)fetchRequest;
+ (id)modelIDForParentRelationshipTo:(id)a0;
+ (Class)backingModelClass;

- (id)castIfEvent;

@end
