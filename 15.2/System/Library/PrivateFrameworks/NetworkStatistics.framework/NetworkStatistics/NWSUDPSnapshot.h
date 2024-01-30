@class NSString, NSData;

@interface NWSUDPSnapshot : NWSProtocolSnapshot {
    NSString *_processName;
    NSString *_uuid;
    NSString *_euuid;
    NSString *_fuuid;
    NSString *_vuuid;
    NSData *_localAddress;
    NSData *_remoteAddress;
    struct nstat_udp_descriptor { unsigned long long upid; unsigned long long eupid; unsigned long long start_timestamp; unsigned long long timestamp; struct activity_bitmap { unsigned long long start; unsigned long long bitmap[2]; } activity_bitmap; union { struct sockaddr_in { unsigned char sin_len; unsigned char sin_family; unsigned short sin_port; struct in_addr { unsigned int s_addr; } sin_addr; char sin_zero[8]; } v4; struct sockaddr_in6 { unsigned char sin6_len; unsigned char sin6_family; unsigned short sin6_port; unsigned int sin6_flowinfo; struct in6_addr { union { unsigned char __u6_addr8[16]; unsigned short __u6_addr16[8]; unsigned int __u6_addr32[4]; } __u6_addr; } sin6_addr; unsigned int sin6_scope_id; } v6; } local; union { struct sockaddr_in { unsigned char sin_len; unsigned char sin_family; unsigned short sin_port; struct in_addr { unsigned int s_addr; } sin_addr; char sin_zero[8]; } v4; struct sockaddr_in6 { unsigned char sin6_len; unsigned char sin6_family; unsigned short sin6_port; unsigned int sin6_flowinfo; struct in6_addr { union { unsigned char __u6_addr8[16]; unsigned short __u6_addr16[8]; unsigned int __u6_addr32[4]; } __u6_addr; } sin6_addr; unsigned int sin6_scope_id; } v6; } remote; unsigned int ifindex; unsigned int rcvbufsize; unsigned int rcvbufused; unsigned int traffic_class; unsigned int pid; char pname[64]; unsigned int epid; unsigned char uuid[16]; unsigned char euuid[16]; unsigned char vuuid[16]; unsigned char fuuid[16]; unsigned int ifnet_properties; unsigned char fallback_mode; unsigned char reserved[3]; } _descriptor;
    unsigned int _provider;
    unsigned long long _eventFlags;
}

- (unsigned int)receiveBufferSize;
- (BOOL)interfaceUnknown;
- (BOOL)interfaceWired;
- (unsigned long long)networkActivityMapPart1;
- (unsigned long long)flowStartContinuousTime;
- (unsigned int)interfaceIndex;
- (id)fuuid;
- (int)epid;
- (BOOL)interfaceAWDL;
- (BOOL)interfaceLoopback;
- (BOOL)interfaceCellularViaPreferredFallback;
- (unsigned int)trafficClass;
- (BOOL)interfaceWifi;
- (unsigned long long)eventFlags;
- (unsigned int)receiveBufferUsed;
- (BOOL)interfaceCompanionLink;
- (id)euuid;
- (id)provider;
- (BOOL)countsIncludeHeaderOverhead;
- (unsigned long long)uniqueProcessID;
- (int)processID;
- (BOOL)interfaceExpensive;
- (unsigned long long)eupid;
- (unsigned long long)networkActivityMapPart2;
- (unsigned long long)networkActivityMapStartTime;
- (id)vuuid;
- (id)localAddress;
- (BOOL)interfaceCellularViaFallback;
- (BOOL)interfaceCellular;
- (id)flowStartTimestamp;
- (id)remoteAddress;
- (id)processName;
- (double)flowDuration;
- (id)description;
- (id)traditionalDictionary;
- (void).cxx_destruct;
- (id)uuid;
- (id)initWithCounts:(const struct nstat_counts { unsigned long long x0; unsigned long long x1; unsigned long long x2; unsigned long long x3; unsigned long long x4; unsigned long long x5; unsigned long long x6; unsigned long long x7; unsigned long long x8; unsigned long long x9; unsigned int x10; unsigned int x11; unsigned int x12; unsigned int x13; unsigned int x14; unsigned int x15; unsigned int x16; unsigned int x17; } *)a0 UDPDescriptor:(struct nstat_udp_descriptor { unsigned long long x0; unsigned long long x1; unsigned long long x2; unsigned long long x3; struct activity_bitmap { unsigned long long x0; unsigned long long x1[2]; } x4; union { struct sockaddr_in { unsigned char x0; unsigned char x1; unsigned short x2; struct in_addr { unsigned int x0; } x3; char x4[8]; } x0; struct sockaddr_in6 { unsigned char x0; unsigned char x1; unsigned short x2; unsigned int x3; struct in6_addr { union { unsigned char x0[16]; unsigned short x1[8]; unsigned int x2[4]; } x0; } x4; unsigned int x5; } x1; } x5; union { struct sockaddr_in { unsigned char x0; unsigned char x1; unsigned short x2; struct in_addr { unsigned int x0; } x3; char x4[8]; } x0; struct sockaddr_in6 { unsigned char x0; unsigned char x1; unsigned short x2; unsigned int x3; struct in6_addr { union { unsigned char x0[16]; unsigned short x1[8]; unsigned int x2[4]; } x0; } x4; unsigned int x5; } x1; } x6; unsigned int x7; unsigned int x8; unsigned int x9; unsigned int x10; unsigned int x11; char x12[64]; unsigned int x13; unsigned char x14[16]; unsigned char x15[16]; unsigned char x16[16]; unsigned char x17[16]; unsigned int x18; unsigned char x19; unsigned char x20[3]; } *)a1 sourceIdent:(unsigned long long)a2 events:(unsigned long long)a3 seqno:(unsigned long long)a4 provider:(unsigned int)a5;

@end
