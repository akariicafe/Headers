@class UIView, NSMutableArray, STSSearchBrowserHeaderView;

@interface STSSearchBrowserRootView : UIView {
    NSMutableArray *_constraints;
}

@property (retain, nonatomic) STSSearchBrowserHeaderView *headerView;
@property (nonatomic) double headerTopInset;
@property (retain, nonatomic) UIView *contentView;

- (void)layoutSubviews;
- (void).cxx_destruct;
- (void)didAddSubview:(id)a0;
- (id)init;

@end
