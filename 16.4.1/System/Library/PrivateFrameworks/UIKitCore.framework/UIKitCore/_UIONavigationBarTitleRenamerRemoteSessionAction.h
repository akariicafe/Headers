@interface _UIONavigationBarTitleRenamerRemoteSessionAction : _UIOResponse

+ (id)didCancelSession:(id)a0 responseHandler:(id /* block */)a1;
+ (id)didEndEditingActionWithSession:(id)a0 text:(id)a1 responseHandler:(id /* block */)a2;
+ (id)shouldEndEditingActionWithSession:(id)a0 text:(id)a1 responseHandler:(id /* block */)a2;
+ (id)willBeginRenamingActionWithSession:(id)a0 text:(id)a1 selectedRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a2 responseHandler:(id /* block */)a3;

- (struct _NSRange { unsigned long long x0; unsigned long long x1; })selectedRange;
- (id)text;
- (int)_action;
- (void)handleResponseToOverlayService:(id)a0;

@end
