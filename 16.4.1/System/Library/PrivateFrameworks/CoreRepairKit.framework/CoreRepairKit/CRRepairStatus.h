@interface CRRepairStatus : NSObject

+ (id)_wasRepaired;
+ (id)_getManifestForDataClass:(id)a0;
+ (id)_wasRepairedWithCombinedDataClass:(id)a0;
+ (id)_wasRepairedWithDataClass:(id)a0;
+ (id)_wasRepairedWithSysCfg:(id)a0;
+ (id)getDataForDataClass:(id)a0;
+ (id)getLocalSealingManifest;
+ (id)getVeridianFWVersionInfo;
+ (BOOL)hasHadAuthorizedRepair;
+ (BOOL)hasHadAuthorizedRepairForComponent:(unsigned long long)a0;
+ (id)isServicePartWithError:(id *)a0;
+ (BOOL)isVeridianFWUpdateRequired;

@end
