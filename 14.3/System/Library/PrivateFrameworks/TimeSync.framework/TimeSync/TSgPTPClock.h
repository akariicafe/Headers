@class NSArray;

@interface TSgPTPClock : TSKernelClock

@property (copy, nonatomic) NSArray *gptpPath;
@property (nonatomic) unsigned long long grandmasterIdentity;
@property (readonly, copy, nonatomic) NSArray *ports;
@property (readonly, nonatomic) unsigned long long clockIdentity;
@property (readonly, nonatomic) unsigned char clockPriority1;
@property (readonly, nonatomic) unsigned char clockPriority2;
@property (readonly, nonatomic) unsigned char clockClass;
@property (readonly, nonatomic) unsigned char clockAccuracy;

+ (id)diagnosticDescriptionForService:(id)a0 withIndent:(id)a1;
+ (id)clockNameForClockIdentifier:(unsigned long long)a0;
+ (id)iokitInterfaceMatchingDictionaryForInterfaceName:(id)a0;
+ (id)diagnosticInfoForService:(id)a0;
+ (id)availablegPTPClockIdentifiers;
+ (id)iokitMatchingDictionaryForInterfaceName:(id)a0;
+ (id)iokitMatchingDictionaryForClockIdentifier:(unsigned long long)a0;

- (id)ports;
- (id)clockName;
- (unsigned long long)_grandmasterIdentity;
- (unsigned char)clockClass;
- (id)portWithPortNumber:(unsigned short)a0;
- (BOOL)addUnicastLinkLayerEtEPortOnInterfaceNamed:(id)a0 withDestinationAddress:(const char *)a1 allocatedPortNumber:(unsigned short *)a2 error:(id *)a3;
- (BOOL)removeReverseSyncFromInterfaceNamed:(id)a0 withDomainNumner:(unsigned char)a1 error:(id *)a2;
- (void).cxx_destruct;
- (BOOL)addLinkLayerPortOnInterfaceNamed:(id)a0 allocatedPortNumber:(unsigned short *)a1 error:(id *)a2;
- (BOOL)addUnicastUDPv4EtEPortOnInterfaceNamed:(id)a0 withDestinationAddress:(unsigned int)a1 allocatedPortNumber:(unsigned short *)a2 error:(id *)a3;
- (unsigned long long)clockIdentity;
- (id)initWithClockIdentifier:(unsigned long long)a0;
- (void)dealloc;
- (BOOL)addUnicastUDPv4PtPPortOnInterfaceNamed:(id)a0 withDestinationAddress:(unsigned int)a1 allocatedPortNumber:(unsigned short *)a2 error:(id *)a3;
- (BOOL)removeUnicastUDPv6PtPPortFromInterfaceNamed:(id)a0 withDestinationAddress:(const char *)a1 error:(id *)a2;
- (BOOL)addUnicastLinkLayerPtPPortOnInterfaceNamed:(id)a0 withDestinationAddress:(const char *)a1 allocatedPortNumber:(unsigned short *)a2 error:(id *)a3;
- (unsigned char)clockAccuracy;
- (void)_handleNotification:(unsigned int)a0 withArg1:(unsigned long long)a1 andArg2:(unsigned long long)a2;
- (BOOL)removeUnicastUDPv6EtEPortFromInterfaceNamed:(id)a0 withDestinationAddress:(const char *)a1 error:(id *)a2;
- (BOOL)addUnicastUDPv4EtEPortOnInterfaceNamed:(id)a0 withDestinationAddress:(unsigned int)a1 error:(id *)a2;
- (BOOL)addUnicastUDPv6PtPPortOnInterfaceNamed:(id)a0 withDestinationAddress:(const char *)a1 allocatedPortNumber:(unsigned short *)a2 error:(id *)a3;
- (unsigned char)clockPriority1;
- (unsigned long long)convertFrom128BitgPTPTimeToMachAbsoluteTime:(struct { unsigned long long x0; unsigned long long x1; })a0 grandmasterUsed:(unsigned long long *)a1 portNumber:(unsigned short *)a2;
- (unsigned long long)convertFromMachAbsoluteToDomainTime:(unsigned long long)a0 grandmasterUsed:(unsigned long long *)a1;
- (struct { unsigned long long x0; unsigned long long x1; })convertFromMachAbsoluteTo128BitgPTPTime:(unsigned long long)a0 grandmasterUsed:(unsigned long long *)a1 portNumber:(unsigned short *)a2;
- (unsigned long long)convertFrom32BitASToMachAbsoluteTime:(unsigned int)a0 withFlags:(unsigned int *)a1;
- (BOOL)removeUnicastLinkLayerEtEPortFromInterfaceNamed:(id)a0 withDestinationAddress:(const char *)a1 error:(id *)a2;
- (unsigned long long)convertFrom32BitASToMachAbsoluteTime:(unsigned int)a0;
- (BOOL)addUnicastUDPv6EtEPortOnInterfaceNamed:(id)a0 withDestinationAddress:(const char *)a1 allocatedPortNumber:(unsigned short *)a2 error:(id *)a3;
- (BOOL)removeLinkLayerPortFromInterfaceNamed:(id)a0 error:(id *)a1;
- (BOOL)addUnicastLinkLayerEtEPortOnInterfaceNamed:(id)a0 withDestinationAddress:(const char *)a1 error:(id *)a2;
- (BOOL)addReverseSyncOnInterfaceNamed:(id)a0 withDomainNumner:(unsigned char)a1 syncInterval:(unsigned int)a2 error:(id *)a3;
- (unsigned long long)machAbsoluteFromgPTPTime:(id)a0;
- (BOOL)addUnicastUDPv6EtEPortOnInterfaceNamed:(id)a0 withDestinationAddress:(const char *)a1 error:(id *)a2;
- (BOOL)getRateRatioNumerator:(unsigned long long *)a0 denominator:(unsigned long long *)a1 machAnchor:(unsigned long long *)a2 andDomainAnchor:(unsigned long long *)a3 forGrandmasterIdentity:(unsigned long long *)a4 portNumber:(unsigned short *)a5 withError:(id *)a6;
- (BOOL)addUnicastLinkLayerPtPPortOnInterfaceNamed:(id)a0 withDestinationAddress:(const char *)a1 error:(id *)a2;
- (unsigned char)clockPriority2;
- (BOOL)removeUnicastUDPv4EtEPortFromInterfaceNamed:(id)a0 withDestinationAddress:(unsigned int)a1 error:(id *)a2;
- (BOOL)addLinkLayerPortOnInterfaceNamed:(id)a0 error:(id *)a1;
- (BOOL)removeUnicastUDPv4PtPPortFromInterfaceNamed:(id)a0 withDestinationAddress:(unsigned int)a1 error:(id *)a2;
- (unsigned long long)convertFromDomainToMachAbsoluteTime:(unsigned long long)a0 grandmasterUsed:(unsigned long long *)a1 portNumber:(unsigned short *)a2;
- (unsigned long long)convertFromMachAbsoluteToDomainTime:(unsigned long long)a0 grandmasterUsed:(unsigned long long *)a1 portNumber:(unsigned short *)a2;
- (BOOL)addUnicastUDPv6PtPPortOnInterfaceNamed:(id)a0 withDestinationAddress:(const char *)a1 error:(id *)a2;
- (BOOL)removeUnicastLinkLayerPtPPortFromInterfaceNamed:(id)a0 withDestinationAddress:(const char *)a1 error:(id *)a2;
- (id)gPTPTimeFromMachAbsoluteTime:(unsigned long long)a0;
- (void)_handleInterestNotification:(unsigned int)a0 withArgument:(void *)a1;
- (BOOL)addUnicastUDPv4PtPPortOnInterfaceNamed:(id)a0 withDestinationAddress:(unsigned int)a1 error:(id *)a2;
- (id)_gptpPath;
- (BOOL)convertFrom32BitASTime:(unsigned int *)a0 toMachAbsoluteTime:(unsigned long long *)a1 withCount:(unsigned int)a2;

@end
