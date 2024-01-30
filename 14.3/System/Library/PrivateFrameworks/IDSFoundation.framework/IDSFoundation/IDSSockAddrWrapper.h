@interface IDSSockAddrWrapper : NSObject <NSCopying> {
    struct sockaddr_storage { unsigned char ss_len; unsigned char ss_family; char __ss_pad1[6]; long long __ss_align; char __ss_pad2[112]; } _sa;
}

@property (readonly, nonatomic) const struct sockaddr { unsigned char x0; unsigned char x1; char x2[14]; } *sa;
@property (readonly, nonatomic) const struct sockaddr_in { unsigned char x0; unsigned char x1; unsigned short x2; struct in_addr { unsigned int x0; } x3; char x4[8]; } *sa4;
@property (readonly, nonatomic) const struct sockaddr_in6 { unsigned char x0; unsigned char x1; unsigned short x2; unsigned int x3; struct in6_addr { union { unsigned char x0[16]; unsigned short x1[8]; unsigned int x2[4]; } x0; } x4; unsigned int x5; } *sa6;
@property (readonly, nonatomic) unsigned short saPortHostOrder;

+ (id)wrapperWithWrapper:(id)a0 andPortHostOrder:(unsigned short)a1;
+ (id)wrapperWithAddressString:(id)a0 withPortHostOrder:(unsigned short)a1 withInterfaceName:(id)a2;
+ (id)wrapperWithSockAddr:(const struct sockaddr { unsigned char x0; unsigned char x1; char x2[14]; } *)a0;
+ (id)wrapperWithAddressString:(id)a0 withPortHostOrder:(unsigned short)a1;

- (BOOL)isEqualToWrapper:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)updateLocalPort:(unsigned short)a0;
- (void)copySockAddr:(struct sockaddr { unsigned char x0; unsigned char x1; char x2[14]; } *)a0;
- (unsigned long long)hash;
- (id)ipData;
- (id)initWithSockAddr:(const struct sockaddr { unsigned char x0; unsigned char x1; char x2[14]; } *)a0;
- (id)description;
- (BOOL)isEqualToSockAddr:(const struct sockaddr { unsigned char x0; unsigned char x1; char x2[14]; } *)a0;
- (BOOL)isEqual:(id)a0;
- (id)ipString;

@end
