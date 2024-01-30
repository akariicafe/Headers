@interface OKJavaScriptContext : JSContext

- (void)setupConvenienceMethods;
- (void)setupOpus;
- (void)setupWidgets;
- (void)setupTransitions;
- (void)setupControllers;
- (id)valueFromJSValue:(id)a0;
- (id)init;
- (void)setupActions;
- (void)setupNativeStructs;
- (void)setupContentFilters;
- (void)setupConsole;
- (void)dealloc;
- (void)setupExceptionHandler;
- (void)setupNativeObjects;

@end
