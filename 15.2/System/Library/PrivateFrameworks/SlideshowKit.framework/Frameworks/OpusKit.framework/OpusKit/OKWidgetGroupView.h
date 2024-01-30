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

+ (id)supportedSettings;
+ (void)setupJavascriptContext:(id)a0;

- (BOOL)prepareForDisplay:(BOOL)a0;
- (id)valueForUndefinedKey:(id)a0;
- (void)layoutSubviews;
- (void)_stop;
- (void)_play;
- (id)initWithWidget:(id)a0;
- (void)dealloc;
- (void)prepareForReload;
- (void)setSettingItems:(id)a0;
- (id)settingObjectForKey:(id)a0;
- (void)setSettingAutoplay:(BOOL)a0;
- (void)setSettingLoop:(BOOL)a0;
- (BOOL)prepareForWarmup:(BOOL)a0;
- (BOOL)prepareForUnload:(BOOL)a0;
- (id)collectionItemAtIndexPath:(id)a0;
- (void)prepareForRefresh;
- (id)layoutSettingsKeys;
- (void)setSettingTransition:(id)a0;
- (void)setAntialiasing:(BOOL)a0;
- (unsigned long long)collectionItemsCount;
- (id)collectionItemsNames;
- (id)collectionItemForName:(id)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })itemContainerRect;
- (long long)rotatedIndexForIndex:(long long)a0;
- (id)_widgetViewForIndex:(long long)a0;
- (void)_updateDisplayedWidgetViews;
- (id)_previousWidgetView;
- (id)_nextWidgetView;
- (void)_prepareAllForUnload:(BOOL)a0 except:(id)a1;
- (void)_transitionToIndex:(long long)a0 withTransition:(id)a1 completionHandler:(id /* block */)a2;
- (void)_reloadWidgetViews;
- (void)_gotoIndex:(long long)a0;
- (void)_transitionToIndex:(long long)a0 forward:(BOOL)a1 andLocation:(struct CGPoint { double x0; double x1; })a2 completionHandler:(id /* block */)a3;
- (void)_gotoNextIndex;
- (void)_jsTransitionToIndex:(long long)a0 forward:(BOOL)a1 andLocation:(struct CGPoint { double x0; double x1; })a2 completionHandler:(id /* block */)a3;
- (void)_jsTransitionToIndex:(long long)a0 withTransition:(id)a1 completionHandler:(id /* block */)a2;
- (void)_jsGotoIndex:(long long)a0;
- (id)settingTransition;
- (void)setSettingIndex:(long long)a0;
- (long long)settingIndex;
- (void)setSettingItemDuration:(double)a0;
- (void)setSettingSwitchActionScript:(id)a0;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })settingItemEdgeInsets;
- (void)setSettingItemEdgeInsets:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })a0;

@end
