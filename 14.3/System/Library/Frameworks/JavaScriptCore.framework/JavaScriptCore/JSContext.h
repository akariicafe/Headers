@class JSValue, JSVirtualMachine, NSString;

@interface JSContext : NSObject {
    JSVirtualMachine *m_virtualMachine;
    struct OpaqueJSContext { } *m_context;
    struct Strong<JSC::JSObject, JSC::ShouldStrongDestructorGrabLock::No> { struct JSValue *m_slot; } m_exception;
    struct WeakObjCPtr<id<JSModuleLoaderDelegate> > { id m_weakReference; } m_moduleLoaderDelegate;
}

@property (readonly) JSValue *globalObject;
@property (retain) JSValue *exception;
@property (copy) id /* block */ exceptionHandler;
@property (readonly) JSVirtualMachine *virtualMachine;
@property (copy) NSString *name;

+ (id)currentArguments;
+ (id)contextWithJSGlobalContextRef:(struct OpaqueJSContext { } *)a0;
+ (id)currentContext;
+ (id)currentCallee;
+ (id)currentThis;

- (void)setObject:(id)a0 forKeyedSubscript:(id)a1;
- (void)ensureWrapperMap;
- (id)evaluateScript:(id)a0;
- (id)init;
- (void)endCallbackWithData:(struct CallbackData { struct CallbackData *x0; id x1; id x2; struct OpaqueJSValue *x3; struct OpaqueJSValue *x4; unsigned long long x5; struct OpaqueJSValue **x6; id x7; } *)a0;
- (void)_setIncludesNativeCallStackWhenReportingExceptions:(BOOL)a0;
- (void).cxx_destruct;
- (id)wrapperMap;
- (void)dealloc;
- (id)wrapperForObjCObject:(id)a0;
- (void)beginCallbackWithData:(struct CallbackData { struct CallbackData *x0; id x1; id x2; struct OpaqueJSValue *x3; struct OpaqueJSValue *x4; unsigned long long x5; struct OpaqueJSValue **x6; id x7; } *)a0 calleeValue:(struct OpaqueJSValue { } *)a1 thisValue:(struct OpaqueJSValue { } *)a2 argumentCount:(unsigned long long)a3 arguments:(const struct OpaqueJSValue **)a4;
- (BOOL)_remoteInspectionEnabled;
- (struct __CFRunLoop { } *)_debuggerRunLoop;
- (id)evaluateJSScript:(id)a0;
- (void)notifyException:(struct OpaqueJSValue { } *)a0;
- (id).cxx_construct;
- (id)moduleLoaderDelegate;
- (id)objectForKeyedSubscript:(id)a0;
- (struct OpaqueJSContext { } *)JSGlobalContextRef;
- (void)_setRemoteInspectionEnabled:(BOOL)a0;
- (id)evaluateScript:(id)a0 withSourceURL:(id)a1;
- (BOOL)boolFromNotifyException:(struct OpaqueJSValue { } *)a0;
- (id)dependencyIdentifiersForModuleJSScript:(id)a0;
- (id)valueFromNotifyException:(struct OpaqueJSValue { } *)a0;
- (id)initWithVirtualMachine:(id)a0;
- (id)wrapperForJSObject:(struct OpaqueJSValue { } *)a0;
- (void)_setDebuggerRunLoop:(struct __CFRunLoop { } *)a0;
- (void)setModuleLoaderDelegate:(id)a0;
- (id)initWithGlobalContextRef:(struct OpaqueJSContext { } *)a0;
- (BOOL)_includesNativeCallStackWhenReportingExceptions;
- (void)_setITMLDebuggableType;

@end
