@class NSMutableArray;
@protocol _CNBufferingStrategy, CNObservable;

@interface _CNBufferingObservable : CNObservable

@property (retain, nonatomic) id<_CNBufferingStrategy> strategy;
@property (retain, nonatomic) id<CNObservable> observable;
@property (retain, nonatomic) NSMutableArray *results;

- (id)subscribe:(id)a0;
- (void).cxx_destruct;
- (id)initWithBufferingStrategy:(id)a0 observable:(id)a1;
- (id)initWithLength:(unsigned long long)a0 observable:(id)a1;
- (id)initWithLength:(unsigned long long)a0 timeInterval:(double)a1 scheduler:(id)a2 observable:(id)a3;
- (id)initWithTimeInterval:(double)a0 scheduler:(id)a1 observable:(id)a2;
- (void)sendBufferedResultsToObserver:(id)a0;

@end
