@class MTSampling;

@interface MTPerfKit : MTMetricsKitTemplate {
    MTSampling *_sampling;
}

- (void).cxx_destruct;
- (id)initWithTopic:(id)a0;
- (id)pageRenderMeasurementWithPageId:(id)a0 pageType:(id)a1 pageContext:(id)a2 eventData:(id)a3;
- (id)flexibleMeasurementWithEventType:(id)a0;
- (id)flexibleMeasurementWithEventType:(id)a0 eventData:(id)a1;
- (id)loadUrlMeasurement;
- (id)loadUrlMeasurementWithEventData:(id)a0;
- (id)pageRenderMeasurementWithPageId:(id)a0 pageType:(id)a1 pageContext:(id)a2;
- (id)sampling;

@end
