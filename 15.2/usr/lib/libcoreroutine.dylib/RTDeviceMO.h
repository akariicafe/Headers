@class NSString, NSSet;

@interface RTDeviceMO : RTCloudManagedObject

@property (copy, nonatomic) NSString *deviceName;
@property (copy, nonatomic) NSString *deviceClass;
@property (copy, nonatomic) NSString *deviceModel;
@property (retain, nonatomic) NSSet *places;
@property (retain, nonatomic) NSSet *visits;
@property (retain, nonatomic) NSSet *transitions;
@property (retain, nonatomic) NSSet *mapItems;
@property (retain, nonatomic) NSSet *addresses;
@property (retain, nonatomic) NSSet *deletionRequests;
@property (readonly, nonatomic) RTDeviceMO *device;

+ (id)fetchRequest;
+ (id)managedObjectWithIdentifier:(id)a0 deviceName:(id)a1 deviceClass:(id)a2 deviceModel:(id)a3 creationDate:(id)a4 inManagedObjectContext:(id)a5;

- (void)setDevice:(id)a0;

@end
