@class PDFTimerPrivate;

@interface PDFTimer : NSObject {
    PDFTimerPrivate *_private;
}

- (void)_execute;
- (void)update;
- (void).cxx_destruct;
- (void)dealloc;
- (void)cancel;
- (id)initWithThrottleDelay:(double)a0 forSelector:(SEL)a1 forTarget:(id)a2;
- (id)initWithSelector:(SEL)a0 forTarget:(id)a1;
- (BOOL)isUpdateQueued;

@end
