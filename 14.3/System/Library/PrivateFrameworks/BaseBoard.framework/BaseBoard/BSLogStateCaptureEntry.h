@class NSString, NSObject;
@protocol OS_dispatch_queue;

@interface BSLogStateCaptureEntry : NSObject

@property (readonly, nonatomic) NSString *title;
@property (readonly, copy, nonatomic) id /* block */ captureBlock;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *queue;

- (void).cxx_destruct;

@end
