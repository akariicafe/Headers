@class Protocol, NSMapTable, NSArray, NSHashTable, NADelegateMethodLogSettings;

@interface NADelegateDispatcher : NSObject

@property (readonly, nonatomic) struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } lock;
@property (readonly, nonatomic) Protocol *protocol;
@property (readonly, nonatomic) NSHashTable *observerTable;
@property (readonly, nonatomic) NSMapTable *cachedMethodMetadataBySelector;
@property (retain, nonatomic) NSArray *overrideObservers;
@property (readonly, nonatomic) id proxy;
@property (readonly, nonatomic) NSArray *observers;
@property (retain, nonatomic) NADelegateMethodLogSettings *logSettings;

+ (id)_findMethodSignatureForSelector:(SEL)a0 inProtocol:(id)a1;
+ (id)dispatcherWithProtocol:(id)a0 logSettings:(id)a1;

- (BOOL)conformsToProtocol:(id)a0;
- (void)addObserver:(id)a0;
- (BOOL)respondsToSelector:(SEL)a0;
- (void)removeObserver:(id)a0;
- (id)methodSignatureForSelector:(SEL)a0;
- (void).cxx_destruct;
- (void)forwardInvocation:(id)a0;
- (id)_descriptionForArgument:(id)a0 index:(unsigned long long)a1 format:(BOOL)a2 metadata:(id)a3;
- (id)_effectiveObservers;
- (id)_lock_methodMetadataForSelector:(SEL)a0;
- (void)_logEventForInvocation:(id)a0 metadata:(id)a1;
- (void)_logEventForSelector:(SEL)a0 metadata:(id)a1;
- (void)_logEventForSelector:(SEL)a0 metadata:(id)a1 formatArgs:(BOOL)a2 arg0:(id)a3;
- (void)_logEventForSelector:(SEL)a0 metadata:(id)a1 formatArgs:(BOOL)a2 arg0:(id)a3 arg1:(id)a4;
- (void)_logEventForSelector:(SEL)a0 metadata:(id)a1 formatArgs:(BOOL)a2 arg0:(id)a3 arg1:(id)a4 arg2:(id)a5;
- (void)_logEventForSelector:(SEL)a0 metadata:(id)a1 formatArgs:(BOOL)a2 arg0:(id)a3 arg1:(id)a4 arg2:(id)a5 arg3:(id)a6;
- (void)_logEventForSelector:(SEL)a0 metadata:(id)a1 formatArgs:(BOOL)a2 arg0:(id)a3 arg1:(id)a4 arg2:(id)a5 arg3:(id)a6 arg4:(id)a7;
- (void)_logEventForSelector:(SEL)a0 metadata:(id)a1 formatArgs:(BOOL)a2 arg0:(id)a3 arg1:(id)a4 arg2:(id)a5 arg3:(id)a6 arg4:(id)a7 arg5:(id)a8;
- (id)_methodMetadataForSelector:(SEL)a0;
- (id)_trampolineBlockForSelector:(SEL)a0 withMethodSignature:(id)a1;
- (void)dispatchMessageExcludingSender:(id)a0 usingBlock:(id /* block */)a1;
- (id)initWithProtocol:(id)a0 logSettings:(id)a1;
- (void)registerCustomHandlerForSelector:(SEL)a0 handler:(id /* block */)a1;
- (void)registerCustomLogSettings:(id)a0 forSelector:(SEL)a1 argumentIndex:(unsigned long long)a2;

@end
