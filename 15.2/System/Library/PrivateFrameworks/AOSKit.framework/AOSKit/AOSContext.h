@class NSString, NSThread;

@interface AOSContext : NSObject <NSPortDelegate> {
    struct AOSAccount { } *_account;
    struct AOSTransactionC { Class x0; unsigned char x1; unsigned char x2; void *x3; struct __CFError *x4; void /* function */ *x5; id /* block */ x6; id x7; void *x8; id x9; void /* function */ *x10; void /* function */ *x11; } *_transaction;
    void /* function */ *_callback;
    NSThread *_callbackThread;
    id _info;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)contextWithAccount:(struct AOSAccount { } *)a0 andTransaction:(struct AOSTransactionC { Class x0; unsigned char x1; unsigned char x2; void *x3; struct __CFError *x4; void /* function */ *x5; id /* block */ x6; id x7; void *x8; id x9; void /* function */ *x10; void /* function */ *x11; } *)a1;

- (void)setAccount:(struct AOSAccount { } *)a0;
- (struct AOSTransactionC { Class x0; unsigned char x1; unsigned char x2; void *x3; struct __CFError *x4; void /* function */ *x5; id /* block */ x6; id x7; void *x8; id x9; void /* function */ *x10; void /* function */ *x11; } *)transaction;
- (void)setTransaction:(struct AOSTransactionC { Class x0; unsigned char x1; unsigned char x2; void *x3; struct __CFError *x4; void /* function */ *x5; id /* block */ x6; id x7; void *x8; id x9; void /* function */ *x10; void /* function */ *x11; } *)a0;
- (struct AOSAccount { } *)account;
- (void)setInfo:(id)a0;
- (void)finalize;
- (id)info;
- (id)init;
- (void)dealloc;
- (id)_callbackThread;
- (void)_performCallback;
- (BOOL)scheduleCallback;

@end
