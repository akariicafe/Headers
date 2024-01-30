@class NSUUID, NSString, CLRegion, MKFLocationEventDatabaseID, NSDate, Protocol, _MKFUser, NSNumber;
@protocol MKFUser, MKFHome, MKFEventTrigger;

@interface _MKFLocationEvent : _MKFEvent <HMDNSManagedObjectBackingStoreModelObjectRepresentable, MKFLocationEvent, MKFLocationEventPrivateExtensions>

@property (class, readonly) Class cd_modelClass;
@property (class, readonly, copy, nonatomic) Protocol *backingModelProtocol;

@property (readonly, copy, nonatomic) NSUUID *hmd_modelID;
@property (readonly, copy, nonatomic) NSUUID *hmd_parentModelID;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) CLRegion *region;
@property (retain, nonatomic) _MKFUser *user;
@property (retain, nonatomic) CLRegion *region;
@property (retain, nonatomic) id<MKFUser> user;
@property (readonly, copy, nonatomic) MKFLocationEventDatabaseID *databaseID;
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

- (void)addUserObject:(id)a0;
- (id)castIfLocationEvent;
- (void)removeUserObject:(id)a0;
- (BOOL)synchronizeUserRelationWith:(id)a0;

@end
