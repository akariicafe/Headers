@class NSString;

@interface BMLighthouseLedgerTrialIdentifiersExperimentIdentifiers : BMEventBase <BMStoreData>

@property (readonly, nonatomic) NSString *trialExperimentID;
@property (readonly, nonatomic) NSString *trialDeploymentID;
@property (readonly, nonatomic) NSString *trialTreatmentID;
@property (readonly, nonatomic) unsigned int dataVersion;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)columns;
+ (id)validKeyPaths;
+ (id)eventWithData:(id)a0 dataVersion:(unsigned int)a1;

- (id)initWithJSONDictionary:(id)a0 error:(id *)a1;
- (id)initByReadFrom:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void)writeTo:(id)a0;
- (id)jsonDictionary;
- (id)serialize;
- (void).cxx_destruct;
- (id)initWithTrialExperimentID:(id)a0 trialDeploymentID:(id)a1 trialTreatmentID:(id)a2;

@end
