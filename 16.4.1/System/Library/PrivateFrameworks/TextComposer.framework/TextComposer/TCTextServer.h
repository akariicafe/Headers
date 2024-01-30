@interface TCTextServer : NSObject <TCXPCTextServer>

+ (id)validatedDetailDictionaryForDictionary:(id)a0;
+ (id)validatedOptionsDictionaryForDictionary:(id)a0;
+ (id)validatedOptionsDictionaryForOptionsData:(id)a0 editorTypes:(id)a1;

- (void)_checkString:(id)a0 language:(id)a1 offset:(unsigned long long)a2 options:(id)a3 completionHandler:(id /* block */)a4;
- (void)_xpc_dataFromCheckingGrammarInString:(id)a0 language:(id)a1 offset:(unsigned long long)a2 optionsData:(id)a3 completionHandler:(id /* block */)a4;
- (void)_xpc_dataFromCheckingString:(id)a0 language:(id)a1 offset:(unsigned long long)a2 optionsData:(id)a3 completionHandler:(id /* block */)a4;
- (void)_xpc_recordResponse:(unsigned long long)a0 toGrammarDetailPropertyListData:(id)a1 language:(id)a2 appIdentifier:(id)a3;
- (void)prewarmEditor;

@end
