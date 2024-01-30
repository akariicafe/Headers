@interface ICCreateDayOneEntryAction : ICSchemeAction

- (void)getImagesFromInput:(id)a0 completionHandler:(id /* block */)a1;
- (BOOL)inputRequired;
- (void)performActionWithInput:(id)a0 parameters:(id)a1 userInterface:(id)a2 successHandler:(id /* block */)a3 errorHandler:(id /* block */)a4;

@end
