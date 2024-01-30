@class CNPropertyDescription;

@interface CNContactKeyValueUpdate : CNContactUpdate

@property (readonly) CNPropertyDescription *property;
@property (readonly) id value;

- (void).cxx_destruct;
- (void)applyToMutableContact:(id)a0 withIdentifierMap:(id)a1;
- (unsigned long long)hash;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (BOOL)applyToABPerson:(void *)a0 withPropertiesContext:(id)a1 logger:(id)a2 error:(id *)a3;
- (id)initWithProperty:(id)a0 value:(id)a1;

@end
