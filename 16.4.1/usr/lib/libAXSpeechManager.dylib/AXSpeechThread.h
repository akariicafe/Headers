@class NSRunLoop, NSPort, NSObject;
@protocol OS_voucher;

@interface AXSpeechThread : NSThread {
    NSPort *_machPort;
    NSRunLoop *_threadRunLoop;
}

@property (retain, nonatomic) NSObject<OS_voucher> *voucher;

- (void)main;
- (void)cancel;
- (void)stop;
- (id)init;
- (void).cxx_destruct;

@end
