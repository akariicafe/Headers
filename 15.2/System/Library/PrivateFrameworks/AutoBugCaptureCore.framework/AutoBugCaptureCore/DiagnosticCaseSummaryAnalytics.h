@interface DiagnosticCaseSummaryAnalytics : ObjectAnalytics

+ (id)listCaseSummaryProperties;
+ (void)extractPbAttachmentsFromString:(id)a0 completion:(id /* block */)a1;
+ (id)listSummaryItemFromCaseSummaryDictionary:(id)a0;
+ (id)pbRequestForCases:(id)a0;
+ (id)stringRepresentationOfAttachmentsWithSize:(id)a0;

- (id)initWithWorkspace:(id)a0 withCache:(BOOL)a1;
- (id)init;
- (id)fetchCaseSummariesWithIdentifiers:(id)a0;
- (id)diagnosticCaseSummaryDictionaryForIdentifier:(id)a0 properties:(id)a1;
- (void)insertEntityForDiagnosticCase:(id)a0;
- (void)updateSubmittedCases:(id)a0;
- (long long)removeDiagnosticCaseSummariesWithState:(short)a0 olderThan:(unsigned long long)a1;
- (long long)removeAllDiagnosticCaseSummaries;
- (id)fetchCaseSummariesOfType:(id)a0 fromIdentifier:(id)a1 count:(unsigned long long)a2;

@end
