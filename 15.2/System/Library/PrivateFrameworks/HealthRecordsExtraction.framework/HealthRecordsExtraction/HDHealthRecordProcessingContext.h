@class NSMutableDictionary, HDHealthRecordRuleset, NSArray, NSMutableArray;

@interface HDHealthRecordProcessingContext : NSObject

@property (retain, nonatomic) NSMutableArray *mutableResources;
@property (retain, nonatomic) NSMutableDictionary *clinicalItemsByType;
@property (retain, nonatomic) NSMutableDictionary *clinicalRecordsByResourceIdentifier;
@property (retain, nonatomic) NSMutableDictionary *medicalRecordsByResourceIdentifier;
@property (readonly, nonatomic) HDHealthRecordRuleset *extractionRuleset;
@property (readonly, copy, nonatomic) NSArray *resources;

- (void).cxx_destruct;
- (id)initWithRuleset:(id)a0 resources:(id)a1;
- (id)createExtractionResultWithError:(id *)a0;
- (BOOL)addResource:(id)a0 error:(id *)a1;
- (id)extractedClinicalItemsForClinicalType:(long long)a0;
- (void)setExtractedClinicalItems:(id)a0 forClinicalType:(long long)a1;
- (void)setClinicalRecord:(id)a0 forResourceIdentifier:(id)a1;
- (void)setMedicalRecord:(id)a0 forResourceIdentifier:(id)a1;

@end
