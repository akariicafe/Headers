@class EKEventViewController, EKEventDetailsHighlightControl;

@interface EKEventReportJunkView : UIView {
    EKEventDetailsHighlightControl *_control;
    EKEventViewController *_controller;
}

@property BOOL isLargeDayView;

- (void)tapped:(id)a0;
- (void).cxx_destruct;
- (void)viewDidMoveToSuperview;
- (id)initWithViewController:(id)a0;

@end
