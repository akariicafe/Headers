@class NSString, NSArray;
@protocol MTEventHandlerDelegate;

@interface MTEventHandler : MTEventDataProvider

@property (retain, nonatomic) NSString *registeredName;
@property (retain, nonatomic) NSArray *registeredEventData;
@property (retain) NSArray *postProcessingBlocks;
@property (weak, nonatomic) id<MTEventHandlerDelegate> delegate;

+ (id)cachableWithKey:(id)a0 onBackgroundThread:(BOOL)a1 block:(id /* block */)a2;
+ (void)clearEventContextCache;
+ (void)createEventContextCache;
+ (id)currentEventContextCache;

- (id)eventType;
- (void).cxx_destruct;
- (id)knownFields;
- (id)metricsDataWithEventData:(id)a0;
- (void)addPostProcessingBlock:(id /* block */)a0;
- (void)didCreateMetricsData:(id)a0;
- (id)eventVersion:(id)a0;
- (id)metricsDataWithCallerSuppliedFields:(id)a0;
- (id)metricsDataWithFields:(id)a0;
- (BOOL)mtIncludeBaseFields;

@end
