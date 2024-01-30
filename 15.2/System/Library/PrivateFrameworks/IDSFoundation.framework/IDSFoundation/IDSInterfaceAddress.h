@class IDSSockAddrWrapper, NSString, NSData;

@interface IDSInterfaceAddress : NSObject

@property (readonly) unsigned long long IPVersion;
@property (readonly) IDSSockAddrWrapper *address;
@property (copy) IDSSockAddrWrapper *external;
@property (readonly) IDSSockAddrWrapper *netmask;
@property (readonly) IDSSockAddrWrapper *destination;
@property (readonly) NSString *name;
@property (readonly) unsigned int index;
@property (readonly) NSString *delegatedName;
@property (readonly) unsigned int delegatedIndex;
@property (readonly) NSData *bssid;
@property (readonly, getter=isAWDL) BOOL AWDL;
@property (readonly, getter=isCellular) BOOL Cellular;
@property (readonly, getter=isTemporaryIPv6) BOOL temporary;
@property (readonly, getter=isCompanionLink) BOOL companionLink;
@property (readonly, getter=isWired) BOOL wired;
@property (readonly, nonatomic) BOOL expensive;
@property (nonatomic) BOOL constrained;

+ (id)BSSIDWithInterfaceName:(id)a0;
+ (id)interfaceAddress:(struct ifaddrs { struct ifaddrs *x0; char *x1; unsigned int x2; struct sockaddr *x3; struct sockaddr *x4; struct sockaddr *x5; void *x6; } *)a0 eflags:(unsigned long long)a1 v6flags:(int)a2 iftype:(int)a3;
+ (id)interfaceAddressWithTransmittedBytes:(char *)a0 length:(long long)a1 withLocalInterfaceName:(id)a2;

- (id)initWithInterfaceAddress:(struct ifaddrs { struct ifaddrs *x0; char *x1; unsigned int x2; struct sockaddr *x3; struct sockaddr *x4; struct sockaddr *x5; void *x6; } *)a0 bflags:(unsigned char)a1 bssid:(char *)a2 bssidLength:(unsigned char)a3;
- (long long)getTransmittableBytes:(char *)a0 withPrefixByte:(unsigned char)a1;
- (id)description;
- (void).cxx_destruct;

@end
