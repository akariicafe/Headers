@interface HMMTRUtilities : HMFObject

+ (id)encodeObject:(id)a0;
+ (id)identifierStringWithCHIPNodeID:(id)a0;
+ (id)_pathOfMTRClusterReadValue:(id)a0;
+ (BOOL)compareUnorderedUniqueNumberArray:(id)a0 withArray:(id)a1;
+ (id)hmmtr_shortTypeFromUUID:(id)a0;
+ (id)mtrBaseClusterValueFromMTRClusterReadResultValue:(id)a0 forIdentify:(id)a1;
+ (id)mtrBaseClusterValueFromMTRClusterReportValue:(id)a0;
+ (long long)nextServiceInstanceID:(long long)a0 previousCharacteristicsCount:(unsigned long long)a1;
+ (long long)randomDiscriminator;
+ (unsigned long long)randomNodeID;
+ (id)setupIDFromSetupCode:(id)a0 discriminator:(id)a1;

@end
