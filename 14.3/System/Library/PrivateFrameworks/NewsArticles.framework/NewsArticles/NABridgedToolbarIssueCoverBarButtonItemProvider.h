@interface NABridgedToolbarIssueCoverBarButtonItemProvider : NSObject <NABridgedToolbarIssueCoverBarButtonItemProviderType> {
    void /* unknown type, empty encoding */ resolver;
    void /* unknown type, empty encoding */ bridgedActionHandler;
    void /* unknown type, empty encoding */ barPageItem;
}

- (id)init;
- (void).cxx_destruct;
- (id)initWithResolver:(id)a0 bridgedActionHandler:(id)a1;
- (id)barButtonItemForIssue:(id)a0 toolbarFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 shouldAddBottomPadding:(BOOL)a2;

@end
