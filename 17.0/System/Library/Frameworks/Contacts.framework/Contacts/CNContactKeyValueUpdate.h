@class CNPropertyDescription;

@interface CNContactKeyValueUpdate : CNContactUpdate

@property (readonly) CNPropertyDescription *property;
@property (readonly) id value;

- (unsigned long long)hash;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (BOOL)applyToABPerson:(void *)a0 withPropertiesContext:(id)a1 logger:(id)a2 error:(id *)a3;
- (void)applyToMutableContact:(id)a0 withIdentifierMap:(id)a1;
- (id)initWithProperty:(id)a0 value:(id)a1;

@end
