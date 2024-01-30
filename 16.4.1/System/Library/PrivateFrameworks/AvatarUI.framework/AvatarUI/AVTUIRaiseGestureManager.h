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

- (void)wakeGestureManager:(id)a0 didUpdateWakeGesture:(long long)a1;
- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (id)initWithBackingWakeGestureManager:(id)a0 callbackQueue:(id)a1;
- (void)startRaiseGestureUpdates;
- (void)stopRaiseGestureUpdates;

@end
