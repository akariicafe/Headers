@class UIStackView, NSArray, NSString, UISelectionFeedbackGenerator, UIView, UILongPressGestureRecognizer;
@protocol SBUIActionPlatterViewControllerDelegate;

@interface SBUIActionPlatterViewController : UIViewController <UIGestureRecognizerDelegate> {
    struct { unsigned char actionPlatterViewControllerShouldRespondToTouches : 1; } _delegateRespondsTo;
    UIStackView *_stackView;
    UIView *_keylinesContainerView;
    UISelectionFeedbackGenerator *_feedbackRetargetBehavior;
}

@property (readonly, copy, nonatomic) NSArray *actions;
@property (nonatomic) unsigned long long systemInteractionStartIndex;
@property (readonly, weak, nonatomic) UILongPressGestureRecognizer *gestureRecognizer;
@property (nonatomic) BOOL reversesActions;
@property (nonatomic) long long imagePosition;
@property (weak, nonatomic) id<SBUIActionPlatterViewControllerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)viewWillDisappear:(BOOL)a0;
- (void)_handleLongPressGestureRecognizer:(id)a0;
- (void)loadView;
- (id)initWithCoder:(id)a0;
- (void)viewDidAppear:(BOOL)a0;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (BOOL)gestureRecognizerShouldBegin:(id)a0;
- (BOOL)_canShowWhileLocked;
- (id)initWithActions:(id)a0 gestureRecognizer:(id)a1;
- (void)_updateKeylineViews;

@end
