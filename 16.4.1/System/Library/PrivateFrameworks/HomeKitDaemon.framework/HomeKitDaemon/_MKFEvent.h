@class NSUUID, NSString, NSDate, NSPredicate, MKFEventDatabaseID, Protocol, NSNumber, _MKFEventTrigger;
@protocol MKFEventTrigger, MKFHome;

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
@property (copy, nonatomic) NSUUID *modelID;
@property (copy, nonatomic) NSDate *writerTimestamp;
@property (retain, nonatomic) _MKFEventTrigger *trigger;
@property (copy, nonatomic) NSNumber *endEvent;
@property (readonly, copy, nonatomic) NSUUID *modelID;
@property (copy, nonatomic) NSDate *writerTimestamp;
@property (readonly, retain, nonatomic) id<MKFEventTrigger> trigger;
@property (readonly, copy, nonatomic) MKFEventDatabaseID *databaseID;
@property (readonly) id<MKFHome> home;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)fetchRequest;
+ (id)modelIDForParentRelationshipTo:(id)a0;

- (id)castIfEvent;

@end
