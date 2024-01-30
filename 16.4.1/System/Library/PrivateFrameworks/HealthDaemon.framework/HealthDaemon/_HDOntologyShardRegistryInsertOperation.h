@class NSArray;

@interface _HDOntologyShardRegistryInsertOperation : HDJournalableOperation {
    NSArray *_entries;
}

+ (BOOL)supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)init;
- (BOOL)performWithProfile:(id)a0 transaction:(id)a1 error:(id *)a2;
- (void).cxx_destruct;

@end
