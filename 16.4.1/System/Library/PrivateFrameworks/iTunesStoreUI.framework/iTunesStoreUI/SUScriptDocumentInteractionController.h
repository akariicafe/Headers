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

- (void)dealloc;
- (id)_className;
- (id)attributeKeys;
- (void)dismissMenuAnimated:(id)a0;
- (id)scriptAttributeKeys;
- (id)_cancelFunction;
- (void)showOpenWithMenuFromDOMElement:(id)a0;
- (id)_nativeDocumentInteractionController;
- (id)_nativeObject;
- (id)_openWithFunction;
- (void)showOpenWithMenuFromNavigationItem:(id)a0;

@end
