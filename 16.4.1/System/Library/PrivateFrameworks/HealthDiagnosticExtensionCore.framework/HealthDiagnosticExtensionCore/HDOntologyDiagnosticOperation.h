@interface HDOntologyDiagnosticOperation : HDDiagnosticOperation

+ (void)_appendEntry:(id)a0 tableFormatter:(id)a1;

- (void)run;
- (id)_countOfElementsPerSlotInDatabase:(id)a0;
- (id)_entriesForSlots:(id)a0 database:(id)a1;
- (id)_expandResultsToIndividualSlots:(id)a0;
- (void)_logAndAndAppendFormat:(id)a0;
- (void)_reportBasicChecksForDatabase:(id)a0;
- (void)_reportDomain:(id)a0 keyValues:(id)a1;
- (void)_reportElementCountsBySlot:(id)a0 entriesBySlot:(id)a1;
- (void)_reportElementCountsBySlotForDatabase:(id)a0;
- (void)_reportForOntologyDatabase;
- (void)_reportForOntologyDatabase:(id)a0;
- (void)_reportForOntologyFeaturesWithOntologyStore:(id)a0;
- (void)_reportForOntologyKeyValueDomains;
- (void)_reportForOntologyKeyValueDomainsWithDatabase:(id)a0;
- (void)_reportForShardRequirementStatuses:(id)a0;
- (void)_reportLocaleAndRegion;
- (void)_reportOntologyHostURLWithOntologyStore:(id)a0;
- (void)_reportOntologyMetadataForDatabase:(id)a0;
- (void)_reportShardRegistryForDatabase:(id)a0;
- (id)reportFilename;

@end
