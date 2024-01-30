@class NSDictionary;

@interface VUIJSApplication : VUIJSObject <VUIJSApplication>

@property (readonly, nonatomic) NSDictionary *traitCollection;

- (void)reload:(id)a0 :(id)a1;
- (void)launchAppWithOptions:(id)a0;
- (void)exitAppWithOptions:(id)a0;
- (void)openURLWithOptions:(id)a0;
- (void)suspendAppWithOptions:(id)a0;
- (void)resumeAppWithOptions:(id)a0;
- (void)updatedAppWithOptions:(id)a0;
- (void)dispatchErrorWithMessage:(id)a0 sourceURL:(id)a1 line:(id)a2;

@end
