@class OKTransition, NSString, NSArray, NSMutableDictionary, OKWidgetView, OFUIView;

@interface OKWidgetGroupView : OKWidgetView <OKWidgetViewCollection, OKWidgetGroupViewExports> {
    long long _index;
    NSArray *_items;
    NSMutableDictionary *_itemWidgetViews;
    OKWidgetView *_currentWidgetView;
    OKTransition *_transition;
    NSString *_switchActionScript;
    BOOL _autoplay;
    BOOL _loop;
    double _itemDuration;
    BOOL _isInTransition;
    struct UIEdgeInsets { double top; double left; double bottom; double right; } _itemEdgeInsets;
    OFUIView *_itemContainerView;
}

@property (readonly, nonatomic) BOOL isPlaying;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)setupJavascriptContext:(id)a0;
+ (id)supportedSettings;

- (void)_stop;
- (BOOL)prepareForDisplay:(BOOL)a0;
- (id)initWithWidget:(id)a0;
- (void)dealloc;
- (id)settingObjectForKey:(id)a0;
- (void)layoutSubviews;
- (id)valueForUndefinedKey:(id)a0;
- (void)_play;
- (void)prepareForReload;
- (void)setSettingItems:(id)a0;
- (id)_nextWidgetView;
- (void)setSettingLoop:(BOOL)a0;
- (void)_gotoIndex:(long long)a0;
- (void)_gotoNextIndex;
- (void)_jsGotoIndex:(long long)a0;
- (void)_jsTransitionToIndex:(long long)a0 forward:(BOOL)a1 andLocation:(struct CGPoint { double x0; double x1; })a2 completionHandler:(id /* block */)a3;
- (void)_jsTransitionToIndex:(long long)a0 withTransition:(id)a1 completionHandler:(id /* block */)a2;
- (void)_prepareAllForUnload:(BOOL)a0 except:(id)a1;
- (id)_previousWidgetView;
- (void)_reloadWidgetViews;
- (void)_transitionToIndex:(long long)a0 forward:(BOOL)a1 andLocation:(struct CGPoint { double x0; double x1; })a2 completionHandler:(id /* block */)a3;
- (void)_transitionToIndex:(long long)a0 withTransition:(id)a1 completionHandler:(id /* block */)a2;
- (void)_updateDisplayedWidgetViews;
- (id)_widgetViewForIndex:(long long)a0;
- (id)collectionItemAtIndexPath:(id)a0;
- (id)collectionItemForName:(id)a0;
- (unsigned long long)collectionItemsCount;
- (id)collectionItemsNames;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })itemContainerRect;
- (id)layoutSettingsKeys;
- (void)prepareForRefresh;
- (BOOL)prepareForUnload:(BOOL)a0;
- (BOOL)prepareForWarmup:(BOOL)a0;
- (long long)rotatedIndexForIndex:(long long)a0;
- (void)setAntialiasing:(BOOL)a0;
- (void)setSettingAutoplay:(BOOL)a0;
- (void)setSettingIndex:(long long)a0;
- (void)setSettingItemDuration:(double)a0;
- (void)setSettingItemEdgeInsets:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })a0;
- (void)setSettingSwitchActionScript:(id)a0;
- (void)setSettingTransition:(id)a0;
- (long long)settingIndex;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })settingItemEdgeInsets;
- (id)settingTransition;

@end
