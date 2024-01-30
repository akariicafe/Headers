@class NSString;

@interface HealthMedicationsExperience.MedicationListOnboardingEvent : _TtCs12_SwiftObject <HKAnalyticsEvent> {
    void /* unknown type, empty encoding */ provenance;
    void /* unknown type, empty encoding */ step;
    void /* unknown type, empty encoding */ action;
    void /* unknown type, empty encoding */ firstTimeMedFlow;
    void /* unknown type, empty encoding */ medsDetailsEntryPoint;
    void /* unknown type, empty encoding */ hasSuggestionsFromHealthRecords;
    void /* unknown type, empty encoding */ itemRank;
    void /* unknown type, empty encoding */ itemRankInOCR;
    void /* unknown type, empty encoding */ timeSinceUserLastScannedAMed;
    void /* unknown type, empty encoding */ didLastScanFallBackToOCR;
    void /* unknown type, empty encoding */ algorithmType;
}

@property (nonatomic, readonly) BOOL isEventSubmissionIHAGated;
@property (nonatomic, readonly) NSString *eventName;

- (id)makeIHAGatedEventPayloadWithDataSource:(id)a0 error:(id *)a1;
- (id)makeUnrestrictedEventPayloadWithDataSource:(id)a0 error:(id *)a1;

@end
