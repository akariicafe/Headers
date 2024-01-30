@class NSArray, UIMenuElement;
@protocol MUHeaderButtonMenuActionProvider;

@interface MUPlaceMoreActionsViewModel : MUActionRowItemViewModel {
    id<MUHeaderButtonMenuActionProvider> _menuProvider;
    NSArray *_externalActionMenuHelpers;
    UIMenuElement *_menuElement;
    NSArray *_promotedSystemActionTypes;
    NSArray *_excludedSystemActionTypes;
}

@property (readonly, nonatomic) NSArray *externalActionMenuRevealButtons;

- (id)accessibilityIdentifier;
- (id)symbolName;
- (BOOL)isEnabled;
- (id)titleText;
- (void).cxx_destruct;
- (id)_allExternalActionMenuRevealButtons;
- (id)analyticsButtonValues;
- (id)buildMenuWithPresentationOptions:(id)a0;
- (id)initWithGroupedExternalActions:(id)a0 promotedSystemActionTypes:(id)a1 excludedSystemActionTypes:(id)a2 menuActionProvider:(id)a3 amsResultProvider:(id)a4 iconCache:(id)a5 externalActionHandler:(id)a6 analyticsHandler:(id)a7;

@end
