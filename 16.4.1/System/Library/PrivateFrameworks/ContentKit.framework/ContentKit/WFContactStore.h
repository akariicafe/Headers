@interface WFContactStore : NSObject

+ (id)new;
+ (Class)preferredConcreteSubclass;

- (id)init;
- (id)contactWithIdentifier:(id)a0;
- (id)firstContactWithEmailAddress:(id)a0;
- (id)firstContactWithPhoneNumber:(id)a0;
- (BOOL)addContact:(id)a0 error:(id *)a1;
- (id)allContactsWithSortOrder:(long long)a0;
- (id)allContactsWithSortOrder:(long long)a0 passingTest:(id /* block */)a1;
- (id)contactsMatchingPredicate:(id)a0 error:(id *)a1;
- (id)contactsWithName:(id)a0;

@end
