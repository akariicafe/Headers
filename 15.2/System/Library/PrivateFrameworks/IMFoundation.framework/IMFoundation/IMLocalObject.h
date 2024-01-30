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
@property (retain, nonatomic) NSArray *allowlistedClasses;
@property (retain, nonatomic) NSArray *whitelistedClasses;

+ (void)initialize;
+ (void)_registerIMLocalObject:(id)a0;
+ (void)_setExceptionHandlingDisabled:(BOOL)a0;
+ (id)_imLocalObjectQueue;
+ (void)_unregisterIMLocalObject:(id)a0;
+ (id)_registeredIMLocalObjectForPort:(unsigned int)a0;

- (id)_peekInvocation;
- (void)_systemShutdown:(id)a0;
- (id)_currentMessageContext;
- (BOOL)handleInvocation:(id)a0;
- (void)setPortName:(id)a0;
- (void)_portDidBecomeInvalid;
- (void)_enqueueInvocationWithPriority:(id)a0 xpcMessage:(id)a1 priority:(int)a2;
- (void)_clearPort:(BOOL)a0;
- (void)_enqueueInvocation:(id)a0 xpcMessage:(id)a1;
- (void)_enqueueInvocationWithSync:(id)a0 xpcMessage:(id)a1;
- (id)initWithTarget:(id)a0 connection:(id)a1 protocol:(id)a2;
- (void)terminated;
- (BOOL)isValidSelector:(SEL)a0;
- (void)_enqueueInvocationWithPriority:(id)a0 priority:(int)a1;
- (id)initWithTarget:(id)a0 connection:(id)a1 protocol:(id)a2 forceSecureCoding:(BOOL)a3;
- (void)_clearPort:(BOOL)a0 signalRunLoopIfNeeded:(BOOL)a1;
- (void)_noteNewInvocation:(BOOL)a0;
- (id)description;
- (void)_enqueueInvocationWithSync:(id)a0 xpcMessage:(id)a1 submitToComponentQueue:(BOOL)a2;
- (void)_enqueueInvocation:(id)a0;
- (id)initWithTarget:(id)a0 connection:(id)a1 protocol:(id)a2 forceSecureCoding:(BOOL)a3 offMainThread:(BOOL)a4;
- (BOOL)isSameConnection:(id)a0;
- (void)_enqueueInvocationWithSync:(id)a0 xpcMessage:(id)a1 submitToComponentQueue:(BOOL)a2 isReply:(BOOL)a3;
- (void)_portInterrupted;
- (void)invalidate;
- (void)_enqueueInvocationWithSync:(id)a0;
- (void)_popInvocation;
- (void)dealloc;
- (BOOL)_handleInvocation:(id)a0;
- (void)_handleNewInvocations;
- (id)initWithTarget:(id)a0 protocol:(id)a1;
- (BOOL)_handleInvocation:(id)a0 processingComponentQueue:(BOOL)a1;
- (void)_enqueueInvocation:(id)a0 xpcMessage:(id)a1 submitToComponentQueue:(BOOL)a2 isSync:(BOOL)a3 isReply:(BOOL)a4;
- (id)initWithTarget:(id)a0 portName:(id)a1 protocol:(id)a2;

@end
