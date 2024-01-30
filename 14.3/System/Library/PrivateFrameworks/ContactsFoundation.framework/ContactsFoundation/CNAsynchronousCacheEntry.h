@class NSMutableArray;
@protocol CNSchedulerProvider;

@interface CNAsynchronousCacheEntry : NSObject

@property (readonly) id<CNSchedulerProvider> schedulerProvider;
@property (retain) id currentValue;
@property (readonly) NSMutableArray *delegates;
@property (readonly) double timestampOfCurrentValue;

- (id)initWithSchedulerProvider:(id)a0;
- (void)addDelegate:(id)a0;
- (void).cxx_destruct;
- (void)removeDelegates:(id)a0;
- (void)updateValue:(id)a0;
- (id)description;

@end
