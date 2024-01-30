@class STCoreUser, NSSet, STCoreDevice, NSDate;

@interface STUsage : NSManagedObject

@property (retain, nonatomic) NSDate *lastEventDate;
@property (retain, nonatomic) NSSet *blocks;
@property (retain, nonatomic) NSDate *lastUpdatedDate;
@property (retain, nonatomic) STCoreDevice *device;
@property (retain, nonatomic) STCoreUser *user;

+ (id)fetchRequestMatchingUser:(id)a0 device:(id)a1;

@end
