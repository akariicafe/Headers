@interface TRILogTreatmentProvider : TRILogTreatmentReader

+ (BOOL)deleteFileAtPath:(id)a0;
+ (id)providerWithProjectId:(int)a0 paths:(id)a1;

- (BOOL)saveTreatments:(id)a0;
- (void)updatePersistedLogNamespace:(id)a0;
- (void)removeTreatment:(id)a0;
- (BOOL)addTreatment:(id)a0;

@end
