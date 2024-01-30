@class NSString, NSObject;
@protocol OS_dispatch_queue;

@interface RBLogStateCaptureEntry : NSObject {
    NSString *_title;
    id /* block */ _captureBlock;
    NSObject<OS_dispatch_queue> *_queue;
}

- (void).cxx_destruct;

@end
