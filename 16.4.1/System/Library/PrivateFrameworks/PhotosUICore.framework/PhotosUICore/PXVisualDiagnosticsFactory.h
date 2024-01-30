@interface PXVisualDiagnosticsFactory : NSObject

+ (void)_dismissProgressIndicator:(id)a0 completionHandler:(id /* block */)a1;
+ (void)_presentProgressIndicatorFromViewController:(id)a0 completionHandler:(id /* block */)a1;
+ (id)debugQuickLookObjectWithRootProvider:(id)a0;
+ (void)requestVisualDiagnosticsPDFDocumentURLWithConfiguration:(id)a0 resultHandler:(id /* block */)a1;
+ (void)requestVisualDiagnosticsPDFDocumentWithConfiguration:(id)a0 resultHandler:(id /* block */)a1;
+ (void)showVisualDiagnosticsWithConfiguration:(id)a0 fromViewController:(id)a1 completionHandler:(id /* block */)a2;

@end
