@class CNContactStore, CNContainer;

@interface CNContactEnableGuardianRestrictionsAction : CNContactAction

@property (readonly, nonatomic) CNContainer *container;
@property (readonly, nonatomic) CNContactStore *contactStore;

- (void).cxx_destruct;
- (id)initWithContact:(id)a0 inContainer:(id)a1 contactStore:(id)a2;

@end
