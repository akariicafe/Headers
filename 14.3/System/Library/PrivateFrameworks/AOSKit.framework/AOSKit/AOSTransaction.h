@class NSConditionLock, NSObject;
@protocol OS_dispatch_queue;

@interface AOSTransaction : NSObject <NSCoding> {
    unsigned char didSucceed;
    unsigned char didFinish;
    void *result;
    struct __CFError { } *error;
    void /* function */ *callbackFunction;
    id /* block */ callbackBlock;
    NSObject<OS_dispatch_queue> *callbackQueue;
    void *context;
    NSConditionLock *waitLock;
    void /* function */ *contextRetain;
    void /* function */ *contextRelease;
}

- (id)result;
- (id)init;
- (void)dealloc;
- (id)error;
- (id)initWithCoder:(id)a0;
- (void)finalize;
- (void)encodeWithCoder:(id)a0;
- (BOOL)isSuccessful;

@end
