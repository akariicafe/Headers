@interface HDJournalableOperation : HDJournalEntry <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) BOOL didJournal;

+ (void)applyEntries:(id)a0 withProfile:(id)a1;

- (BOOL)performWithProfile:(id)a0 transaction:(id)a1 error:(id *)a2;
- (BOOL)performOrJournalWithProfile:(id)a0 error:(id *)a1;
- (id)transactionContext;

@end
