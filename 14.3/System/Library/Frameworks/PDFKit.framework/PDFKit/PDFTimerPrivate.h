@class NSTimer, NSInvocation, NSObject;

@interface PDFTimerPrivate : NSObject {
    NSObject *target;
    NSInvocation *methodInvocation;
    NSTimer *timer;
    double timeInterval;
    BOOL isRequested;
}

- (void).cxx_destruct;

@end
