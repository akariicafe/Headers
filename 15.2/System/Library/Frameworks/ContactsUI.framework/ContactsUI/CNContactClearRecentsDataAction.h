@class CNUICoreRecentsManager, CNContactRecentsReference;

@interface CNContactClearRecentsDataAction : CNContactAction

@property (readonly, nonatomic) CNContactRecentsReference *recentsData;
@property (readonly, nonatomic) CNUICoreRecentsManager *coreRecentsManager;

- (BOOL)isDestructive;
- (BOOL)canPerformAction;
- (id)title;
- (void)performActionWithSender:(id)a0;
- (id)initWithRecentsData:(id)a0 coreRecentsManager:(id)a1;
- (void).cxx_destruct;

@end
