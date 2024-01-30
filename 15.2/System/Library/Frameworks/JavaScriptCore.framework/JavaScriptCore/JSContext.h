@class JSValue, JSVirtualMachine, NSString;

@interface JSContext : NSObject {
    struct RetainPtr<JSVirtualMachine> { void *m_ptr; } m_virtualMachine;
    struct OpaqueJSContext { } *m_context;
    struct Strong<JSC::JSObject, JSC::ShouldStrongDestructorGrabLock::No> { struct JSValue *m_slot; } m_exception;
    struct WeakObjCPtr<id<JSModuleLoaderDelegate>> { id m_weakReference; } m_moduleLoaderDelegate;
}

@property (readonly) JSValue *globalObject;
@property (retain) JSValue *exception;
@property (copy) id /* block */ exceptionHandler;
@property (readonly) JSVirtualMachine *virtualMachine;
@property (copy) NSString *name;

+ (id)currentContext;
+ (id)contextWithJSGlobalContextRef:(struct OpaqueJSContext { } *)a0;
+ (id)currentCallee;
+ (id)currentArguments;
+ (id)currentThis;

- (struct OpaqueJSContext { } *)JSGlobalContextRef;
- (id)evaluateScript:(id)a0;
- (void)notifyException:(struct OpaqueJSValue { } *)a0;
- (id)initWithGlobalContextRef:(struct OpaqueJSContext { } *)a0;
- (void)setObject:(id)a0 forKeyedSubscript:(id)a1;
- (void)ensureWrapperMap;
- (void)_setDebuggerRunLoop:(struct __CFRunLoop { } *)a0;
- (id)wrapperMap;
- (id)evaluateScript:(id)a0 withSourceURL:(id)a1;
- (void)_setIncludesNativeCallStackWhenReportingExceptions:(BOOL)a0;
- (id)dependencyIdentifiersForModuleJSScript:(id)a0;
- (BOOL)_remoteInspectionEnabled;
- (void)endCallbackWithData:(void *)a0;
- (id)initWithVirtualMachine:(id)a0;
- (void).cxx_destruct;
- (id)evaluateJSScript:(id)a0;
- (id)init;
- (id)wrapperForJSObject:(struct OpaqueJSValue { } *)a0;
- (struct __CFRunLoop { } *)_debuggerRunLoop;
- (id)moduleLoaderDelegate;
- (void)_setRemoteInspectionEnabled:(BOOL)a0;
- (BOOL)_includesNativeCallStackWhenReportingExceptions;
- (void)beginCallbackWithData:(void *)a0 calleeValue:(struct OpaqueJSValue { } *)a1 thisValue:(struct OpaqueJSValue { } *)a2 argumentCount:(unsigned long long)a3 arguments:(const struct OpaqueJSValue **)a4;
- (void)dealloc;
- (BOOL)boolFromNotifyException:(struct OpaqueJSValue { } *)a0;
- (id)valueFromNotifyException:(struct OpaqueJSValue { } *)a0;
- (void)_setITMLDebuggableType;
- (id).cxx_construct;
- (void)setModuleLoaderDelegate:(id)a0;
- (id)wrapperForObjCObject:(id)a0;
- (id)objectForKeyedSubscript:(id)a0;

@end
