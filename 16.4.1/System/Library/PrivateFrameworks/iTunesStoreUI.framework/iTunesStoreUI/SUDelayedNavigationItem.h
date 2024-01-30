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

- (void)dealloc;
- (id)titleView;
- (void)setTitleView:(id)a0;
- (id)title;
- (id)initWithNavigationItem:(id)a0;
- (id)navigationBar;
- (void)setTitle:(id)a0;
- (void).cxx_destruct;
- (void)setLeftBarButtonItems:(id)a0 animated:(BOOL)a1;
- (void)setRightBarButtonItem:(id)a0 animated:(BOOL)a1;
- (id)backButtonTitle;
- (id)leftBarButtonItem;
- (id)leftBarButtonItems;
- (BOOL)leftItemsSupplementBackButton;
- (id)rightBarButtonItem;
- (id)rightBarButtonItems;
- (void)setBackButtonTitle:(id)a0;
- (void)setHidesBackButton:(BOOL)a0;
- (void)setLeftBarButtonItem:(id)a0 animated:(BOOL)a1;
- (void)setLeftItemsSupplementBackButton:(BOOL)a0;
- (void)setRightBarButtonItems:(id)a0 animated:(BOOL)a1;
- (void)setTitleView:(id)a0 animated:(BOOL)a1;
- (void)_scheduleCommit;
- (void)_prepareButtonItemForDisplay:(id)a0;
- (void)commitDelayedChanges;

@end
