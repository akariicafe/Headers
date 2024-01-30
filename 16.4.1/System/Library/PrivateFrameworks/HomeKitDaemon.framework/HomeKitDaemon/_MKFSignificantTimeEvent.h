@class Protocol, NSUUID, NSString, NSData, MKFSignificantTimeEventDatabaseID, NSNumber, NSDate;
@protocol MKFHome, MKFEventTrigger;

@interface _MKFSignificantTimeEvent : _MKFEvent <HMDNSManagedObjectBackingStoreModelObjectRepresentable, MKFSignificantTimeEvent, MKFSignificantTimeEventPrivateExtensions>

@property (class, readonly) Class cd_modelClass;
@property (class, readonly, copy, nonatomic) Protocol *backingModelProtocol;

@property (readonly, copy, nonatomic) NSUUID *hmd_modelID;
@property (readonly, copy, nonatomic) NSUUID *hmd_parentModelID;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) NSData *offset;
@property (copy, nonatomic) NSNumber *offsetSeconds;
@property (copy, nonatomic) NSString *significantEvent;
@property (retain, nonatomic) NSData *offset;
@property (copy, nonatomic) NSNumber *offsetSeconds;
@property (copy, nonatomic) NSString *significantEvent;
@property (readonly, copy, nonatomic) MKFSignificantTimeEventDatabaseID *databaseID;
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

- (void)awakeFromFetch;
- (id)castIfSignificantTimeEvent;

@end
