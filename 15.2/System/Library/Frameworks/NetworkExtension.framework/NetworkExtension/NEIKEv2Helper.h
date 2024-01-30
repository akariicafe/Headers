@interface NEIKEv2Helper : NSObject

+ (BOOL)getDPDAttributesForMode:(long long)a0 isWakeUp:(BOOL)a1 isNAT:(BOOL)a2 retry:(unsigned int *)a3 timeout:(unsigned long long *)a4 frequency:(unsigned int *)a5;
+ (unsigned long long)getIdentifierType:(id)a0;
+ (id)createIKESAConfigFromProtocol:(id)a0 path:(id)a1 ifIndex:(unsigned int)a2 options:(id)a3 server:(id)a4;
+ (id)createIKEv2ChildSAConfigFromProtocol:(id)a0;
+ (id)createIKEv2SessionConfigFromProtocol:(id)a0 options:(id)a1 onDemandEnabled:(BOOL)a2;
+ (id)createDNSSettingsFromTunnelConfig:(id)a0;
+ (id)createIPv4SettingsFromTunnelConfig:(id)a0 localTS:(id)a1 remoteTS:(id)a2;
+ (id)createIPv6SettingsFromTunnelConfig:(id)a0 localTS:(id)a1 remoteTS:(id)a2;
+ (id)createRouteArrayFromTunnelConfig:(id)a0 localTS:(id)a1 remoteTS:(id)a2 gatewayAddress:(id)a3 isIPv4:(BOOL)a4;
+ (id)createIKESAProposalFromProtocol:(id)a0 saParameters:(id)a1 options:(id)a2 nonceSize:(unsigned int *)a3;
+ (id)createIKEv2ChildSAProposalFromProtocol:(id)a0 saParameters:(id)a1;

@end
