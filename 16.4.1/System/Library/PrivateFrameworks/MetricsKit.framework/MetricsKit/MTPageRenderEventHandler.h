@class NSString;
@protocol MTPageRenderEventHandlerDelegate;

@interface MTPageRenderEventHandler : MTEventHandler <MTPerfBaseMeasurementTransformation>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<MTPageRenderEventHandlerDelegate> delegate;

- (id)eventType;
- (id)knownFields;
- (id)metricsDataWithPageId:(id)a0 pageType:(id)a1 pageContext:(id)a2 eventData:(id)a3;
- (id)metricsDataWithPerfMeasurement:(id)a0;
- (void)didCreateMetricsData:(id)a0;
- (id)eventVersion:(id)a0;
- (id)xpSamplingPercentageUsers:(id)a0;
- (id)xpSessionDuration:(id)a0;

@end
