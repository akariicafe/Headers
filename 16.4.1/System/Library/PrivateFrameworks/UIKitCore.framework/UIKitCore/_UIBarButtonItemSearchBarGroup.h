@class UISearchBar, UIBarButtonItem;

@interface _UIBarButtonItemSearchBarGroup : UIBarButtonItemGroup {
    BOOL _hadRepresentativeItemBeforeMovingToProvisionalState;
    BOOL _disabledExpansion;
    double _contextualExpandedPadding;
    BOOL _providesRestingMeasurementValues;
    UIBarButtonItem *_searchItem;
    UISearchBar *_searchBar;
    UIBarButtonItem *_searchIconItem;
}

- (id)initWithBarButtonItems:(id)a0 representativeItem:(id)a1;
- (void)setBarButtonItems:(id)a0;
- (BOOL)_isCritical;
- (double)_contextualExpandedPadding;
- (void)setHidden:(BOOL)a0;
- (void)setRepresentativeItem:(id)a0;
- (BOOL)_disabledExpansion;
- (void).cxx_destruct;

@end
