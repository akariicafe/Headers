@class MKLocalSearch;

@interface WFSearchLocalBusinessesAction : WFAction

@property (retain, nonatomic) MKLocalSearch *localSearch;

- (void)cancel;
- (void).cxx_destruct;
- (void)runAsynchronouslyWithInput:(id)a0;
- (BOOL)shouldUseMetricSystem;
- (void)runSearchWithLocation:(id)a0;

@end
