@class NSString, CKActionSheetMenuTitleView;
@protocol CKActionSheetMenuViewDelegate;

@interface CKActionSheetMenuView : UIInterfaceActionGroupView <UIInterfaceActionHandlerInvocationDelegate> {
    CKActionSheetMenuTitleView *_titleView;
}

@property (weak, nonatomic) id<CKActionSheetMenuViewDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)interfaceAction:(id)a0 invokeActionHandler:(id /* block */)a1 completion:(id /* block */)a2;
- (void)setTitle:(id)a0;
- (void)setFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)dismissSelf;
- (void)updateTitleConstraintsForBoundingRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)initWithTitle:(id)a0 interfaceActions:(id)a1;

@end
