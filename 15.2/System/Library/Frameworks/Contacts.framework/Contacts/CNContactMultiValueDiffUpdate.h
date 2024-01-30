@class CNMultiValueDiff, CNMultiValuePropertyDescription;

@interface CNContactMultiValueDiffUpdate : CNContactUpdate

@property (readonly) CNMultiValuePropertyDescription *property;
@property (readonly) CNMultiValueDiff *diff;

- (BOOL)applyToABPerson:(void *)a0 withPropertiesContext:(id)a1 logger:(id)a2 error:(id *)a3;
- (id)initWithProperty:(id)a0 diff:(id)a1;
- (id)description;
- (void).cxx_destruct;
- (void)applyToMutableContact:(id)a0 withIdentifierMap:(id)a1;

@end
