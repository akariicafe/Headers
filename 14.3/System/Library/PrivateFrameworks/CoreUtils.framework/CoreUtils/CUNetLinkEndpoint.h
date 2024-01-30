@interface CUNetLinkEndpoint : NSObject {
    unsigned long long _expireTime;
    unsigned long long _expiredTicks;
    BOOL _present;
    unsigned int _seqNum;
    unsigned int _stateChanges;
}

@property (nonatomic) union { struct sockaddr { unsigned char sa_len; unsigned char sa_family; char sa_data[14]; } sa; struct sockaddr_in { unsigned char sin_len; unsigned char sin_family; unsigned short sin_port; struct in_addr { unsigned int s_addr; } sin_addr; char sin_zero[8]; } v4; struct sockaddr_in6 { unsigned char sin6_len; unsigned char sin6_family; unsigned short sin6_port; unsigned int sin6_flowinfo; struct in6_addr { union { unsigned char __u6_addr8[16]; unsigned short __u6_addr16[8]; unsigned int __u6_addr32[4]; } __u6_addr; } sin6_addr; unsigned int sin6_scope_id; } v6; } ipAddr;
@property (readonly, nonatomic, getter=isClient) BOOL client;
@property (readonly, nonatomic) int state;
@property (copy, nonatomic) id /* block */ stateChangedHandler;

- (void).cxx_destruct;
- (id)description;
- (id)descriptionWithLevel:(int)a0;

@end
