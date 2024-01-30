@class NSString, MUPlaceCardActionsRowViewController, MUPlaceholderGridCache, MUPlaceSectionView;
@protocol MUPlaceActionRowMenuProvider, MKPlaceActionManagerProtocol;

@interface MUPlaceActionRowSectionController : MUPlaceSectionController <MUPlaceCardActionsRowViewMenuProvider> {
    id<MKPlaceActionManagerProtocol> _actionManager;
    MUPlaceCardActionsRowViewController *_actionsRowViewController;
    MUPlaceSectionView *_sectionView;
    MUPlaceholderGridCache *_placeholderGridCache;
    id<MUPlaceActionRowMenuProvider> _menuProvider;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)_setupButtons;
- (BOOL)hasContent;
- (void).cxx_destruct;
- (id)sectionView;
- (id)analyticsModule;
- (int)analyticsModuleType;
- (id)initWithMapItem:(id)a0 actionManager:(id)a1 menuProvider:(id)a2;
- (BOOL)isImpressionable;
- (id)menuElementForActionItem:(id)a0;
- (id)menuForActionItem:(id)a0;
- (void)updateForActionRowInfoChange;

@end
