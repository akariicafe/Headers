@interface HAPPairingUtilities : HMFObject

+ (id)createAddPairingRequetForPairingIdentity:(id)a0 error:(id *)a1;
+ (id)createRemovePairingRequetForPairingIdentity:(id)a0 error:(id *)a1;
+ (BOOL)parseRemovePairingResponse:(id)a0 error:(id *)a1;
+ (BOOL)parseAddPairingResponse:(id)a0 error:(id *)a1;
+ (id)createListPairingsRequest:(id *)a0;
+ (id)parseListPairingsResponse:(id)a0 error:(id *)a1;

@end
