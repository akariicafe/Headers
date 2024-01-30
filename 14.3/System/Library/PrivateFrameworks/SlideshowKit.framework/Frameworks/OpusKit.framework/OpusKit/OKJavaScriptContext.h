@interface OKJavaScriptContext : JSContext

- (void)setupNativeObjects;
- (id)init;
- (void)setupExceptionHandler;
- (void)dealloc;
- (void)setupConsole;
- (id)valueFromJSValue:(id)a0;
- (void)setupActions;
- (void)setupWidgets;
- (void)setupConvenienceMethods;
- (void)setupTransitions;
- (void)setupControllers;
- (void)setupNativeStructs;
- (void)setupContentFilters;
- (void)setupOpus;

@end
