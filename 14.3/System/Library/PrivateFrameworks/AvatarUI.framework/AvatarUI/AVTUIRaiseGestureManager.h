@class NSString, CMWakeGestureManager, NSObject;
@protocol OS_dispatch_queue, AVTUIRaiseGestureManagerDelegate;

@interface AVTUIRaiseGestureManager : NSObject <CMWakeGestureDelegate>

@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *callbackQueue;
@property (readonly, nonatomic) CMWakeGestureManager *wakeGestureManager;
@property (weak, nonatomic) id<AVTUIRaiseGestureManagerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (void)dealloc;
- (void)startRaiseGestureUpdates;
- (id)initWithBackingWakeGestureManager:(id)a0 callbackQueue:(id)a1;
- (void)stopRaiseGestureUpdates;
- (void)wakeGestureManager:(id)a0 didUpdateWakeGesture:(long long)a1;

@end
