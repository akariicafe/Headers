@class NSMutableArray;

@interface NEIKEv2AddressList : NSObject

@property (retain) NSMutableArray *ipv6AddressList;
@property (retain) NSMutableArray *ipv4AddressList;
@property unsigned long long ipv6AddressIndex;
@property unsigned long long ipv4AddressIndex;

+ (id)getSynthesizedIPv6Address:(id)a0 outgoingIf:(unsigned long long)a1 nat64Prefixes:(struct { int x0; unsigned char x1[12]; } *)a2 numNat64Prefixes:(int)a3;
+ (id)normalizeServerAddress:(id)a0 path:(id)a1;

- (void).cxx_destruct;
- (BOOL)addAddressToList:(id)a0;
- (id)getNextAddressForPath:(id)a0;

@end
