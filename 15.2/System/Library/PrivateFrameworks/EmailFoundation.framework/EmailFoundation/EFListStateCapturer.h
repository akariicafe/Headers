@class NSObject;
@protocol OS_dispatch_queue, EFCancelable;

@interface EFListStateCapturer : NSObject

@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *stateCaptureQueue;
@property (readonly, nonatomic) id<EFCancelable> stateCaptureCancelable;

- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithTitle:(id)a0 itemName:(id)a1 headLimit:(unsigned long long)a2 tailLimit:(unsigned long long)a3 delegate:(id)a4;

@end
