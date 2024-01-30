@class SUGradient, SULoadingView, SUGradientView;

@interface SUPlaceholderViewController : SUViewController {
    BOOL _hideLoadingView;
    SULoadingView *_loadingView;
    SUGradientView *_gradientView;
}

@property (copy, nonatomic) SUGradient *backgroundGradient;
@property (copy, nonatomic) SUGradient *defaultBackgroundGradient;
@property (readonly, nonatomic) SULoadingView *loadingView;
@property (nonatomic) BOOL shouldShowLoadingView;

- (id)init;
- (void)dealloc;
- (void)loadView;
- (void)setScriptProperties:(id)a0;
- (void)setSkLoading:(BOOL)a0;
- (id)copyArchivableContext;
- (id)copyDefaultScriptProperties;
- (void)parentViewControllerHierarchyDidChange;
- (void)_bagDidLoadNotification:(id)a0;
- (void)_reloadBackgroundGradient;
- (void)_reloadLoadingView;
- (id)_newURLBagBackgroundGradient;
- (id)_copyActiveGradient;

@end
