@class UIViewController, NSString, UIViewPropertyAnimator, UIView, CCUIContentModuleDetailTransitioningDelegate, UITapGestureRecognizer;
@protocol HACCContentModule, CCUIContentModuleContentViewController;

@interface HACCContentViewController : UIViewController <UIGestureRecognizerDelegate, CCUIContentModuleContentViewController> {
    unsigned long long _controlType;
    CCUIContentModuleDetailTransitioningDelegate *_detailTransitioningDelegate;
}

@property (retain, nonatomic) UITapGestureRecognizer *tapRecognizer;
@property (retain, nonatomic) UIView<HACCContentModule> *contentView;
@property (retain, nonatomic) UIViewController<CCUIContentModuleContentViewController> *expandedViewController;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } collapsedFrame;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) double preferredExpandedContentHeight;
@property (readonly, nonatomic) double preferredExpandedContentWidth;
@property (readonly, nonatomic) double preferredExpandedContinuousCornerRadius;
@property (readonly, nonatomic) BOOL providesOwnPlatter;
@property (readonly, nonatomic) UIViewPropertyAnimator *customAnimator;
@property (readonly, nonatomic) BOOL shouldPerformHoverInteraction;
@property (readonly, nonatomic) BOOL shouldPerformClickInteraction;

- (void)updateWithValue:(id)a0;
- (void).cxx_destruct;
- (void)updateValue;
- (id)value;
- (void)_handleTapGestureRecognizer:(id)a0;
- (void)updateViewConstraints;
- (BOOL)_canShowWhileLocked;
- (struct CGSize { double x0; double x1; })collapsedContentSize;
- (id)initWithContentModule:(unsigned long long)a0 andDelegate:(id)a1;
- (struct CGSize { double x0; double x1; })collapsedContentUnitSize;
- (long long)layoutRequirement;
- (unsigned long long)controlTypeForModule:(unsigned long long)a0;
- (void)_updatePresentedMenuViewControllerIfNecessary;
- (BOOL)supportsExpanding;
- (void)_updateMenuItemsForViewController:(id)a0;
- (id /* block */)personalAudioToggleBlockForType:(unsigned long long)a0;
- (id)menuModuleViewControllerForProgramModule:(unsigned long long)a0;
- (id)viewControllerForExpandedView;

@end
