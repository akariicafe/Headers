@class NSArray;

@interface HDObjectAuthorizationJournalEntry : HDJournalEntry {
    NSArray *_records;
    double _modificationDate;
    long long _syncProvenance;
}

+ (BOOL)supportsSecureCoding;
+ (void)applyEntries:(id)a0 withProfile:(id)a1;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;

@end
