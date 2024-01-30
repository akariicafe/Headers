@class NSLayoutConstraint, UIView;

@interface SFCapsuleNavigationBarLabelLayoutInfo : NSObject

@property (readonly, nonatomic) UIView *view;
@property (retain, nonatomic) NSLayoutConstraint *constraintToItemBelow;
@property (retain, nonatomic) NSLayoutConstraint *constraintToItemAbove;
@property (retain, nonatomic) NSLayoutConstraint *constraintForHorizontalAlignment;

- (id)initWithView:(id)a0;
- (void).cxx_destruct;

@end
