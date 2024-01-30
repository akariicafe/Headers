@interface HDHRSignedClinicalDataHandler : NSObject

- (id)processContextCollection:(id)a0 error:(id *)a1;
- (id)preprocessDataInSource:(id)a0 options:(unsigned long long)a1 error:(id *)a2;
- (id)preprocessFHIRResourceObject:(id)a0 options:(unsigned long long)a1 error:(id *)a2;
- (id)processOriginalSignedClinicalDataRecords:(id)a0 options:(unsigned long long)a1 error:(id *)a2;
- (id)reprocessOriginalRecords:(id)a0 options:(unsigned long long)a1 error:(id *)a2;

@end
