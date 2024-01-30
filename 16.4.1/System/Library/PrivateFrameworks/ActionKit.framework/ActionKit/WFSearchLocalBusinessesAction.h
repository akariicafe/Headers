@class MKLocalSearch;

@interface WFSearchLocalBusinessesAction : WFAction

@property (retain, nonatomic) MKLocalSearch *localSearch;

- (void)cancel;
- (void).cxx_destruct;
- (void)getContentDestinationWithCompletionHandler:(id /* block */)a0;
- (void)runAsynchronouslyWithInput:(id)a0;
- (id)smartPromptWithContentDescription:(id)a0 contentDestination:(id)a1 workflowName:(id)a2;
- (void)runSearchWithLocation:(id)a0 inputDisclosureLevel:(unsigned long long)a1;
- (BOOL)shouldUseMetricSystem;

@end
