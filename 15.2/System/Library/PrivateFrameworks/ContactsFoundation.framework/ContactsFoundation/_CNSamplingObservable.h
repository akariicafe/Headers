@protocol CNCancelable, CNObservable;

@interface _CNSamplingObservable : CNObservable

@property (readonly, nonatomic) id<CNObservable> observable;
@property (readonly, nonatomic) id<CNObservable> sampler;
@property (retain) id sample;
@property (retain) id<CNCancelable> timer;

- (void)receiveResult:(id)a0;
- (void)sendSampleToObserver:(id)a0;
- (void).cxx_destruct;
- (id)subscribe:(id)a0;
- (id)initWithObservable:(id)a0 sampler:(id)a1;

@end
