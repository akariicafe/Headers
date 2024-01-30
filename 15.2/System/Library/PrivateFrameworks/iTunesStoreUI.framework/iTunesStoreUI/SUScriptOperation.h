@class ISOperation, WebScriptObject;

@interface SUScriptOperation : ISOperation {
    id _options;
    ISOperation *_wrappedOperation;
    WebScriptObject *_callbackFunction;
}

+ (Class)postOperationClassForType:(id)a0;
+ (void)registerPostOperationClass:(Class)a0 forType:(id)a1;

- (void)run;
- (void)dealloc;
- (id)initWithPostType:(id)a0 options:(id)a1;
- (id)initWithOperation:(id)a0 options:(id)a1;
- (id)initWithOperation:(id)a0 callback:(id)a1;
- (void)setScriptOptions:(id)a0;
- (void)_sendCompletionCallback;
- (id)_scriptOptions;

@end
