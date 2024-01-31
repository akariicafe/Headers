@class NSArray;

@interface CNUIFamilyMemberContactsEditingStrategy : NSObject

@property (class, readonly, nonatomic) CNUIFamilyMemberContactsEditingStrategy *managedContactsStrategy;
@property (class, readonly, nonatomic) CNUIFamilyMemberContactsEditingStrategy *whitelistedContactsStrategy;

@property (readonly, nonatomic) NSArray *prohibitedPropertyKeys;
@property (readonly, nonatomic) id /* block */ sensitiveDataContactFilter;

- (void).cxx_destruct;
- (id)initWithProhibitedPropertyKeys:(id)a0 sensitiveDataContactFilter:(id /* block */)a1;

@end
