@interface TSBonjourIPv6Address : NSObject <NSCopying> {
    unsigned char _ipv6Address[16];
    unsigned char _linkLayerAddress[6];
}

@property (nonatomic) BOOL hasLinkLayerAddress;
@property (readonly, nonatomic) const char *ipv6Address;
@property (readonly, nonatomic) const char *linkLayerAddress;

+ (BOOL)getLinkLayerAddress:(char *)a0 forIPv6Address:(const char *)a1 error:(id *)a2;

- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)pokeDestinationAtPort:(unsigned short)a0 onInterfaceIndex:(unsigned int)a1;
- (const char *)linkLayerAddress;
- (BOOL)getLinkLayerAddressError:(id *)a0;
- (id)initWithIPv6Address:(const char *)a0;

@end
