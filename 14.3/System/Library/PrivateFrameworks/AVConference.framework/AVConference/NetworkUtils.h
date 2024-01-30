@interface NetworkUtils : NSObject

+ (id)encryptionInfoForKey:(unsigned long long)a0;
+ (BOOL)createAndStartListener:(id *)a0 withParameters:(id)a1;
+ (void)setUniquePIDOnParameters:(id)a0 shouldRunInProcess:(BOOL)a1;
+ (int)connectedSocketWithIPAddress:(id)a0 srcPort:(short)a1 error:(id *)a2;
+ (int)socketWithIPAddress:(id)a0 srcPort:(short)a1 shouldConnect:(BOOL)a2 error:(id *)a3;
+ (int)socketWithIPAddress:(id)a0 srcPort:(short)a1 error:(id *)a2;
+ (id)newEncryptionInfoWithMasterKeyIndex:(id)a0;
+ (BOOL)createNWPathEvaluator:(id *)a0 withIPAddress:(id)a1 localPort:(int *)a2 remotePort:(int)a3 shouldRunInProcess:(BOOL)a4;
+ (id)newNWConnectionWithIPAddress:(id)a0 srcPort:(short)a1;
+ (int)nonConnectedSocketWithIPAddress:(id)a0 srcPort:(short)a1 error:(id *)a2;
+ (id)newRTPSocketDictionary:(BOOL)a0 rtpSourcePort:(short)a1;
+ (id)securityKeyMaterialWithMasterKeyIndex:(id)a0;

@end
