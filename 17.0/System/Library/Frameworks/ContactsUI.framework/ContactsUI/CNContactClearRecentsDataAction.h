@class CNUICoreRecentsManager, CNContactRecentsReference;

@interface CNContactClearRecentsDataAction : CNContactAction

@property (readonly, nonatomic) CNContactRecentsReference *recentsData;
@property (readonly, nonatomic) CNUICoreRecentsManager *coreRecentsManager;

- (BOOL)isDestructive;
- (void).cxx_destruct;
- (id)title;
- (BOOL)canPerformAction;
- (id)initWithRecentsData:(id)a0 coreRecentsManager:(id)a1;
- (void)performActionWithSender:(id)a0;

@end
