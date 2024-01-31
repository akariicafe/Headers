@class CNContactStore, CNContainer;

@interface CNContactDisableGuardianRestrictionsAction : CNContactAction

@property (readonly, nonatomic) CNContainer *container;
@property (readonly, nonatomic) CNContactStore *contactStore;

- (BOOL)isDestructive;
- (void).cxx_destruct;
- (id)title;
- (BOOL)canPerformAction;
- (id)initWithContact:(id)a0 inContainer:(id)a1 contactStore:(id)a2;
- (void)performActionWithSender:(id)a0;

@end
