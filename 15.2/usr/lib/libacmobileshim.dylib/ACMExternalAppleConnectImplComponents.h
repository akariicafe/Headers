@interface ACMExternalAppleConnectImplComponents : ACMAppleConnectImplComponents

+ (id)components;

- (id)preferences;
- (id)createHandlerWithClass:(Class)a0 context:(id)a1;
- (id)twoSVController;
- (id)uiController;
- (id)createAppleConnectImpl;
- (id)createAppleConnectImplWithMasterObject:(id)a0;
- (BOOL)uiControllerLoaded;
- (void)unloadUIController;
- (id)createAuthenticationRequest;

@end
