@class NSTimer;

@interface _MXExtensionRequestReceipt : NSObject {
    NSTimer *_timer;
    id /* block */ _completion;
}

- (id)initWithCompletion:(id /* block */)a0;
- (void)cancel;
- (void)dealloc;
- (void).cxx_destruct;
- (void)cancelWithTimeInterval:(double)a0;

@end
