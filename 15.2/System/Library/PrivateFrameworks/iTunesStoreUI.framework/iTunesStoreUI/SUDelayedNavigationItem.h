@class NSNumber, SUNavigationItem;

@interface SUDelayedNavigationItem : SUNavigationItem {
    BOOL _delayedBackButtonHidden;
    id _delayedBackButtonTitle;
    id _delayedLeftBarButtonItems;
    NSNumber *_delayedLeftItemsSupplementBackButton;
    id _delayedTitle;
    id _delayedTitleView;
    id _delayedRightBarButtonItems;
}

@property (retain, nonatomic) SUNavigationItem *wrappedNavigationItem;
@property (nonatomic) BOOL shouldDelayChanges;

- (id)navigationBar;
- (id)titleView;
- (void)setTitleView:(id)a0;
- (id)title;
- (void).cxx_destruct;
- (void)setRightBarButtonItems:(id)a0 animated:(BOOL)a1;
- (void)setLeftItemsSupplementBackButton:(BOOL)a0;
- (void)setRightBarButtonItem:(id)a0 animated:(BOOL)a1;
- (void)setLeftBarButtonItems:(id)a0 animated:(BOOL)a1;
- (BOOL)leftItemsSupplementBackButton;
- (void)setLeftBarButtonItem:(id)a0 animated:(BOOL)a1;
- (id)backButtonTitle;
- (void)setTitle:(id)a0;
- (id)leftBarButtonItem;
- (void)dealloc;
- (id)leftBarButtonItems;
- (id)rightBarButtonItem;
- (id)initWithNavigationItem:(id)a0;
- (id)rightBarButtonItems;
- (void)setBackButtonTitle:(id)a0;
- (void)setHidesBackButton:(BOOL)a0;
- (void)setTitleView:(id)a0 animated:(BOOL)a1;
- (void)commitDelayedChanges;
- (void)_prepareButtonItemForDisplay:(id)a0;
- (void)_scheduleCommit;

@end
