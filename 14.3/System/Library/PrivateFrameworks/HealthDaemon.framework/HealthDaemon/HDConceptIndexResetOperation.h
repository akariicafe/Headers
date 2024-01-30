@interface HDConceptIndexResetOperation : HDJournalableOperation

+ (BOOL)supportsSecureCoding;

- (id)init;
- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (BOOL)performWithProfile:(id)a0 transaction:(id)a1 error:(id *)a2;

@end
