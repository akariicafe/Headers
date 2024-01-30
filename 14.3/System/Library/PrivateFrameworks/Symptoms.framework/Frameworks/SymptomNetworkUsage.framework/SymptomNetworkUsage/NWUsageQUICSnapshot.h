@class NSString, NSUUID, NSData, NSDate;

@interface NWUsageQUICSnapshot : NWUsageUDPSnapshot {
    NSString *_processName;
    NSDate *_startTimestamp;
    NSDate *_snapshotTimestamp;
    double _startTimeInterval;
    double _snapshotTimeInterval;
    NSUUID *_uuid;
    NSUUID *_euuid;
    NSUUID *_vuuid;
    NSUUID *_flowuuid;
    NSData *_localAddress;
    NSData *_remoteAddress;
    struct nstat_tcp_descriptor { unsigned long long x0; unsigned long long x1; unsigned long long x2; unsigned long long x3; unsigned long long x4; unsigned long long x5; struct activity_bitmap { unsigned long long x0; unsigned long long x1[2]; } x6; unsigned int x7; unsigned int x8; unsigned int x9; unsigned int x10; unsigned int x11; unsigned int x12; unsigned int x13; unsigned int x14; unsigned int x15; unsigned int x16; unsigned int x17; unsigned int x18; unsigned int x19; union { struct sockaddr_in { unsigned char x0; unsigned char x1; unsigned short x2; struct in_addr { unsigned int x0; } x3; char x4[8]; } x0; struct sockaddr_in6 { unsigned char x0; unsigned char x1; unsigned short x2; unsigned int x3; struct in6_addr { union { unsigned char x0[16]; unsigned short x1[8]; unsigned int x2[4]; } x0; } x4; unsigned int x5; } x1; } x20; union { struct sockaddr_in { unsigned char x0; unsigned char x1; unsigned short x2; struct in_addr { unsigned int x0; } x3; char x4[8]; } x0; struct sockaddr_in6 { unsigned char x0; unsigned char x1; unsigned short x2; unsigned int x3; struct in6_addr { union { unsigned char x0[16]; unsigned short x1[8]; unsigned int x2[4]; } x0; } x4; unsigned int x5; } x1; } x21; char x22[16]; char x23[64]; unsigned char x24[16]; unsigned char x25[16]; unsigned char x26[16]; unsigned char x27[16]; union { struct tcp_conn_status { unsigned char x0 : 1; unsigned char x1 : 1; unsigned char x2 : 1; unsigned char x3 : 1; } x0; unsigned char x1[4]; } x28; unsigned short x29; unsigned char x30[6]; } *_descriptor;
}

@property (readonly, nonatomic) double rttMinimum;
@property (readonly, nonatomic) double rttAverage;
@property (readonly, nonatomic) double rttVariation;
@property (readonly, nonatomic) unsigned int rxDuplicateBytes;
@property (readonly, nonatomic) unsigned int rxOutOfOrderBytes;
@property (readonly, nonatomic) unsigned int txRetransmittedBytes;

