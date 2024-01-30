@class NSString;

@interface CUDashboardClient : NSObject {
    union { struct sockaddr { unsigned char sa_len; unsigned char sa_family; char sa_data[14]; } sa; struct sockaddr_in { unsigned char sin_len; unsigned char sin_family; unsigned short sin_port; struct in_addr { unsigned int s_addr; } sin_addr; char sin_zero[8]; } v4; struct sockaddr_in6 { unsigned char sin6_len; unsigned char sin6_family; unsigned short sin6_port; unsigned int sin6_flowinfo; struct in6_addr { union { unsigned char __u6_addr8[16]; unsigned short __u6_addr16[8]; unsigned int __u6_addr32[4]; } __u6_addr; } sin6_addr; unsigned int sin6_scope_id; } v6; } _destAddr;
    unsigned int _destLen;
    unsigned char _key[32];
    char _model[32];
    char _osBuild[32];
    int _sock;
    unsigned char _udid[20];
}

@property (copy, nonatomic) NSString *server;

- (int)_setupSocket;
- (id)init;
- (void).cxx_destruct;
- (int)_logCStr:(const char *)a0 length:(unsigned long long)a1;
- (void)dealloc;
- (int)_activate;
- (int)activate;
- (int)logJSON:(id)a0;
- (int)logf:(const char *)a0;
- (int)logv:(const char *)a0 args:(char *)a1;
- (void)invalidate;

@end
