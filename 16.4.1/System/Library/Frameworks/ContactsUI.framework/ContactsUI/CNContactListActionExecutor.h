@class NSString, NSUndoManager, CNContactListActionAuthorizationContext, CNUIEditAuthorizationController;

@interface CNContactListActionExecutor : NSObject <CNUIEditAuthorizationControllerDelegate>

@property (readonly) NSUndoManager *undoManager;
@property (retain, nonatomic) CNUIEditAuthorizationController *editAuthorizationController;
@property (retain, nonatomic) CNContactListActionAuthorizationContext *authorizationContext;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)editAuthorizationController:(id)a0 authorizationDidFinishWithResult:(long long)a1;
- (void).cxx_destruct;
- (void)executeAction:(id)a0;
- (void)executeUndoableAction:(id)a0;
- (id)initWithUndoManager:(id)a0;
- (void)showEditAuthorizationPane:(id)a0 animated:(BOOL)a1 forAction:(id)a2;
- (BOOL)showEditAuthorizationPaneForAction:(id)a0 withActionType:(long long)a1;
- (void)undoAction:(id)a0;

@end
