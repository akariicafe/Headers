@interface WFTranslateTextAction : WFAction

- (void)runAsynchronouslyWithInput:(id)a0;
- (void)translateText:(id)a0 fromLocale:(id)a1 toLocale:(id)a2 translator:(id)a3 completionBlock:(id /* block */)a4;

@end
