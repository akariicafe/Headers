@class NSString;
@protocol WBSParsecSearchResultPresentedInCard, WBSCompletionListItem;

@interface WBSParsecSearchMapsResultFeedbackSender : NSObject <_MKPlaceViewControllerFeedbackDelegate> {
    long long _queryID;
}

@property (readonly, weak, nonatomic) id<WBSParsecSearchResultPresentedInCard, WBSCompletionListItem> searchResult;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)placeViewController:(id)a0 shouldLogFeedbackOfType:(int)a1;
- (void).cxx_destruct;
- (id)initWithSearchResult:(id)a0;

@end
