@class EKEventViewController, EKEventDetailsHighlightControl;

@interface EKEventReportJunkView : UIView {
    EKEventDetailsHighlightControl *_control;
    EKEventViewController *_controller;
}

@property BOOL isLargeDayView;

- (id)initWithViewController:(id)a0;
- (void)tapped:(id)a0;
- (void)viewDidMoveToSuperview;
- (void).cxx_destruct;
- (void)tintColorDidChange;
- (void)updateActionText;

@end
