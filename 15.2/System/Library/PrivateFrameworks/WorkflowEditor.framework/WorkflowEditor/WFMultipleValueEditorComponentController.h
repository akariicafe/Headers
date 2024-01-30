@class NSString, WFMultipleValueEditingContext, WFMultipleValueEditorView;

@interface WFMultipleValueEditorComponentController : CKStatefulViewComponentController <WFMultipleValueEditorViewDelegate> {
    WFMultipleValueEditorView *_viewForSizing;
}

@property (retain, nonatomic) WFMultipleValueEditingContext *editingContext;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)newStatefulView:(id)a0;
+ (void)configureStatefulView:(id)a0 forComponent:(id)a1;

- (void).cxx_destruct;
- (void)multipleValueEditorView:(id)a0 didUpdateWithItem:(id)a1;
- (void)multipleValueEditorView:(id)a0 needsConfirmationForDeletion:(id)a1;
- (void)didAcquireStatefulView:(id)a0;
- (void)componentTreeWillAppear;
- (void)componentTreeDidDisappear;
- (void)willRelinquishStatefulView:(id)a0;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0 forComponent:(id)a1;

@end
