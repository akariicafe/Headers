@class UIViewController, UIView;

@interface AKAuthorizationSubPane : NSObject <AKAuthorizationSubPaneAdding>

@property (readonly, nonatomic) UIView *internalView;
@property (nonatomic) double internalCustomSpacingAfter;
@property (readonly, nonatomic) UIViewController *viewController;
@property (readonly, nonatomic) UIView *view;
@property (nonatomic) double customSpacingAfter;

- (id)initWithViewController:(id)a0;
- (id)initWithView:(id)a0;
- (void).cxx_destruct;
- (void)addToConstraints:(id)a0 context:(id)a1;
- (void)addToStackView:(id)a0 context:(id)a1;

@end