- (BOOL)interfaceWired;
- (unsigned long long)eupid;
- (BOOL)interfaceAWDL;
- (BOOL)interfaceCellular;
- (unsigned int)trafficClass;
- (id)euuid;
- (BOOL)interfaceUnknown;
- (double)flowSnapshotTimeIntervalSince1970;
- (BOOL)flowUsesChannels;
- (unsigned int)interfaceIndex;
- (unsigned int)receiveBufferUsed;
- (unsigned long long)networkActivityMapPart1;
- (unsigned long long)networkActivityMapStartTime;
- (id)localAddress;
- (double)flowDuration;
- (int)epid;
- (BOOL)interfaceLoopback;
- (id)processName;
- (id)vuuid;
- (id)remoteAddress;
- (BOOL)interfaceExpensive;
- (BOOL)interfaceCellularViaFallback;
- (unsigned long long)networkActivityMapPart2;
- (id)flowStartTimestamp;
- (id)flowSnapshotTimestamp;
- (unsigned int)receiveBufferSize;
- (unsigned long long)uniqueProcessID;
- (unsigned long long)flowStartContinuousTime;
- (void).cxx_destruct;
- (BOOL)failedFlowswitchValuesLookup;
- (BOOL)failedRouteValuesLookup;
- (BOOL)interfaceWiFi;
- (int)processID;
- (id)flowuuid;
- (double)flowStartTimeIntervalSinceReferenceDate;
- (id)initWithUpdate:(const struct nstat_msg_src_update_convenient { struct nstat_msg_src_update_hdr { struct nstat_msg_hdr { unsigned long long x0; unsigned int x1; unsigned short x2; unsigned short x3; } x0; unsigned long long x1; unsigned long long x2; struct nstat_counts { unsigned long long x0; unsigned long long x1; unsigned long long x2; unsigned long long x3; unsigned long long x4; unsigned long long x5; unsigned long long x6; unsigned long long x7; unsigned long long x8; unsigned long long x9; unsigned int x10; unsigned int x11; unsigned int x12; unsigned int x13; unsigned int x14; unsigned int x15; unsigned int x16; unsigned int x17; } x3; unsigned int x4; unsigned char x5[4]; } x0; union { struct nstat_tcp_descriptor { unsigned long long x0; unsigned long long x1; unsigned long long x2; unsigned long long x3; unsigned long long x4; unsigned long long x5; struct activity_bitmap { unsigned long long x0; unsigned long long x1[2]; } x6; unsigned int x7; unsigned int x8; unsigned int x9; unsigned int x10; unsigned int x11; unsigned int x12; unsigned int x13; unsigned int x14; unsigned int x15; unsigned int x16; unsigned int x17; unsigned int x18; unsigned int x19; union { struct sockaddr_in { unsigned char x0; unsigned char x1; unsigned short x2; struct in_addr { unsigned int x0; } x3; char x4[8]; } x0; struct sockaddr_in6 { unsigned char x0; unsigned char x1; unsigned short x2; unsigned int x3; struct in6_addr { union { unsigned char x0[16]; unsigned short x1[8]; unsigned int x2[4]; } x0; } x4; unsigned int x5; } x1; } x20; union { struct sockaddr_in { unsigned char x0; unsigned char x1; unsigned short x2; struct in_addr { unsigned int x0; } x3; char x4[8]; } x0; struct sockaddr_in6 { unsigned char x0; unsigned char x1; unsigned short x2; unsigned int x3; struct in6_addr { union { unsigned char x0[16]; unsigned short x1[8]; unsigned int x2[4]; } x0; } x4; unsigned int x5; } x1; } x21; char x22[16]; char x23[64]; unsigned char x24[16]; unsigned char x25[16]; unsigned char x26[16]; unsigned char x27[16]; union { struct tcp_conn_status { unsigned char x0 : 1; unsigned char x1 : 1; unsigned char x2 : 1; unsigned char x3 : 1; } x0; unsigned char x1[4]; } x28; unsigned short x29; unsigned char x30[6]; } x0; struct nstat_udp_descriptor { unsigned long long x0; unsigned long long x1; unsigned long long x2; unsigned long long x3; struct activity_bitmap { unsigned long long x0; unsigned long long x1[2]; } x4; union { struct sockaddr_in { unsigned char x0; unsigned char x1; unsigned short x2; struct in_addr { unsigned int x0; } x3; char x4[8]; } x0; struct sockaddr_in6 { unsigned char x0; unsigned char x1; unsigned short x2; unsigned int x3; struct in6_addr { union { unsigned char x0[16]; unsigned short x1[8]; unsigned int x2[4]; } x0; } x4; unsigned int x5; } x1; } x5; union { struct sockaddr_in { unsigned char x0; unsigned char x1; unsigned short x2; struct in_addr { unsigned int x0; } x3; char x4[8]; } x0; struct sockaddr_in6 { unsigned char x0; unsigned char x1; unsigned short x2; unsigned int x3; struct in6_addr { union { unsigned char x0[16]; unsigned short x1[8]; unsigned int x2[4]; } x0; } x4; unsigned int x5; } x1; } x6; unsigned int x7; unsigned int x8; unsigned int x9; unsigned int x10; unsigned int x11; char x12[64]; unsigned int x13; unsigned char x14[16]; unsigned char x15[16]; unsigned char x16[16]; unsigned char x17[16]; unsigned short x18; unsigned char x19[6]; } x1; struct nstat_route_descriptor { unsigned long long x0; unsigned long long x1; unsigned long long x2; union { struct sockaddr_in { unsigned char x0; unsigned char x1; unsigned short x2; struct in_addr { unsigned int x0; } x3; char x4[8]; } x0; struct sockaddr_in6 { unsigned char x0; unsigned char x1; unsigned short x2; unsigned int x3; struct in6_addr { union { unsigned char x0[16]; unsigned short x1[8]; unsigned int x2[4]; } x0; } x4; unsigned int x5; } x1; struct sockaddr { unsigned char x0; unsigned char x1; char x2[14]; } x2; } x3; union { struct sockaddr_in { unsigned char x0; unsigned char x1; unsigned short x2; struct in_addr { unsigned int x0; } x3; char x4[8]; } x0; struct sockaddr_in6 { unsigned char x0; unsigned char x1; unsigned short x2; unsigned int x3; struct in6_addr { union { unsigned char x0[16]; unsigned short x1[8]; unsigned int x2[4]; } x0; } x4; unsigned int x5; } x1; struct sockaddr { unsigned char x0; unsigned char x1; char x2[14]; } x2; } x4; union { struct sockaddr_in { unsigned char x0; unsigned char x1; unsigned short x2; struct in_addr { unsigned int x0; } x3; char x4[8]; } x0; struct sockaddr_in6 { unsigned char x0; unsigned char x1; unsigned short x2; unsigned int x3; struct in6_addr { union { unsigned char x0[16]; unsigned short x1[8]; unsigned int x2[4]; } x0; } x4; unsigned int x5; } x1; struct sockaddr { unsigned char x0; unsigned char x1; char x2[14]; } x2; } x5; unsigned int x6; unsigned int x7; unsigned char x8[4]; } x2; struct nstat_ifnet_descriptor { unsigned long long x0; unsigned int x1; struct nstat_ifnet_desc_link_status { unsigned int x0; union { struct nstat_ifnet_desc_cellular_status { unsigned int x0; unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned int x7; unsigned int x8; unsigned int x9; unsigned int x10; unsigned int x11; unsigned int x12; unsigned int x13; unsigned int x14; unsigned int x15; unsigned short x16; unsigned char x17[2]; } x0; struct nstat_ifnet_desc_wifi_status { unsigned int x0; unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned int x7; unsigned int x8; unsigned int x9; unsigned int x10; unsigned int x11; unsigned int x12; unsigned int x13; unsigned int x14; unsigned int x15; unsigned int x16; unsigned int x17; unsigned int x18; unsigned int x19; } x1; } x1; } x2; unsigned int x3; char x4[128]; char x5[17]; unsigned char x6[3]; } x3; struct nstat_sysinfo_descriptor { unsigned int x0; } x4; struct nstat_tcp_descriptor { unsigned long long x0; unsigned long long x1; unsigned long long x2; unsigned long long x3; unsigned long long x4; unsigned long long x5; struct activity_bitmap { unsigned long long x0; unsigned long long x1[2]; } x6; unsigned int x7; unsigned int x8; unsigned int x9; unsigned int x10; unsigned int x11; unsigned int x12; unsigned int x13; unsigned int x14; unsigned int x15; unsigned int x16; unsigned int x17; unsigned int x18; unsigned int x19; union { struct sockaddr_in { unsigned char x0; unsigned char x1; unsigned short x2; struct in_addr { unsigned int x0; } x3; char x4[8]; } x0; struct sockaddr_in6 { unsigned char x0; unsigned char x1; unsigned short x2; unsigned int x3; struct in6_addr { union { unsigned char x0[16]; unsigned short x1[8]; unsigned int x2[4]; } x0; } x4; unsigned int x5; } x1; } x20; union { struct sockaddr_in { unsigned char x0; unsigned char x1; unsigned short x2; struct in_addr { unsigned int x0; } x3; char x4[8]; } x0; struct sockaddr_in6 { unsigned char x0; unsigned char x1; unsigned short x2; unsigned int x3; struct in6_addr { union { unsigned char x0[16]; unsigned short x1[8]; unsigned int x2[4]; } x0; } x4; unsigned int x5; } x1; } x21; char x22[16]; char x23[64]; unsigned char x24[16]; unsigned char x25[16]; unsigned char x26[16]; unsigned char x27[16]; union { struct tcp_conn_status { unsigned char x0 : 1; unsigned char x1 : 1; unsigned char x2 : 1; unsigned char x3 : 1; } x0; unsigned char x1[4]; } x28; unsigned short x29; unsigned char x30[6]; } x5; } x1; } *)a0 startTime:(double)a1 flowFlags:(unsigned int)a2 previously:(struct update_subset_for_deltas { unsigned long long x0; unsigned long long x1; unsigned long long x2; unsigned long long x3; unsigned long long x4; unsigned long long x5; unsigned long long x6; unsigned long long x7; unsigned long long x8; unsigned long long x9; unsigned int x10; unsigned int x11; unsigned int x12; } *)a3;
- (BOOL)failedSkywalkAction;
- (id)uuid;
- (double)flowSnapshotTimeIntervalSinceReferenceDate;
- (id)descriptorDescription;
- (double)flowStartTimeIntervalSince1970;
- (id)provider;
- (void)setFlowSnapshotTimeIntervalSinceReferenceDate:(double)a0;

@end
