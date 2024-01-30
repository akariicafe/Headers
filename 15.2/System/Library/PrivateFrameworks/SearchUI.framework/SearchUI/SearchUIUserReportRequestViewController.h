@protocol SearchUIFeedbackDelegate;

@interface SearchUIUserReportRequestViewController : UIAlertController

@property (retain) id<SearchUIFeedbackDelegate> feedbackDelegate;

- (void)viewWillDisappear:(BOOL)a0;
- (BOOL)_canShowWhileLocked;
- (void).cxx_destruct;
- (id)initWithResult:(id)a0 cardSection:(id)a1 feedbackDelegate:(id)a2 sourceView:(id)a3;
- (id)initWithResult:(id)a0 cardSection:(id)a1 userReportRequest:(id)a2 feedbackDelegate:(id)a3 sourceView:(id)a4;
- (void)sendFeedbackForResult:(id)a0 cardSection:(id)a1 selectedPunchout:(id)a2;

@end
