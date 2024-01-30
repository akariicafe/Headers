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
- (void).cxx_destruct;
- (void)dealloc;
- (void)setTitleView:(id)a0;
- (void)setTitleView:(id)a0 animated:(BOOL)a1;
- (id)initWithNavigationItem:(id)a0;
- (void)setTitle:(id)a0;
- (id)backButtonTitle;
- (void)setLeftBarButtonItem:(id)a0 animated:(BOOL)a1;
- (void)setRightBarButtonItem:(id)a0 animated:(BOOL)a1;
- (void)setLeftBarButtonItems:(id)a0 animated:(BOOL)a1;
- (void)setRightBarButtonItems:(id)a0 animated:(BOOL)a1;
- (void)setBackButtonTitle:(id)a0;
- (BOOL)leftItemsSupplementBackButton;
- (id)rightBarButtonItem;
- (id)leftBarButtonItem;
- (void)setHidesBackButton:(BOOL)a0;
- (void)setLeftItemsSupplementBackButton:(BOOL)a0;
- (id)title;
- (id)leftBarButtonItems;
- (id)rightBarButtonItems;
- (void)commitDelayedChanges;
- (void)_prepareButtonItemForDisplay:(id)a0;
- (void)_scheduleCommit;

@end
