@class CNUIUserActionListDataSource, NSString, UIAlertController, CNContactActionsController;

@interface CNPropertySendMessageAction : CNPropertyAction <CNContactActionsControllerDelegate>

@property (retain, nonatomic) UIAlertController *alertController;
@property (retain, nonatomic) CNContactActionsController *actionsController;
@property (retain, nonatomic) CNUIUserActionListDataSource *actionsDataSource;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)performActionWithSender:(id)a0;
- (void)performActionForItem:(id)a0 sender:(id)a1;
- (id)initWithContact:(id)a0 propertyItems:(id)a1 actionDataSource:(id)a2;
- (void)contactActionsController:(id)a0 didSelectAction:(id)a1;
- (void)presentDisambiguationAlertWithSender:(id)a0;

@end
