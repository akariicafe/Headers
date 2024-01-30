@class HAP2CoAPIOThread, HAP2Lock, NSMutableArray;

@interface HAP2CoAPIO : NSObject

@property (class, readonly, nonatomic) HAP2Lock *lock;
@property (class, retain, nonatomic) NSMutableArray *consumers;
@property (class, retain, nonatomic) HAP2CoAPIOThread *thread;
@property (class, readonly, nonatomic, getter=isRunning) BOOL running;

+ (id)new;
+ (void)unregisterConsumer:(id)a0;
+ (void)queueSessionBlockForConsumer:(id)a0 sessionBlock:(id /* block */)a1 withTimeout:(double)a2 requiresCompletion:(BOOL)a3;
+ (void)queueSessionCompletionForConsumer:(id)a0;
+ (void)registerConsumer:(id)a0;
+ (BOOL)setCoapAddressFromString:(id)a0 port:(unsigned short)a1 coapAddress:(struct coap_address_t { unsigned int x0; union { struct sockaddr { unsigned char x0; unsigned char x1; char x2[14]; } x0; struct sockaddr_in { unsigned char x0; unsigned char x1; unsigned short x2; struct in_addr { unsigned int x0; } x3; char x4[8]; } x1; struct sockaddr_in6 { unsigned char x0; unsigned char x1; unsigned short x2; unsigned int x3; struct in6_addr { union { unsigned char x0[16]; unsigned short x1[8]; unsigned int x2[4]; } x0; } x4; unsigned int x5; } x2; } x1; } *)a2;

- (id)init;

@end
