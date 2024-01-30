@class NSArray;

@interface _HDOntologyFeatureCoordinatorRequireOperation : HDJournalableOperation {
    NSArray *_items;
}

+ (BOOL)supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)init;
- (BOOL)performWithProfile:(id)a0 transaction:(id)a1 error:(id *)a2;
- (void).cxx_destruct;

@end
