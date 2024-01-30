@class CNContactStore, CNContainer;

@interface CNContactDisableGuardianRestrictionsAction : CNContactAction

@property (readonly, nonatomic) CNContainer *container;
@property (readonly, nonatomic) CNContactStore *contactStore;

- (BOOL)isDestructive;
- (id)initWithContact:(id)a0 inContainer:(id)a1 contactStore:(id)a2;
- (BOOL)canPerformAction;
- (id)title;
- (void)performActionWithSender:(id)a0;
- (void).cxx_destruct;

@end
