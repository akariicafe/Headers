@interface NPUtilities : NSObject

+ (unsigned long long)totalDataInKeychainWithIdentifier:(id)a0;
+ (id)connectionInfoToDict:(id)a0 dictionary:(id)a1;
+ (BOOL)hasPacketDrop:(id)a0;
+ (void)removeDataFromKeychainWithIdentifier:(id)a0 accountName:(id)a1;
+ (long long)interfaceTypeOfInterface:(id)a0;
+ (long long)certificateDateIsValid:(struct __SecCertificate { } *)a0;
+ (id)hexDumpBytes:(const void *)a0 length:(unsigned long long)a1;
+ (id)copyDataFromKeychainWithIdentifier:(id)a0 accountName:(id)a1;
+ (id)stripWhitespace:(id)a0;
+ (id)copyTrueClientIPAddressFromPreferences;
+ (id)parseXHost:(id)a0;
+ (BOOL)compareAddressEndpoints:(id)a0 endpoint2:(id)a1 addressOnly:(BOOL)a2;
+ (void)parseXTimeout:(id)a0 hardTTLInSeconds:(double *)a1;
+ (id)getHashForObject:(id)a0;
+ (void)removeDataFromKeychainWithIdentifier:(id)a0;
+ (id)copyItemIdentifiersFromKeychainWithAccountName:(id)a0;
+ (void)postNotification:(id)a0 value:(unsigned long long)a1;
+ (long long)interfaceTypeOfNWInterface:(id)a0;
+ (void)fillOutConnectionInfo:(id)a0 withPath:(id)a1 interface:(id)a2 remoteEndpoint:(id)a3 parameters:(id)a4 outputHandler:(struct nw_protocol { unsigned char x0[16]; struct nw_protocol_identifier *x1; struct nw_protocol_callbacks *x2; struct nw_protocol *x3; void *x4; struct nw_protocol *x5; void *x6; } *)a5;
+ (id)createMaskedIPv6Address:(id)a0 prefix:(unsigned long long)a1;
+ (id)stringFromLinkQualityValue:(int)a0;
+ (id)copyNetworkDescription:(id)a0;
+ (id)getInterfaceTypeString:(long long)a0;
+ (void)saveDataToKeychain:(id)a0 withIdentifier:(id)a1 accountName:(id)a2;
+ (int)pidFromAuditToken:(struct { unsigned int x0[8]; })a0;
+ (unsigned long long)parseXRTT:(id)a0;
+ (id)machoUUIDFromPID:(int)a0;
+ (BOOL)printDictionaryAsJson:(id)a0 debugName:(id)a1;
+ (long long)protocolTypeFromPath:(id)a0 endpoint:(id)a1;
+ (id)copyCurrentNetworkCharacteristicsForPath:(id)a0;
+ (void)removeKeyFromKeychainWithIdentifier:(id)a0;
+ (id)copyDataHexString:(id)a0;
+ (BOOL)rollDiceWithSuccessRatio:(id)a0;
+ (id)createMaskedIPv4Address:(id)a0 prefix:(unsigned long long)a1;
+ (id)getInterfaceName:(long long)a0;
+ (id)sharedEmphemeralSession;
+ (struct __SecKey { } *)copyKeyFromKeychainWithIdentifier:(id)a0;
+ (id)copyBase64HeaderValueFromData:(id)a0;
+ (id)endpointFromString:(id)a0 defaultPortString:(id)a1;
+ (void)saveKeyToKeychain:(struct __SecKey { } *)a0 withIdentifier:(id)a1;
+ (id)timestampIdentifierToName:(unsigned long long)a0;

@end
