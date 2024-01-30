@interface NABridgedIssueTableOfContentsViewControllerFactory : NSObject <NABridgedIssueTableOfContentsViewControllerFactoryType> {
    void /* unknown type, empty encoding */ resolver;
    void /* unknown type, empty encoding */ bridgedActionHandler;
}

- (id)init;
- (void).cxx_destruct;
- (id)initWithResolver:(id)a0 bridgedContainer:(id)a1 bridgedActionHandler:(id)a2;
- (id)createViewControllerFor:(id)a0;

@end
