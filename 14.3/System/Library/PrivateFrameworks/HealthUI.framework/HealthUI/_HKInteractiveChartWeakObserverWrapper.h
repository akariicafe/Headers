@protocol HKInteractiveChartViewObserver;

@interface _HKInteractiveChartWeakObserverWrapper : NSObject

@property (readonly, weak, nonatomic) id<HKInteractiveChartViewObserver> observer;

- (void).cxx_destruct;
- (id)initWithObserver:(id)a0;

@end
