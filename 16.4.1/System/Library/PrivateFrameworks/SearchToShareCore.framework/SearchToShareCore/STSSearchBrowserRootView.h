@class UIView, NSMutableArray, STSSearchBrowserHeaderView;

@interface STSSearchBrowserRootView : UIView {
    NSMutableArray *_constraints;
}

@property (retain, nonatomic) STSSearchBrowserHeaderView *headerView;
@property (nonatomic) double headerTopInset;
@property (retain, nonatomic) UIView *contentView;

- (void)didAddSubview:(id)a0;
- (void)layoutSubviews;
- (id)init;
- (void).cxx_destruct;

@end
