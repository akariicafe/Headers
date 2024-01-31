@class CNContainer, CNUIContainerContext, CNContact, CNGroup, CNContactStore, CNMutableContact, NSMutableArray, CNUIGroupContext;

@interface CNUIContactSaveConfiguration : NSObject

@property (readonly, nonatomic) CNContact *contact;
@property (readonly, nonatomic) CNMutableContact *mutableContact;
@property (readonly, nonatomic) CNMutableContact *shadowCopyOfReadonlyContact;
@property (readonly, nonatomic) NSMutableArray *editingLinkedContacts;
@property (readonly, nonatomic) CNContactStore *contactStore;
@property (readonly, nonatomic) CNGroup *parentGroup;
@property (readonly, nonatomic) CNContainer *parentContainer;
@property (readonly, nonatomic) CNUIContainerContext *containerContext;
@property (readonly, nonatomic) CNUIGroupContext *groupContext;
@property (readonly, nonatomic) BOOL ignoresParentalRestrictions;
@property (readonly, nonatomic) BOOL saveWasAuthorized;

- (void).cxx_destruct;
- (id)copyWithEditingLinkedContacts:(id)a0;
- (id)initWithContact:(id)a0 mutableContact:(id)a1 editingLinkedContacts:(id)a2 contactStore:(id)a3 ignoresParentalRestrictions:(BOOL)a4 saveWasAuthorized:(BOOL)a5;
- (id)initWithContact:(id)a0 mutableContact:(id)a1 shadowCopyOfReadonlyContact:(id)a2 editingLinkedContacts:(id)a3 contactStore:(id)a4 parentGroup:(id)a5 parentContainer:(id)a6 containerContext:(id)a7 groupContext:(id)a8 ignoresParentalRestrictions:(BOOL)a9 saveWasAuthorized:(BOOL)a10;

@end
