@class MWFeedParser, NSString;

@interface WFRSSFeedAction : WFAction <MWFeedParserDelegate>

@property (retain, nonatomic) MWFeedParser *parser;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)cancel;
- (void).cxx_destruct;
- (void)runAsynchronouslyWithInput:(id)a0;
- (void)finishRunningWithError:(id)a0;
- (void)feedParser:(id)a0 didParseFeedItem:(id)a1;
- (void)feedParserDidFinish:(id)a0;
- (void)feedParser:(id)a0 didFailWithError:(id)a1;

@end
