@class NSProtocolChecker, NSString, NSArray, NSObject;
@protocol OS_xpc_object;

@interface IMLocalObject : NSObject {
    id _internal;
}

@property (nonatomic) id target;
@property (readonly, nonatomic) NSProtocolChecker *protocolChecker;
@property (readonly, nonatomic) NSString *portName;
@property (retain, nonatomic) NSString *processName;
@property (readonly, nonatomic) NSObject<OS_xpc_object> *connection;
@property (readonly, nonatomic) BOOL isValid;
@property (readonly, nonatomic) BOOL wasInterrupted;
@property (retain, nonatomic) NSArray *whitelistedClasses;

+ (void)initialize;
+ (id)_registeredIMLocalObjectForPort:(unsigned int)a0;
+ (id)_imLocalObjectQueue;
+ (void)_setExceptionHandlingDisabled:(BOOL)a0;
+ (void)_registerIMLocalObject:(id)a0;
+ (void)_unregisterIMLocalObject:(id)a0;

- (void)_enqueueInvocationWithSync:(id)a0 xpcMessage:(id)a1 submitToComponentQueue:(BOOL)a2;
- (void)_enqueueInvocation:(id)a0 xpcMessage:(id)a1 submitToComponentQueue:(BOOL)a2 isSync:(BOOL)a3;
- (id)initWithTarget:(id)a0 portName:(id)a1 protocol:(id)a2;
- (id)initWithTarget:(id)a0 connection:(id)a1 protocol:(id)a2 forceSecureCoding:(BOOL)a3 offMainThread:(BOOL)a4;
- (void)_popInvocation;
- (void)dealloc;
- (BOOL)_handleInvocation:(id)a0 processingComponentQueue:(BOOL)a1;
- (void)_enqueueInvocation:(id)a0;
- (void)_noteNewInvocation:(BOOL)a0;
- (id)_peekInvocation;
- (void)_handleNewInvocations;
- (void)setPortName:(id)a0;
- (BOOL)_handleInvocation:(id)a0;
- (void)_systemShutdown:(id)a0;
- (id)initWithTarget:(id)a0 connection:(id)a1 protocol:(id)a2;
- (void)_clearPort:(BOOL)a0;
- (id)description;
- (void)_enqueueInvocationWithSync:(id)a0 xpcMessage:(id)a1;
- (BOOL)isSameConnection:(id)a0;
- (void)_enqueueInvocationWithPriority:(id)a0 xpcMessage:(id)a1 priority:(int)a2;
- (id)initWithTarget:(id)a0 connection:(id)a1 protocol:(id)a2 forceSecureCoding:(BOOL)a3;
- (BOOL)isValidSelector:(SEL)a0;
- (id)_currentMessageContext;
- (void)_portDidBecomeInvalid;
- (void)terminated;
- (void)_enqueueInvocationWithSync:(id)a0;
- (BOOL)handleInvocation:(id)a0;
- (void)_portInterrupted;
- (void)_enqueueInvocation:(id)a0 xpcMessage:(id)a1;
- (void)_enqueueInvocationWithPriority:(id)a0 priority:(int)a1;
- (void)_clearPort:(BOOL)a0 signalRunLoopIfNeeded:(BOOL)a1;
- (id)initWithTarget:(id)a0 protocol:(id)a1;
- (void)invalidate;

@end
