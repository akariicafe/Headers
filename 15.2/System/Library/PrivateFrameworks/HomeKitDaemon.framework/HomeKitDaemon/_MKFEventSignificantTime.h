@class Protocol, NSUUID, NSString, NSData, MKFEventSignificantTimeDatabaseID, NSNumber, NSDate;
@protocol MKFHome, MKFTriggerEvent;

@interface _MKFEventSignificantTime : _MKFEvent <HMDNSManagedObjectBackingStoreModelObjectRepresentable, MKFEventSignificantTime, MKFEventSignificantTimePrivateExtensions>

@property (class, readonly) Class cd_modelClass;
@property (class, readonly, copy, nonatomic) Protocol *backingModelProtocol;

@property (readonly, copy, nonatomic) NSUUID *hmd_modelID;
@property (readonly, copy, nonatomic) NSUUID *hmd_parentModelID;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) NSData *offset;
@property (copy, nonatomic) NSString *significantEvent;
@property (retain, nonatomic) NSData *offset;
@property (copy, nonatomic) NSString *significantEvent;
@property (readonly, copy, nonatomic) MKFEventSignificantTimeDatabaseID *databaseID;
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

- (id)castIfEventSignificantTime;

@end
