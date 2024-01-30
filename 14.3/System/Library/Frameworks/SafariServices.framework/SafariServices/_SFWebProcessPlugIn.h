@interface _SFWebProcessPlugIn : WBSWebProcessPlugIn

- (void)didCreatePageController:(id)a0 forBrowserContextController:(id)a1;
- (void)willDestroyPageController:(id)a0 forBrowserContextController:(id)a1;
- (id)pageControllerWithBrowserContextController:(id)a0;

@end
