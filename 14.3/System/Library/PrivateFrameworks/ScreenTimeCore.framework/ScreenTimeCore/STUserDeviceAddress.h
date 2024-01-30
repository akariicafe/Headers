@class NSString, STCoreUser, STCoreDevice;

@interface STUserDeviceAddress : NSManagedObject

@property (retain, nonatomic) NSString *idsURI;
@property (retain, nonatomic) STCoreUser *user;
@property (retain, nonatomic) STCoreDevice *device;

+ (id)fetchOrCreateUserDeviceAddressWithUser:(id)a0 device:(id)a1 context:(id)a2 error:(id *)a3;

@end
