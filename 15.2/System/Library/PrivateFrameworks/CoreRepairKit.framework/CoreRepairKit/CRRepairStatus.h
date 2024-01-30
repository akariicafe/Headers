@interface CRRepairStatus : NSObject

+ (id)_wasRepaired;
+ (id)isServicePartWithError:(id *)a0;
+ (BOOL)hasHadAuthorizedRepairForComponent:(unsigned long long)a0;
+ (BOOL)isVeridianFWUpdateRequired;
+ (id)_wasRepairedWithCombinedDataClass:(id)a0;
+ (id)_wasRepairedWithDataClass:(id)a0;
+ (id)_wasRepairedWithSysCfg:(id)a0;
+ (id)_getManifestForDataClass:(id)a0;
+ (id)_getStringFromCert:(struct { char *x0; char *x1; })a0 WithTag:(unsigned long long)a1 AndOID:(id)a2;
+ (id)_getDataForDataClass:(id)a0;
+ (id)getLocalSealingManifest;
+ (BOOL)hasHadAuthorizedRepair;
+ (id)getVeridianFWVersionInfo;

@end
