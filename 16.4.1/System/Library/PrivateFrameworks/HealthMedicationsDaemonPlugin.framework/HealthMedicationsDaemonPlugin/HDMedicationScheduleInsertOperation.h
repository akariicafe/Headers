@class NSArray;

@interface HDMedicationScheduleInsertOperation : HDJournalableOperation {
    NSArray *_schedules;
    long long _syncProvenance;
    long long _syncIdentity;
}

+ (BOOL)supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (BOOL)performWithProfile:(id)a0 transaction:(id)a1 error:(id *)a2;
- (void).cxx_destruct;
- (id)initWithMedicationSchedules:(id)a0 syncProvenance:(long long)a1 syncIdentity:(long long)a2;

@end
