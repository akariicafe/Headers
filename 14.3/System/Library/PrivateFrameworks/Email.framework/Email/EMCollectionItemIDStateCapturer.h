@class NSObject;
@protocol OS_dispatch_queue, EFCancelable;

@interface EMCollectionItemIDStateCapturer : NSObject

@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *stateCaptureQueue;
@property (readonly, nonatomic) id<EFCancelable> stateCaptureCancelable;

- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithTitle:(id)a0 delegate:(id)a1;

@end
