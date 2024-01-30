@class NSSet;

@interface CRKLocalDeviceIPAddresses : NSObject

@property (readonly, copy, nonatomic) NSSet *IPAddresses;

+ (id)makeIPAddresses;

- (id)init;
- (void).cxx_destruct;
- (BOOL)containsIPAddress:(id)a0;

@end
