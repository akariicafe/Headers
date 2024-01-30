@class NSString, CNSuspendableSchedulerDecorator;
@protocol CNObserver;

@interface _CNBufferedObserver : NSObject <CNObserver>

@property (readonly, nonatomic) id<CNObserver> observer;
@property (readonly, nonatomic) CNSuspendableSchedulerDecorator *observerScheduler;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)bufferObserver:(id)a0 schedulerProvider:(id)a1;

- (void)observerDidReceiveResult:(id)a0;
- (void)observerDidComplete;
- (id)initWithObserver:(id)a0 scheduler:(id)a1;
- (void).cxx_destruct;
- (void)resume;
- (void)observerDidFailWithError:(id)a0;

@end
