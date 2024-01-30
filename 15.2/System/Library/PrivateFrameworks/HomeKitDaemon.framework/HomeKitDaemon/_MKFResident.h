@class NSUUID, NSString, NSDate, MKFResidentDatabaseID, _MKFDevice, Protocol, _MKFHome, NSNumber;
@protocol MKFHome, MKFDevice;

@interface _MKFResident : _MKFModel <MKFResident, MKFResidentPrivateExtensions>

@property (class, readonly, copy, nonatomic) Protocol *backingModelProtocol;

@property (copy, nonatomic) NSString *name;
@property (copy, nonatomic) NSNumber *reachable;
@property (retain, nonatomic) _MKFDevice *device;
@property (retain, nonatomic) _MKFHome *home;
@property (copy, nonatomic) NSString *name;
@property (copy, nonatomic) NSNumber *reachable;
@property (retain, nonatomic) id<MKFDevice> device;
@property (retain, nonatomic) id<MKFHome> home;
@property (readonly, copy, nonatomic) MKFResidentDatabaseID *databaseID;
@property (readonly, copy, nonatomic) NSUUID *modelID;
@property (copy, nonatomic) NSDate *writerTimestamp;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)fetchRequest;
+ (id)modelIDForParentRelationshipTo:(id)a0;
+ (Class)backingModelClass;

- (id)castIfResident;

@end
