@class CNUIUserActionListDataSource, UIContextMenuInteraction, NSString, CNContactActionsController, CNActionMenuHelper;

@interface CNPropertySendMessageAction : CNPropertyAction <CNContactActionsControllerDelegate, CNPropertyContextMenuAction>

@property (retain, nonatomic) CNContactActionsController *actionsController;
@property (retain, nonatomic) CNUIUserActionListDataSource *actionsDataSource;
@property (retain, nonatomic) CNActionMenuHelper *actionMenuHelper;
@property (retain, nonatomic) UIContextMenuInteraction *contextMenuInteraction;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (BOOL)shouldPresentDisambiguationMenu;
- (void)contactActionsController:(id)a0 didSelectAction:(id)a1;
- (void)contactActionsController:(id)a0 didUpdateWithMenu:(id)a1;
- (id)initWithContact:(id)a0 propertyItems:(id)a1 actionDataSource:(id)a2;
- (id /* block */)menuProviderForContextMenuInteraction:(id)a0;
- (void)performActionForItem:(id)a0 sender:(id)a1;
- (void)performActionWithSender:(id)a0;

@end
