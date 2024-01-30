@interface MTPerfKit : MTMetricsKitTemplate

- (id)initWithTopic:(id)a0;
- (id)flexibleMeasurementWithEventType:(id)a0;
- (id)pageRenderMeasurementWithPageId:(id)a0 pageType:(id)a1 pageContext:(id)a2 eventData:(id)a3;
- (id)loadUrlMeasurementWithEventData:(id)a0;
- (id)flexibleMeasurementWithEventType:(id)a0 eventData:(id)a1;
- (id)pageRenderMeasurementWithPageId:(id)a0 pageType:(id)a1 pageContext:(id)a2;
- (id)loadUrlMeasurement;

@end
