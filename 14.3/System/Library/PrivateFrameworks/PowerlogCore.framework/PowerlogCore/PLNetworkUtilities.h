@interface PLNetworkUtilities : NSObject

+ (id)getIPSecWakeInfo;
+ (id)getNormalizedIPV6Address:(id)a0;
+ (id)tcpParse:(struct __CFData { } *)a0 offset:(unsigned char)a1;
+ (id)udpParse:(struct __CFData { } *)a0 offset:(unsigned char)a1;
+ (BOOL)isESPPacket:(struct __CFData { } *)a0 offset:(unsigned char)a1;
+ (id)getSeqNoAndSPI:(struct __CFData { } *)a0 offset:(unsigned char)a1;
+ (id)sockaddrToNSDictionary:(const char *)a0;
+ (id)interfaceNameForIndex:(id)a0;
+ (id)stringFromTrafficClass:(unsigned int)a0;
+ (id)decodeEtherType:(unsigned short)a0;
+ (id)handleIPSecEvent:(int)a0;
+ (id)decodeIPPacket:(id)a0 encryptedPath:(BOOL)a1;

@end
