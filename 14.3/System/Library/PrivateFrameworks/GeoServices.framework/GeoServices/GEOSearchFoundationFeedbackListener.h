@class NSString, NSArray;

@interface GEOSearchFoundationFeedbackListener : NSObject <SFFeedbackListener> {
    int _uiTarget;
    NSArray *_sections;
    NSArray *_resultCardSections;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)feedbackListenerForParsec;

- (void)cardViewDidAppear:(id)a0;
- (void)didEngageCardSection:(id)a0;
- (void)didEngageSection:(id)a0;
- (void)didRankSections:(id)a0;
- (void)resultsDidBecomeVisible:(id)a0;
- (void)didEngageResult:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (id)traits;
- (id)initWithClientType:(unsigned long long)a0;

@end
