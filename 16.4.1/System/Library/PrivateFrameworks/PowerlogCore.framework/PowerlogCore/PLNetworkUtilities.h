@interface PLNetworkUtilities : NSObject

+ (id)getIPAddress:(union in_addr_4_6 { struct in_addr { unsigned int x0; } x0; struct in6_addr { union { unsigned char x0[16]; unsigned short x1[8]; unsigned int x2[4]; } x0; } x1; } *)a0 withAddressFamily:(int)a1;
+ (id)decodeEtherType:(unsigned short)a0;
+ (id)decodeIPPacket:(id)a0 encryptedPath:(BOOL)a1;
+ (id)getIPSecWakeInfo;
+ (id)getNetworkWakeInfo:(struct kern_event_msg { unsigned int x0; unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6[1]; } *)a0;
+ (id)getNormalizedIPV6Address:(id)a0;
+ (id)getSeqNoAndSPI:(struct __CFData { } *)a0 offset:(unsigned char)a1;
+ (id)getUnattributedWakeInfo:(struct kern_event_msg { unsigned int x0; unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6[1]; } *)a0;
+ (id)handleIPSecEvent:(int)a0;
+ (id)handlePowerWakeEvent:(int)a0;
+ (id)interfaceNameForIndex:(id)a0;
+ (BOOL)isESPPacket:(struct __CFData { } *)a0 offset:(unsigned char)a1;
+ (id)sockaddrToNSDictionary:(const char *)a0;
+ (id)stringFromTrafficClass:(unsigned int)a0;
+ (id)tcpParse:(struct __CFData { } *)a0 offset:(unsigned char)a1;
+ (id)udpParse:(struct __CFData { } *)a0 offset:(unsigned char)a1;

@end
