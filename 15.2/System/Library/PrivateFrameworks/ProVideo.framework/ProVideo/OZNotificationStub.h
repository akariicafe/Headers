@class NSTimer;

@interface OZNotificationStub : NSObject {
    NSTimer *_pTimer;
    void *_pDocument;
}

- (void)fire;
- (void)dealloc;
- (void)createTimer;
- (void)releaseTimer;
- (id)initWithOZDocument:(void *)a0 useTimer:(BOOL)a1;
- (void)processNotifications:(id)a0;

@end
