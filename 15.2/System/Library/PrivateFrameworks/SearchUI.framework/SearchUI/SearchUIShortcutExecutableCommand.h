@class NSString, ATXActionSearchResultExecution;

@interface SearchUIShortcutExecutableCommand : SearchUITapCommand <ATXActionSearchResultExecutionDelegate>

@property (copy, nonatomic) id /* block */ commandCompletion;
@property (retain, nonatomic) ATXActionSearchResultExecution *actionExecution;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)supportsRowModel:(id)a0 environment:(id)a1;

- (unsigned long long)destination;
- (void).cxx_destruct;
- (void)dealloc;
- (void)performCommandWithCompletion:(id /* block */)a0;
- (void)actionSearchResultExecution:(id)a0 didDismissRemoteAlertWithReason:(long long)a1 actionCompleted:(BOOL)a2 withResult:(long long)a3 shouldClearAction:(BOOL)a4;
- (BOOL)shouldDeselectPreviousSelection;

@end
