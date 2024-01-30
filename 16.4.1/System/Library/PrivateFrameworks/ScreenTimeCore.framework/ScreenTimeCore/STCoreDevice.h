@class NSSet, NSString, STUserDeviceState;
@protocol STSerializableManagedObject;

@interface STCoreDevice : NSManagedObject <STSyncableSubObject>

@property (retain, nonatomic) NSSet *userDeviceAddresses;
@property (copy, nonatomic) NSString *identifier;
@property (copy, nonatomic) NSString *name;
@property (nonatomic) short platform;
@property (retain, nonatomic) STUserDeviceState *localUserDeviceState;
@property (retain, nonatomic) NSSet *userDeviceStates;
@property (retain, nonatomic) NSSet *usages;
@property (readonly) id<STSerializableManagedObject> syncableRootObject;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)fetchRequestForOrphanedDevices;
+ (id)fetchOrCreateLocalDeviceInContext:(id)a0 error:(id *)a1;
+ (id)fetchOrCreateDeviceWithIdentifier:(id)a0 inContext:(id)a1 error:(id *)a2;
+ (id)fetchDeviceWithIdentifier:(id)a0 inContext:(id)a1 error:(id *)a2;


@end
