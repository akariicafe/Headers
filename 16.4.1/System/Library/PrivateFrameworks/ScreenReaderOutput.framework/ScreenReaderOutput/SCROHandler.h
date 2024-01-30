@class NSLock;

@interface SCROHandler : NSObject <SCROHandlerProtocol> {
    NSLock *_lock;
    BOOL isInvalid;
}

@property (weak, nonatomic) id callbackDelegate;

- (void)lock;
- (void)unlock;
- (id)init;
- (void)invalidate;
- (void).cxx_destruct;
- (int)handleGetValue:(id *)a0 forKey:(int)a1 trusted:(BOOL)a2;
- (int)handleGetValue:(id *)a0 forKey:(int)a1 withObject:(id)a2 trusted:(BOOL)a3;
- (int)handlePerformActionForKey:(int)a0 trusted:(BOOL)a1;
- (int)handleRegisterCallbackForKey:(int)a0 trusted:(BOOL)a1;
- (int)handleSetValue:(id)a0 forKey:(int)a1 trusted:(BOOL)a2;

@end
