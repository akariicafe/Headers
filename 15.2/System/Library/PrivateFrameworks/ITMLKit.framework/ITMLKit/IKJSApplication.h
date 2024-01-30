@class NSString, NSDictionary;

@interface IKJSApplication : IKJSObject <NSObject, IKJSApplication, _IKJSApplicationProxy, _IKJSApplication>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) NSDictionary *traitCollection;

- (void)update;
- (void)reload:(id)a0 :(id)a1;
- (void)launchAppWithOptions:(id)a0;
- (void)exitAppWithOptions:(id)a0;
- (void)openURLWithOptions:(id)a0;
- (void)suspendAppWithOptions:(id)a0;
- (void)resumeAppWithOptions:(id)a0;
- (void)updatedAppWithOptions:(id)a0;
- (void)dispatchErrorWithMessage:(id)a0 sourceURL:(id)a1 line:(id)a2;
- (id)asPrivateIKJSApplication;
- (void)traitCollectionChanged:(id)a0;
- (BOOL)requestDocumentWithContext:(id)a0 response:(id)a1;

@end
