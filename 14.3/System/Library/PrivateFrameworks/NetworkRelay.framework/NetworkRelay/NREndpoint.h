@class NSString, NWEndpoint, NRDeviceIdentifier, NSObject;
@protocol OS_nw_endpoint;

@interface NREndpoint : NSObject <NSCopying>

@property (retain, nonatomic) NRDeviceIdentifier *deviceIdentifier;
@property (retain, nonatomic) NSString *portString;
@property (nonatomic) unsigned char dataProtectionClass;
@property (retain, nonatomic) NWEndpoint *endpoint;
@property (retain, nonatomic) NSObject<OS_nw_endpoint> *cEndpoint;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (id)copyEndpoint;
- (id)initWithDeviceIdentifier:(id)a0 portString:(id)a1 dataProtectionClass:(unsigned char)a2;
- (id)copyNWEndpoint;

@end
