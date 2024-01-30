@class NSData;

@interface NWStatisticsRouteSource : NWStatisticsSource {
    struct nstat_route_descriptor { unsigned long long id; unsigned long long parent_id; unsigned long long gateway_id; union { struct sockaddr_in { unsigned char sin_len; unsigned char sin_family; unsigned short sin_port; struct in_addr { unsigned int s_addr; } sin_addr; char sin_zero[8]; } v4; struct sockaddr_in6 { unsigned char sin6_len; unsigned char sin6_family; unsigned short sin6_port; unsigned int sin6_flowinfo; struct in6_addr { union { unsigned char __u6_addr8[16]; unsigned short __u6_addr16[8]; unsigned int __u6_addr32[4]; } __u6_addr; } sin6_addr; unsigned int sin6_scope_id; } v6; struct sockaddr { unsigned char sa_len; unsigned char sa_family; char sa_data[14]; } sa; } dst; union { struct sockaddr_in { unsigned char sin_len; unsigned char sin_family; unsigned short sin_port; struct in_addr { unsigned int s_addr; } sin_addr; char sin_zero[8]; } v4; struct sockaddr_in6 { unsigned char sin6_len; unsigned char sin6_family; unsigned short sin6_port; unsigned int sin6_flowinfo; struct in6_addr { union { unsigned char __u6_addr8[16]; unsigned short __u6_addr16[8]; unsigned int __u6_addr32[4]; } __u6_addr; } sin6_addr; unsigned int sin6_scope_id; } v6; struct sockaddr { unsigned char sa_len; unsigned char sa_family; char sa_data[14]; } sa; } mask; union { struct sockaddr_in { unsigned char sin_len; unsigned char sin_family; unsigned short sin_port; struct in_addr { unsigned int s_addr; } sin_addr; char sin_zero[8]; } v4; struct sockaddr_in6 { unsigned char sin6_len; unsigned char sin6_family; unsigned short sin6_port; unsigned int sin6_flowinfo; struct in6_addr { union { unsigned char __u6_addr8[16]; unsigned short __u6_addr16[8]; unsigned int __u6_addr32[4]; } __u6_addr; } sin6_addr; unsigned int sin6_scope_id; } v6; struct sockaddr { unsigned char sa_len; unsigned char sa_family; char sa_data[14]; } sa; } gateway; unsigned int ifindex; unsigned int flags; unsigned char reserved[4]; } _descriptor;
}

@property (retain) NSData *destination;

- (id)initWithManager:(id)a0 destination:(const struct sockaddr { unsigned char x0; unsigned char x1; char x2[14]; } *)a1 mask:(const struct sockaddr { unsigned char x0; unsigned char x1; char x2[14]; } *)a2 interface:(unsigned int)a3;
- (int)handleDescriptor:(void *)a0 length:(unsigned long long)a1 events:(unsigned long long)a2;
- (id)description;
- (void).cxx_destruct;
- (id)_currentSnapshot;

@end
