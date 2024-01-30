@class MKLocalSearch;

@interface WFSearchLocalBusinessesAction : WFAction

@property (retain, nonatomic) MKLocalSearch *localSearch;

- (void).cxx_destruct;
- (void)cancel;
- (void)runAsynchronouslyWithInput:(id)a0;
- (void)getContentDestinationWithCompletionHandler:(id /* block */)a0;
- (id)smartPromptWithContentDescription:(id)a0 contentDestination:(id)a1 workflowName:(id)a2;
- (BOOL)shouldUseMetricSystem;
- (void)runSearchWithLocation:(id)a0 inputDisclosureLevel:(unsigned long long)a1;

@end
