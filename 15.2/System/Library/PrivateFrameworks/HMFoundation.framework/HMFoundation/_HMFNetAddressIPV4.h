@interface _HMFNetAddressIPV4 : HMFNetAddressInternal

@property (readonly, nonatomic) struct sockaddr_in { unsigned char x0; unsigned char x1; unsigned short x2; struct in_addr { unsigned int x0; } x3; char x4[8]; } *internal;

- (id)dataUsingEncoding:(unsigned long long)a0;
- (id)addressString;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)addressFamily;
- (id)init;
- (unsigned long long)hash;
- (void)dealloc;
- (id)initWithSocketAddress:(const struct sockaddr { unsigned char x0; unsigned char x1; char x2[14]; } *)a0;

@end
