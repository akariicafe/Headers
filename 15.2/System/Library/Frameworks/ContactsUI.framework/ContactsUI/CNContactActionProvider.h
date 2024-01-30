@class CNContactStore, CNContact, CNContactAction, CNContainer;

@interface CNContactActionProvider : NSObject

@property (readonly, nonatomic) CNContact *contact;
@property (readonly, nonatomic) CNContainer *container;
@property (readonly, nonatomic) CNContactStore *contactStore;
@property (readonly, nonatomic) CNContactAction *shareWithFamilyAction;
@property (readonly, nonatomic) CNContactAction *stopSharingWithFamilyAction;
@property (readonly, nonatomic) CNContactAction *enableGuardianRestrictionsAction;
@property (readonly, nonatomic) CNContactAction *disableGuardianRestrictionsAction;

- (id)initWithContact:(id)a0 inContainer:(id)a1 contactStore:(id)a2;
- (void).cxx_destruct;

@end
