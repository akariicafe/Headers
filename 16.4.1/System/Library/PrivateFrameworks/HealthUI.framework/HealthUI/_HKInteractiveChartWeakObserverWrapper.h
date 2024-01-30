@protocol HKInteractiveChartViewObserver;

@interface _HKInteractiveChartWeakObserverWrapper : NSObject

@property (readonly, weak, nonatomic) id<HKInteractiveChartViewObserver> observer;

- (id)initWithObserver:(id)a0;
- (void).cxx_destruct;

@end
