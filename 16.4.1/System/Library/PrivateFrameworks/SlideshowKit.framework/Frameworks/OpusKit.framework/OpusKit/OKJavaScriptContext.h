@interface OKJavaScriptContext : JSContext

- (void)setupNativeObjects;
- (void)setupControllers;
- (id)valueFromJSValue:(id)a0;
- (void)setupConvenienceMethods;
- (void)setupNativeStructs;
- (void)setupActions;
- (void)setupExceptionHandler;
- (void)setupWidgets;
- (void)setupOpus;
- (void)setupContentFilters;
- (void)dealloc;
- (id)init;
- (void)setupConsole;
- (void)setupTransitions;

@end
