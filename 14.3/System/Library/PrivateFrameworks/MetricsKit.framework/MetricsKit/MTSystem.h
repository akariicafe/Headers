@class MTEnvironment, MTEventRecorder;
@protocol MTEventFilter;

@interface MTSystem : MTObject

@property (retain, nonatomic) MTEnvironment *environment;
@property (retain, nonatomic) MTEventRecorder *eventRecorder;
@property (retain, nonatomic) id<MTEventFilter> eventFilter;
@property (retain, nonatomic) id<MTEventFilter> treatmentFilter;

- (void).cxx_destruct;
- (id)initWithMetricsKit:(id)a0;
- (void)setEventFilterWithJavaScriptFunction:(id)a0 context:(id)a1 operationQueue:(id)a2;

@end
