@interface HealthRecordsUI.UDCRecordsTableViewController : WDMedicalRecordTimelineViewController {
    void /* unknown type, empty encoding */ preferredSegment;
    void /* unknown type, empty encoding */ additionalPredicate;
    void /* unknown type, empty encoding */ $__lazy_storage_$_modePicker;
}

- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initForRemovedRecordsWithProfile:(id)a0 category:(id)a1 factory:(id)a2;
- (id)initWithProfile:(id)a0 factory:(id)a1 account:(id)a2 showInitialSearchBar:(BOOL)a3;
- (id)initWithProfile:(id)a0 factory:(id)a1 accountId:(id)a2 showInitialSearchBar:(BOOL)a3;
- (id)initWithProfile:(id)a0 factory:(id)a1 category:(id)a2 showInitialSearchBar:(BOOL)a3;
- (id)initWithProfile:(id)a0 factory:(id)a1 category:(id)a2 showInitialSearchBar:(BOOL)a3 predicatePerSampleType:(id)a4;
- (id)initWithProfile:(id)a0 factory:(id)a1 conceptIdentifier:(id)a2 category:(id)a3 highlightedRecordId:(id)a4;
- (id)initWithProfile:(id)a0 factory:(id)a1 preloadedRemovedRecords:(id)a2;
- (id)initWithProfile:(id)a0 factory:(id)a1 showInitialSearchBar:(BOOL)a2;
- (id)initWithProfile:(id)a0 factory:(id)a1 userDomainConcept:(id)a2 category:(id)a3 highlightedRecordId:(id)a4;
- (void)modePickerDidChange:(id)a0;

@end
