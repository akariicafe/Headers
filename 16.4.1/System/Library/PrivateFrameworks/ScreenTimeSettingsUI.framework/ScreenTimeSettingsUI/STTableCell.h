@class NSArray, UILayoutGuide, NSMutableArray, UIViewController;

@interface STTableCell : PSTableCell

@property (copy, nonatomic) NSArray *rtlContentLayoutGuideConstraints;
@property (readonly, nonatomic) UILayoutGuide *contentLayoutGuide;
@property (readonly) NSMutableArray *childViewControllers;
@property (weak) UIViewController *parentViewController;

- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1 specifier:(id)a2;
- (BOOL)canReload;
- (void)layoutSubviews;
- (void)willMoveToSuperview:(id)a0;
- (void).cxx_destruct;

@end
