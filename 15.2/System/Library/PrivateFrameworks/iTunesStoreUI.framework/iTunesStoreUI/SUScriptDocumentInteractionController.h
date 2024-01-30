@class NSString, WebScriptObject, SUScriptFunction;

@interface SUScriptDocumentInteractionController : SUScriptObject {
    SUScriptFunction *_cancelFunction;
    SUScriptFunction *_openWithFunction;
}

@property (retain) WebScriptObject *cancelFunction;
@property (retain) WebScriptObject *openWithFunction;
@property (copy) NSString *UTI;

+ (void)initialize;
+ (id)webScriptNameForSelector:(SEL)a0;
+ (id)webScriptNameForKeyName:(id)a0;

- (void)dismissMenuAnimated:(id)a0;
- (id)_className;
- (id)attributeKeys;
- (void)dealloc;
- (id)scriptAttributeKeys;
- (id)_nativeObject;
- (id)_nativeDocumentInteractionController;
- (void)showOpenWithMenuFromDOMElement:(id)a0;
- (void)showOpenWithMenuFromNavigationItem:(id)a0;
- (id)_cancelFunction;
- (id)_openWithFunction;

@end
