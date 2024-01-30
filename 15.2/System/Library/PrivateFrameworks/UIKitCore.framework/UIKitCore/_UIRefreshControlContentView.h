@class UIColor, UIImpactFeedbackGenerator, NSAttributedString, UIRefreshControl;

@interface _UIRefreshControlContentView : UIView

@property (readonly, nonatomic) long long style;
@property (nonatomic) UIRefreshControl *refreshControl;
@property (retain, nonatomic) UIColor *tintColor;
@property (retain, nonatomic) NSAttributedString *attributedTitle;
@property (readonly, nonatomic) double minimumSnappingHeight;
@property (readonly, nonatomic) double maximumSnappingHeight;
@property (retain, nonatomic) UIImpactFeedbackGenerator *impactFeedbackGenerator;

- (void)willTransitionFromState:(long long)a0 toState:(long long)a1;
- (void)_removeAllAnimations;
- (void).cxx_destruct;
- (double)_heightAtWhichNoneOfTheInterfaceElementsAreVisibleEvenIfTheControlIsStillPartiallyOnScreen;
- (void)refreshControlInvalidatedSnappingHeight;
- (void)didTransitionFromState:(long long)a0 toState:(long long)a1;

@end
