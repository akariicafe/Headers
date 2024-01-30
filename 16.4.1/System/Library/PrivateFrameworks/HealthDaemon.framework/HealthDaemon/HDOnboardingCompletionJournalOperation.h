@class NSArray;

@interface HDOnboardingCompletionJournalOperation : HDJournalEntry <NSSecureCoding> {
    NSArray *_codableOnboardingCompletions;
    long long _syncProvenance;
    long long _syncIdentity;
}

@property (class, readonly) BOOL supportsSecureCoding;

+ (void)applyEntries:(id)a0 withProfile:(id)a1;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCodableOnboardingCompletions:(id)a0 syncProvenance:(long long)a1 syncIdentity:(long long)a2;
- (BOOL)performOrJournalWithProfile:(id)a0 error:(id *)a1;

@end
