@class NSString, NSData;

@interface NWAddressEndpoint : NWHostEndpoint

@property (readonly, nonatomic) NSString *addressString;
@property (readonly, nonatomic) NSString *addressStringNoPort;
@property (readonly, nonatomic) NSData *addressData;
@property (readonly, nonatomic) const struct sockaddr { unsigned char x0; unsigned char x1; char x2[14]; } *address;
@property (readonly, nonatomic) unsigned long long addressFamily;

+ (unsigned int)endpointType;
+ (id)endpointWithAddress:(const struct sockaddr { unsigned char x0; unsigned char x1; char x2[14]; } *)a0;
+ (id)endpointWithHostname:(id)a0 port:(id)a1;

- (id)descriptionWithIndent:(int)a0 showFullContent:(BOOL)a1;
- (id)ethernetAddress;

@end
