@class UIStackView, NSArray, NSString, NSLayoutConstraint, UIViewController;

@interface MCLViewControllerCollection : UIScrollView <UIScrollViewDelegate> {
    UIStackView *_contentView;
    NSLayoutConstraint *_widthConstraint;
}

@property (weak, nonatomic) UIViewController *owner;
@property (nonatomic) double spacing;
@property (copy, nonatomic) NSArray *views;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
