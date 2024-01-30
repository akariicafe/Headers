@class UIFont, NSTimer, UILabel, NSLayoutConstraint, CNKMomentsIndicatorViewModel;
@protocol CNKMomentsIndicatorBubbleDelegate;

@interface CNKMomentsIndicatorBubble : UIView

@property (class, readonly) UIFont *font;
@property (class, readonly) float layoutPadding;

@property (readonly, nonatomic) UILabel *indicatorLabel;
@property (retain, nonatomic) NSTimer *timer;
@property (retain, nonatomic) NSLayoutConstraint *verticalAlignmentConstraint;
@property (weak, nonatomic) id<CNKMomentsIndicatorBubbleDelegate> delegate;
@property (retain, nonatomic) CNKMomentsIndicatorViewModel *model;
@property (retain, nonatomic) NSLayoutConstraint *bottomConstraint;

- (void)timeOut;
- (id)description;
- (void)start;
- (void).cxx_destruct;
- (void)refresh;
- (id)initWithModel:(id)a0;
- (void)loadConstraints;

@end
