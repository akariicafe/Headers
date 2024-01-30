@protocol SearchUIFeedbackDelegate;

@interface SearchUIUserReportRequestViewController : UIAlertController

@property (retain) id<SearchUIFeedbackDelegate> feedbackDelegate;

- (void).cxx_destruct;
- (void)viewWillDisappear:(BOOL)a0;
- (void)sendFeedbackForResult:(id)a0 cardSection:(id)a1 selectedPunchout:(id)a2;
- (id)initWithResult:(id)a0 cardSection:(id)a1 feedbackDelegate:(id)a2 sourceView:(id)a3;
- (BOOL)_canShowWhileLocked;

@end
