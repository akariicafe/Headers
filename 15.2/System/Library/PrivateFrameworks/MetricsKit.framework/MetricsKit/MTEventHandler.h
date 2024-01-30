@class NSString, NSArray;
@protocol MTEventHandlerDelegate;

@interface MTEventHandler : MTEventDataProvider

@property (retain, nonatomic) NSString *registeredName;
@property (retain, nonatomic) NSArray *registeredEventData;
@property (retain) NSArray *postProcessingBlocks;
@property (weak, nonatomic) id<MTEventHandlerDelegate> delegate;

+ (void)createEventContextCache;
+ (void)clearEventContextCache;
+ (id)currentEventContextCache;
+ (id)cachableWithKey:(id)a0 onBackgroundThread:(BOOL)a1 block:(id /* block */)a2;

- (id)knownFields;
- (void).cxx_destruct;
- (id)eventType;
- (id)eventVersion:(id)a0;
- (void)addPostProcessingBlock:(id /* block */)a0;
- (void)didCreateMetricsData:(id)a0;
- (id)metricsDataWithCallerSuppliedFields:(id)a0;
- (id)metricsDataWithEventData:(id)a0;
- (BOOL)mtIncludeBaseFields;
- (id)metricsDataWithFields:(id)a0;

@end
