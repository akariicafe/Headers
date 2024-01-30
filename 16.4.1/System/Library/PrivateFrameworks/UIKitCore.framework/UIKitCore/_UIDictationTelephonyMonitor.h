@class NSString, CXCallObserver, NSObject;
@protocol OS_dispatch_queue;

@interface _UIDictationTelephonyMonitor : NSObject <CXCallObserverDelegate> {
    NSObject<OS_dispatch_queue> *_queue;
    CXCallObserver *_callObserver;
}

@property (readonly, nonatomic) BOOL telephonyActivity;
@property (copy) id /* block */ activityChanged;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)_backgroundReset;
- (void)callObserver:(id)a0 callChanged:(id)a1;
- (id)init;
- (void)start;
- (void)_backgroundInit;
- (void).cxx_destruct;

@end
