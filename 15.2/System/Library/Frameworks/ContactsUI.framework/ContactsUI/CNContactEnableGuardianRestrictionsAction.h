@class CNContactStore, CNContainer;

@interface CNContactEnableGuardianRestrictionsAction : CNContactAction

@property (readonly, nonatomic) CNContainer *container;
@property (readonly, nonatomic) CNContactStore *contactStore;

- (id)initWithContact:(id)a0 inContainer:(id)a1 contactStore:(id)a2;
- (void).cxx_destruct;

@end
