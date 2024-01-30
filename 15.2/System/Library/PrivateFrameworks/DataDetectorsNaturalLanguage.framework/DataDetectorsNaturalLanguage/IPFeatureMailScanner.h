@class NSArray, NSMutableArray, IPFeatureData;

@interface IPFeatureMailScanner : IPFeatureScanner

@property (retain) NSArray *subjectDataDetectorsFeatures;
@property (retain) NSArray *subjectSentenceFeatures;
@property (retain) NSMutableArray *subjectKeywordFeatures;
@property (retain) NSMutableArray *subjectAndBodyDataDetectorsFeatures;
@property BOOL subjectContainsDate;
@property (retain) IPFeatureData *dateInSubjectFeatureData;

- (void).cxx_destruct;
- (void)scanEventsInMessageUnits:(id)a0 synchronously:(BOOL)a1 completionHandler:(id /* block */)a2;
- (id)featuresForTextString:(id)a0 inMessageUnit:(id)a1;
- (double)confidenceForEvent:(id)a0 baseConfidence:(double)a1;
- (void)resetScanState;
- (void)enrichEvents:(id)a0 messageUnits:(id)a1 dateInSubject:(id)a2 dataFeatures:(id)a3;
- (void)doSynchronousScanWithCompletionHandler:(id /* block */)a0;
- (BOOL)isBannedSender:(id)a0;
- (void)processScanOfMessageUnit:(id)a0;
- (id)emailParticipantNames;

@end
