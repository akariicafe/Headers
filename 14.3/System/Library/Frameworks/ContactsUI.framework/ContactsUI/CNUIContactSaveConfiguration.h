@class CNMutableContact, CNContact, CNContactStore, CNGroup, CNContainer, NSMutableArray, CNPolicy;

@interface CNUIContactSaveConfiguration : NSObject

@property (readonly, nonatomic) CNContact *contact;
@property (readonly, nonatomic) CNMutableContact *mutableContact;
@property (readonly, nonatomic) CNMutableContact *shadowCopyOfReadonlyContact;
@property (readonly, nonatomic) NSMutableArray *editingLinkedContacts;
@property (readonly, nonatomic) CNContactStore *contactStore;
@property (readonly, nonatomic) CNGroup *parentGroup;
@property (readonly, nonatomic) CNContainer *parentContainer;
@property (readonly, nonatomic) CNPolicy *policy;
@property (readonly, nonatomic) BOOL ignoresParentalRestrictions;
@property (readonly, nonatomic) BOOL saveWasAuthorized;

- (id)initWithContact:(id)a0 mutableContact:(id)a1 shadowCopyOfReadonlyContact:(id)a2 editingLinkedContacts:(id)a3 contactStore:(id)a4 parentGroup:(id)a5 parentContainer:(id)a6 policy:(id)a7 ignoresParentalRestrictions:(BOOL)a8 saveWasAuthorized:(BOOL)a9;
- (void).cxx_destruct;

@end
