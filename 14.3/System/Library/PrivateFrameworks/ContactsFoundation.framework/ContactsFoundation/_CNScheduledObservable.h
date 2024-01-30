@protocol CNScheduler, CNObservable;

@interface _CNScheduledObservable : CNObservable

@property (retain, nonatomic) id<CNObservable> observable;
@property (retain, nonatomic) id<CNScheduler> scheduler;

- (id)subscribe:(id)a0;
- (void).cxx_destruct;
- (id)initWithObservable:(id)a0 scheduler:(id)a1;

@end
