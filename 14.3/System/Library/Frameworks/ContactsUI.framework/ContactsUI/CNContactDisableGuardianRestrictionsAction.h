@class CNContactStore, CNContainer;

@interface CNContactDisableGuardianRestrictionsAction : CNContactAction

@property (readonly, nonatomic) CNContainer *container;
@property (readonly, nonatomic) CNContactStore *contactStore;

- (void).cxx_destruct;
- (BOOL)isDestructive;
- (BOOL)canPerformAction;
- (void)performActionWithSender:(id)a0;
- (id)initWithContact:(id)a0 inContainer:(id)a1 contactStore:(id)a2;
- (id)title;

@end
