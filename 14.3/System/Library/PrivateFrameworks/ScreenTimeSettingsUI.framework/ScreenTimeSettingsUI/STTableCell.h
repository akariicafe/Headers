@class NSArray, UILayoutGuide, NSMutableArray, UIViewController;

@interface STTableCell : PSTableCell

@property (copy, nonatomic) NSArray *rtlContentLayoutGuideConstraints;
@property (readonly, nonatomic) UILayoutGuide *contentLayoutGuide;
@property (readonly) NSMutableArray *childViewControllers;
@property (weak) UIViewController *parentViewController;

- (void)willMoveToSuperview:(id)a0;
- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1 specifier:(id)a2;
- (BOOL)canReload;
- (void).cxx_destruct;
- (void)layoutSubviews;

@end
