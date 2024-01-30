@class CNUICoreRecentsManager, CNContactRecentsReference;

@interface CNContactClearRecentsDataAction : CNContactAction

@property (readonly, nonatomic) CNContactRecentsReference *recentsData;
@property (readonly, nonatomic) CNUICoreRecentsManager *coreRecentsManager;

- (void).cxx_destruct;
- (BOOL)isDestructive;
- (BOOL)canPerformAction;
- (void)performActionWithSender:(id)a0;
- (id)initWithRecentsData:(id)a0 coreRecentsManager:(id)a1;
- (id)title;

@end
