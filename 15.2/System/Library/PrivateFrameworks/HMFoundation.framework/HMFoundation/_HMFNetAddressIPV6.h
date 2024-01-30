@interface _HMFNetAddressIPV6 : HMFNetAddressInternal

@property (readonly, nonatomic) struct sockaddr_in6 { unsigned char x0; unsigned char x1; unsigned short x2; unsigned int x3; struct in6_addr { union { unsigned char x0[16]; unsigned short x1[8]; unsigned int x2[4]; } x0; } x4; unsigned int x5; } *internal;

- (id)dataUsingEncoding:(unsigned long long)a0;
- (id)addressString;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)addressFamily;
- (id)init;
- (unsigned long long)hash;
- (void)dealloc;
- (id)initWithSocketAddress:(const struct sockaddr { unsigned char x0; unsigned char x1; char x2[14]; } *)a0;

@end
