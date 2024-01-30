@interface PPConfigStore : NSObject

+ (id)defaultStore;

- (id)variantNameWithError:(id *)a0;
- (unsigned long long)assetVersionWithError:(id *)a0;
- (id)readableTrialTreatmentsMappingWithError:(id *)a0;

@end
