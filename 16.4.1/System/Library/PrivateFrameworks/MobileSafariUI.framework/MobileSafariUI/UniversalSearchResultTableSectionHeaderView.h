@class NSString, NSURL, UIButton;
@protocol UniversalSearchFeedbackDelegate;

@interface UniversalSearchResultTableSectionHeaderView : UITableViewHeaderFooterView <UniversalSearchSectionHeaderViewWithFeedbackDelegate> {
    UIButton *_feedbackButton;
}

@property (copy, nonatomic) NSString *title;
@property (retain, nonatomic) NSURL *reportProblemURL;
@property (weak, nonatomic) id<UniversalSearchFeedbackDelegate> feedbackDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)_handleParsecFeedbackButtonTap:(id)a0;

@end
