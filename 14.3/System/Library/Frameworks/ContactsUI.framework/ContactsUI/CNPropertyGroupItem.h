@class NSString, CNLabeledValue, CNUIContactsEnvironment, CNCardPropertyGroup, NSArray, CNContact, NSURL, CNContactStore, CNMutableContact, CNContactProperty;
@protocol CNPropertyGroupItemDelegate;

@interface CNPropertyGroupItem : CNCardGroupItem

@property (retain, nonatomic) NSString *property;
@property (retain, nonatomic) CNLabeledValue *labeledValue;
@property (retain, nonatomic) CNLabeledValue *originalLabeledValue;
@property (retain, nonatomic) CNContact *contact;
@property (readonly, nonatomic) CNMutableContact *mutableContact;
@property (readonly, nonatomic) CNUIContactsEnvironment *environment;
@property (nonatomic) unsigned long long policyFlags;
@property (readonly, nonatomic) CNContactProperty *contactProperty;
@property (readonly, weak, nonatomic) CNCardPropertyGroup *group;
@property (readonly, nonatomic) CNContactStore *contactStore;
@property (weak, nonatomic) id<CNPropertyGroupItemDelegate> delegate;
@property (nonatomic) BOOL allowsIMessage;
@property (nonatomic) BOOL allowsPhone;
@property (nonatomic) BOOL allowsTTY;
@property (nonatomic) BOOL allowsEmail;
@property (readonly, nonatomic) id normalizedValue;
@property (readonly, nonatomic) NSString *displayValue;
@property (readonly, nonatomic) NSString *displayLabel;
@property (readonly, nonatomic) NSString *editingStringValue;
@property (readonly, nonatomic) NSString *placeholderString;
@property (readonly, weak, nonatomic) NSArray *standardLabels;
@property (readonly, weak, nonatomic) NSArray *extendedLabels;
@property (readonly, weak, nonatomic) NSArray *promotedExtendedLabels;
@property (readonly, nonatomic) NSURL *defaultActionURL;
@property (readonly, nonatomic) BOOL modified;
@property (readonly, nonatomic, getter=isSuggested) BOOL suggested;
@property (readonly, nonatomic, getter=isEmpty) BOOL empty;
@property (readonly, nonatomic, getter=isReadonly) BOOL readonly;
@property (readonly, nonatomic) BOOL supportsLabel;
@property (readonly, nonatomic) BOOL canRemove;
@property (readonly, nonatomic, getter=isFavorite) BOOL favorite;

+ (id)initialValueForLabel:(id)a0 group:(id)a1;
+ (id)emptyValueForLabel:(id)a0;
+ (void)deleteCoreRecentsEntriesMatchingProperty:(id)a0 recentsManager:(id)a1;
+ (id)propertyGroupItemWithLabeledValue:(id)a0 group:(id)a1 contact:(id)a2;
+ (id)propertyGroupItemWithLabel:(id)a0 group:(id)a1 contact:(id)a2;
+ (id)newPropertyGroupItemForProperty:(id)a0;
+ (id)propertyGroupItemWithLabeledValue:(id)a0 group:(id)a1 contact:(id)a2 environment:(id)a3;
+ (id)propertyGroupItemWithLabel:(id)a0 group:(id)a1 contact:(id)a2 environment:(id)a3;
+ (Class)classForProperty:(id)a0;

- (void)updateLabeledValueWithLabel:(id)a0;
- (id)displayStringForValue:(id)a0;
- (id)replacementForInvalidValue:(id)a0;
- (BOOL)isEquivalentToItem:(id)a0 whenEditing:(BOOL)a1;
- (id)bestValue:(id)a0;
- (BOOL)isEquivalentToItem:(id)a0;
- (id)valueForDisplayString:(id)a0;
- (id)init;
- (id)bestLabel:(id)a0;
- (id)initWithGroup:(id)a0;
- (id)initWithLabel:(id)a0 group:(id)a1 contact:(id)a2 environment:(id)a3;
- (void)_removeSuggestion;
- (id)initWithLabeledValue:(id)a0 group:(id)a1 contact:(id)a2 environment:(id)a3;
- (int)anyContactLegacyIdentifier;
- (int)labeledValueMultiValueIdentifierForChosenSourceContact;
- (BOOL)isFavoriteOfActionType:(id)a0 bundleIdentifier:(id)a1;
- (id)updateWithLabel:(id)a0 value:(id)a1;
- (void)rejectSuggestion;
- (void).cxx_destruct;
- (void)updateLabeledValueWithValue:(id)a0;
- (void)saveChangesImmediately:(BOOL)a0;
- (BOOL)shouldCreateNewMeContactToSaveChangesTo;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (BOOL)isValidValue:(id)a0;
- (id)contactViewCache;
- (BOOL)isValidIdentifier:(id)a0;
- (void)confirmSuggestion;
- (void)mergeItem:(id)a0;

@end
