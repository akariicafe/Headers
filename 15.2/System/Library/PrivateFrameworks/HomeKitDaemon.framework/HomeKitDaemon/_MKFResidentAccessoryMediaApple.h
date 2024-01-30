@class MKFResidentAccessoryMediaAppleDatabaseID, _MKFAccessoryMediaApple, Protocol, NSString, NSUUID, NSNumber, NSDate;
@protocol MKFHome, MKFDevice, MKFAccessoryMediaApple;

@interface _MKFResidentAccessoryMediaApple : _MKFResident <MKFResidentAccessoryMediaApple, MKFResidentAccessoryMediaApplePrivateExtensions>

@property (class, readonly, copy, nonatomic) Protocol *backingModelProtocol;

@property (retain, nonatomic) _MKFAccessoryMediaApple *accessory;
@property (retain, nonatomic) id<MKFAccessoryMediaApple> accessory;
@property (readonly, copy, nonatomic) MKFResidentAccessoryMediaAppleDatabaseID *databaseID;
@property (copy, nonatomic) NSString *name;
@property (copy, nonatomic) NSNumber *reachable;
@property (retain, nonatomic) id<MKFDevice> device;
@property (retain, nonatomic) id<MKFHome> home;
@property (readonly, copy, nonatomic) NSUUID *modelID;
@property (copy, nonatomic) NSDate *writerTimestamp;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)fetchRequest;
+ (Class)backingModelClass;

- (id)castIfResidentAccessoryMediaApple;

@end
