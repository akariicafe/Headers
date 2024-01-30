@class NSString, MKPlaceCardActionsRowViewController, MUPlaceSectionView;
@protocol MUPlaceActionRowMenuProvider, MKPlaceActionManagerProtocol;

@interface MUPlaceActionRowSectionController : MUPlaceSectionController <_MKPlaceViewControllerDelegate> {
    id<MKPlaceActionManagerProtocol> _actionManager;
    MKPlaceCardActionsRowViewController *_actionsRowViewController;
    MUPlaceSectionView *_sectionView;
    id<MUPlaceActionRowMenuProvider> _menuProvider;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)_setupButtons;
- (void).cxx_destruct;
- (BOOL)hasContent;
- (id)sectionView;
- (id)analyticsModule;
- (void)updateForActionRowInfoChange;
- (int)analyticsModuleType;
- (id)initWithMapItem:(id)a0 actionManager:(id)a1 menuProvider:(id)a2;
- (id)menuElementForActionItem:(id)a0;

@end
