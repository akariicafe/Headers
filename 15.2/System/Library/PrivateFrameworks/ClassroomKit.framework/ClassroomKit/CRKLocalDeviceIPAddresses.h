@class NSSet;

@interface CRKLocalDeviceIPAddresses : NSObject

@property (readonly, copy, nonatomic) NSSet *IPAddresses;

+ (id)makeIPAddresses;

- (void).cxx_destruct;
- (id)init;
- (BOOL)containsIPAddress:(id)a0;

@end
