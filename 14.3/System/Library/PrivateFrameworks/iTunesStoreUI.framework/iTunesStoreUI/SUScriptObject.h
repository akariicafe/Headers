@class SUClientInterface, SUScriptNativeObject, NSString, WebFrame, NSLock, SUScriptObjectInvocationBatch, NSMutableArray, NSMutableSet;

@interface SUScriptObject : NSObject {
    NSMutableArray *_eventListeners;
    SUScriptObjectInvocationBatch *_invocationBatch;
    NSLock *_lock;
    SUScriptNativeObject *_nativeObject;
    SUScriptObject *_parentScriptObject;
    NSMutableSet *_scriptObjects;
    unsigned char _checkOutWhenHidden : 1;
    unsigned char _isVisible : 1;
    NSString *_className;
}

@property (retain) SUScriptNativeObject *nativeObject;
@property (readonly) struct OpaqueJSContext { } *copyJavaScriptContext;
@property (readonly, retain) SUClientInterface *clientInterface;
@property SUScriptObject *parentScriptObject;
@property (readonly) BOOL sourceIsTrusted;
@property (readonly, retain) WebFrame *webFrame;
@property (readonly) NSMutableArray *scriptAttributeKeys;
@property (readonly, getter=_className) NSString *className;

+ (void)initialize;
+ (id)webScriptNameForSelector:(SEL)a0;
+ (BOOL)isSelectorExcludedFromWebScript:(SEL)a0;
+ (BOOL)isKeyExcludedFromWebScript:(const char *)a0;
+ (id)webScriptNameForKey:(const char *)a0;
+ (id)webScriptNameForKeyName:(id)a0;

- (void)setVisible:(BOOL)a0;
- (void)unlock;
- (void)lock;
- (id)init;
- (void).cxx_destruct;
- (id)parentViewController;
- (id)stringRepresentation;
- (void)dealloc;
- (void)finalizeForWebScript;
- (BOOL)isVisible;
- (BOOL)equals:(id)a0;
- (id)viewControllerFactory;
- (void)checkInScriptObject:(id)a0;
- (id)DOMElementWithElement:(id)a0;
- (void)dispatchEvent:(id)a0 forName:(id)a1;
- (id)copyObjectForScriptFromPoolWithClass:(Class)a0;
- (void)dispatchEvent:(id)a0 forName:(id)a1 synchronously:(BOOL)a2;
- (void)tearDownUserInterface;
- (void)checkInScriptObjects:(id)a0;
- (id)webThreadMainThreadBatchProxy;
- (void)checkOutBatchTarget:(id)a0;
- (void)checkOutScriptObjects:(id)a0;
- (id)_copyListenersForName:(id)a0;
- (id)newImageWithURL:(id)a0 scale:(double)a1;
- (BOOL)scriptObjectIsCheckedIn:(id)a0;
- (void)_checkOutAfterVisibilityChange;
- (void)checkOutScriptObject:(id)a0;
- (void)addListenerForEventWithName:(id)a0 callback:(id)a1 useCapture:(BOOL)a2;
- (void)removeListenerForEventWithName:(id)a0 callback:(id)a1 useCapture:(BOOL)a2;
- (void)loadImageWithURL:(id)a0 completionBlock:(id /* block */)a1;
- (id)newImageWithURL:(id)a0;
- (id)invocationBatch:(BOOL)a0;
- (void)didPerformBatchedInvocations;
- (void)willPerformBatchedInvocations;

@end
