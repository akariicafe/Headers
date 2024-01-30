@class NSString, SKUIPassbookLoader;

@interface SUScriptViewControllerNativeObject : SUScriptNativeObject <SKUIPassbookLoaderDelegate> {
    SKUIPassbookLoader *_passbookLoader;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (void)passbookLoaderDidFinish:(id)a0;
- (id)presentationViewControllerForPassbookLoader:(id)a0;
- (void)_loadPassbookPassWithURL:(id)a0;
- (void)_parentViewControllerChangeNotification:(id)a0;
- (void)_reloadVisibility;
- (void)destroyNativeObject;
- (void)setScriptObject:(id)a0;
- (void)setupNativeObject;

@end
