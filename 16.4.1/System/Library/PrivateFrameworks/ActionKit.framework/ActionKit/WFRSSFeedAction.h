@class MWFeedParser, NSString;

@interface WFRSSFeedAction : WFAction <MWFeedParserDelegate>

@property (retain, nonatomic) MWFeedParser *parser;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)cancel;
- (void).cxx_destruct;
- (id)contentDestinationWithError:(id *)a0;
- (void)finishRunningWithError:(id)a0;
- (void)runAsynchronouslyWithInput:(id)a0;
- (id)smartPromptWithContentDescription:(id)a0 contentDestination:(id)a1 workflowName:(id)a2;
- (void)feedParser:(id)a0 didFailWithError:(id)a1;
- (void)feedParser:(id)a0 didParseFeedItem:(id)a1;
- (void)feedParserDidFinish:(id)a0;
- (void)getURLsFromInputWithCompletionHandler:(id /* block */)a0;

@end
