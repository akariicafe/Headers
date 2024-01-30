@class CNMutableContact, CNContact, CNContactStore, CNGroup, CNContainer, NSMutableArray, CNUIContainerContext;

@interface CNUIContactSaveConfiguration : NSObject

@property (readonly, nonatomic) CNContact *contact;
@property (readonly, nonatomic) CNMutableContact *mutableContact;
@property (readonly, nonatomic) CNMutableContact *shadowCopyOfReadonlyContact;
@property (readonly, nonatomic) NSMutableArray *editingLinkedContacts;
@property (readonly, nonatomic) CNContactStore *contactStore;
@property (readonly, nonatomic) CNGroup *parentGroup;
@property (readonly, nonatomic) CNContainer *parentContainer;
@property (readonly, nonatomic) CNUIContainerContext *containerContext;
@property (readonly, nonatomic) BOOL ignoresParentalRestrictions;
@property (readonly, nonatomic) BOOL saveWasAuthorized;

- (id)initWithContact:(id)a0 mutableContact:(id)a1 shadowCopyOfReadonlyContact:(id)a2 editingLinkedContacts:(id)a3 contactStore:(id)a4 parentGroup:(id)a5 parentContainer:(id)a6 containerContext:(id)a7 ignoresParentalRestrictions:(BOOL)a8 saveWasAuthorized:(BOOL)a9;
- (id)copyWithEditingLinkedContacts:(id)a0;
- (void).cxx_destruct;

@end
