@class HDQuantitySampleAttenuationEngine, HDQuantitySampleAttenuationProvider;

@interface HDStatisticsCollectionCalculatorAttenuatedDataSource : HDStatisticsCollectionCalculatorDefaultDataSource

@property (readonly, nonatomic) HDQuantitySampleAttenuationProvider *attenuationProvider;
@property (readonly, nonatomic) HDQuantitySampleAttenuationEngine *attenuationEngine;

- (void).cxx_destruct;
- (BOOL)collectionCalculator:(id)a0 queryForInterval:(id)a1 error:(id *)a2 sampleHandler:(id /* block */)a3 mergeHandler:(id /* block */)a4;
- (id)initForProfile:(id)a0 quantityType:(id)a1 predicate:(id)a2 restrictedSourceEntities:(id)a3 attenuationType:(id)a4;

@end
